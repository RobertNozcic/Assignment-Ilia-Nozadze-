

#include "DVD.h"
#include <iostream>
#include <ostream>
#include <fstream>

void DVD::display() const {
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

string DVD::getType() const {
    return "DVD";
}

void DVD::saveToFile(ofstream &out) const {
    out << this->getId() << ", " << this->getTitle() << ", " << this->getAuthor()
        << ", " << this->getType() << ", " << this->getPublicationYear()
        << ", " << (this->isAvailable() ? "Available" : "Borrowed")
        << ", " << this->getBorrowerName() << ", " << this->getBorrowDate() << endl;
}

double DVD::calculateLateFee(int overdueDays) const {
    return 0.1 * overdueDays;
}
