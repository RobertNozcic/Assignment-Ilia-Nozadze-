
#include <iostream>
#include <fstream>
#include "Book.h"

void Book::display() const {
    cout << "[" << this->getType() << "] "
         << this->getTitle() << " by " << this->getAuthor()
         << " (" << this->getPublicationYear() << ") - ";

    if (this->isAvailable()) {
        cout << "Available";
    } else {
        cout << "Borrowed by " << this->getBorrowerName()
             << " on " << this->getBorrowDate();
    }

    cout << endl;
}

string Book::getType() const {
    return "Book";
}

void Book::saveToFile(ofstream &out) const {
    out << this->getId() << ", " << this->getTitle() << ", " << this->getAuthor()
        << ", " << this->getType() << ", " << this->getPublicationYear()
        << ", " << (this->isAvailable() ? "Available" : "Borrowed")
        << ", " << this->getBorrowerName() << ", " << this->getBorrowDate() << endl;
}

double Book::calculateLateFee(int overdueDays) const {
    return 0.5 * overdueDays;
}
