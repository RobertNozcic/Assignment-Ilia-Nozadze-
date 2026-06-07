#pragma once
#include <fstream>
#include <string>

using namespace std;

class LibraryItem {
    int id;
    string title;
    string author;
    int publicationYear;
    bool available;
    string borrowerName;
    string borrowDate;

public:

    virtual void display() const = 0;
    virtual string getType() const = 0;
    virtual void saveToFile(ofstream& out) const = 0;
    virtual double calculateLateFee(int overdueDays) const = 0;

    LibraryItem();
    LibraryItem(int id, string title, string author, int publicationYear, bool available, string borrowerName, string borrowDate);
    virtual ~LibraryItem();
    int getId() const;
    string getTitle() const;
    string getAuthor() const;
    int getPublicationYear() const;
    bool isAvailable() const;
    string getBorrowerName() const;
    string getBorrowDate() const;

    void setBorrowerName(string borrowerName);
    void setBorrowDate(string borrowDate);
    void setAvailable(bool available);
    void setBorrowerName(string borrowerName, string borrowDate);

    void borrowItem();
    void borrowItem(string borrowerName, string borrowDate);
    void returnItem();

    bool operator==(const LibraryItem& other) const;

};


