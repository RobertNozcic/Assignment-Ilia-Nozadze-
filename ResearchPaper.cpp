

#include "ResearchPaper.h"

#include <iostream>
#include <ostream>
#include <fstream>

void ResearchPaper::display() const {
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

string ResearchPaper::getType() const {
    return "Research Paper";
}

void ResearchPaper::saveToFile(ofstream &out) const {
    out << this->getId() << ", " << this->getTitle() << ", " << this->getAuthor()
        << ", " << this->getType() << ", " << this->getPublicationYear()
        << ", " << (this->isAvailable() ? "Available" : "Borrowed")
        << ", " << this->getBorrowerName() << ", " << this->getBorrowDate() << endl;
}

double ResearchPaper::calculateLateFee(int overdueDays) const {
    return 0.3 * overdueDays;
}
