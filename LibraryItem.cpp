
#include <iostream>
#include "LibraryItem.h"

LibraryItem::LibraryItem() {
    this->id = 0;
    this->title = "";
    this->author = "";
    this->publicationYear = 0;
    this->available = true;
    this->borrowerName = "";
    this->borrowDate = "";
}

LibraryItem::LibraryItem(int id, string title, string author, int publicationYear, bool available, string borrowerName,
                         string borrowDate) {
    this->id = id;
    this->title = title;
    this->author = author;
    this->publicationYear = publicationYear;
    this->available = available;
    this->borrowerName = borrowerName;
    this->borrowDate = borrowDate;
}

LibraryItem::~LibraryItem() {

}

int LibraryItem::getId() const {
    return id;
}

string LibraryItem::getTitle() const {
    return title;
}

string LibraryItem::getAuthor() const {
    return author;
}

int LibraryItem::getPublicationYear() const {
    return publicationYear;
}

bool LibraryItem::isAvailable() const {
    return available;
}

string LibraryItem::getBorrowerName() const {
    return borrowerName;
}

string LibraryItem::getBorrowDate() const {
    return borrowDate;
}

void LibraryItem::setBorrowerName(string borrowerName) {
    this->borrowerName = borrowerName;
}

void LibraryItem::setBorrowDate(string borrowDate) {
    this->borrowDate = borrowDate;
}

void LibraryItem::setAvailable(bool available) {
    this->available = available;
}

void LibraryItem::setBorrowerName(string borrowerName, string borrowDate) {
    this->borrowerName = borrowerName;
    this->borrowDate = borrowDate;
}

void LibraryItem::borrowItem() {
    available = false;
}

void LibraryItem::borrowItem(string borrowerName, string borrowDate) {
    available = false;
    this->borrowerName = borrowerName;
    this->borrowDate = borrowDate;
}

void LibraryItem::returnItem() {
    available = true;
    borrowerName = "";
    borrowDate = "";
}

bool LibraryItem::operator==(const LibraryItem &other) const {
    return this->id == other.id;
}
