#pragma once
#include "LibraryItem.h"

class DVD : public LibraryItem{
public:
    DVD(int id, string title, string author, int publicationYear, bool available, string borrowerName, string borrowDate)
    : LibraryItem(id, title, author, publicationYear, available, borrowerName, borrowDate) {}

    void display() const override;
    void saveToFile(ofstream& out) const override;
    string getType() const override;
    double calculateLateFee(int overdueDays) const override;
};


