

#include "Magazine.h"

#include <iostream>
#include <ostream>
#include <fstream>

void Magazine::display() const {
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

string Magazine::getType() const {
    return "Magazine";
}

void Magazine::saveToFile(ofstream &out) const {
    out << this->getId() << ", " << this->getTitle() << ", " << this->getAuthor()
        << ", " << this->getType() << ", " << this->getPublicationYear()
        << ", " << (this->isAvailable() ? "Available" : "Borrowed")
        << ", " << this->getBorrowerName() << ", " << this->getBorrowDate() << endl;
}

double Magazine::calculateLateFee(int overdueDays) const {
    return 0.2 * overdueDays;
}
