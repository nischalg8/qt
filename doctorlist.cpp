#include "doctorlist.h"
#include "ui_doctorlist.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QMessageBox>

doctorlist::doctorlist(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::doctorlist)
{
    ui->setupUi(this);

    // Create a central widget
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // Create a layout for the central widget
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    // Create the table widget
    ui->table = new QTableWidget(100, 6, this);
    layout->addWidget(ui->table);

    ui->table->setEditTriggers(QAbstractItemView::NoEditTriggers);//yo property le readonly banauxa

    // Set the column headers
    QStringList headers;
    headers << "S.N." << "Doctor Name" << "Specialization" << "Availability" << "Contacts" << "Book Appointment";
    ui->table->setHorizontalHeaderLabels(headers);

    // Hide the vertical header (row numbers)
    ui->table->verticalHeader()->setVisible(false);

    // Enable stretch mode for headers for responsive behavior
    ui->table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Adjust specific columns to resize proportionally for better responsiveness
    ui->table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents); // S.N. column
    ui->table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);          // Doctor Name column
    ui->table->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);          // Specialization column
    ui->table->horizontalHeader()->setSectionResizeMode(3, QHeaderView::ResizeToContents); // Availability column
    ui->table->horizontalHeader()->setSectionResizeMode(4, QHeaderView::ResizeToContents); // Contacts column
    ui->table->horizontalHeader()->setSectionResizeMode(5, QHeaderView::ResizeToContents); // Book Appointment column

    // Sample data for doctors and their specializations
    QStringList doctorNames = {
        "Dr. John Smith", "Dr. Emily Davis", "Dr. Michael Brown",
        "Dr. Sarah Johnson", "Dr. William Lee", "Dr. Emma Wilson",
        "Dr. Olivia Taylor", "Dr. James White", "Dr. Linda Harris",
        "Dr. Robert Clark", // Add more names as needed
    };

    QStringList specializations = {
        "Cardiology", "Neurology", "Orthopedics",
        "Pediatrics", "Dermatology", "General Surgery",
        "Gynecology", "Psychiatry", "Ophthalmology",
        "Urology", // Add more specializations as needed
    };

    // Populate the table with sample data
    for (int i = 0; i < 100; ++i) {
        // Create non-editable items for each column
        QTableWidgetItem *snItem = new QTableWidgetItem(QString::number(i + 1));
        ui->table->setItem(i, 0, snItem);
        QTableWidgetItem *nameItem = new QTableWidgetItem(doctorNames[i % doctorNames.size()]);
        ui->table->setItem(i, 1, nameItem);
        QTableWidgetItem *specItem = new QTableWidgetItem(specializations[i % specializations.size()]);
        ui->table->setItem(i, 2, specItem);
        QTableWidgetItem *availItem = new QTableWidgetItem(QString("Available"));
        ui->table->setItem(i, 3, availItem);
        QTableWidgetItem *contactItem = new QTableWidgetItem(QString("Contact %1").arg(i + 1));
        ui->table->setItem(i, 4, contactItem);

        // Add the "Book Appointment" button
        QPushButton *bookButton = new QPushButton("Book Appointment");
        bookButton->setText("Book ");
         bookButton->setStyleSheet(
           "QPushButton {"
          "background-color: #4CAF50;"
            "border: none;"
           "text-align: center;"
           "text-decoration: none;"

            "cursor: pointer;"
           "}"
           "QPushButton:hover {"
            "    background-color: #45a049;"
            "}"
            "QPushButton:pressed {"
           "    background-color: #367c39;"
           "    border-radius: 5px;"
             "}"
            );
        connect(bookButton, &QPushButton::clicked, [this, i]() {
            handleBookButtonClick(i);
        });
        ui->table->setCellWidget(i, 5, bookButton);
    }
}

doctorlist::~doctorlist()
{
    delete ui;
}


void doctorlist::handleBookButtonClick(int row)
{

    QString doctorName = ui->table->item(row, 1)->text();
    QMessageBox::information(this, "Booking", QString("Booked an appointment with %1").arg(doctorName));
}
