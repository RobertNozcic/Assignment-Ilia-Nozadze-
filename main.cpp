#include <iostream>
#include <fstream>

#include "Book.h"
#include "DVD.h"
#include "Magazine.h"
#include "ResearchPaper.h"

using namespace std;

int main() {
    Book book(1, "Master and Margarita", "Mikhail Bulgakov", 1967, true, "", "");
    DVD dvd(2, "The Matrix", "The Wachowskis", 1999, true, "", "");
    Magazine magazine(3, "National Geographic June", "National Geographic", 2026, true, "", "");
    ResearchPaper paper(4, "Artificial Intelligence in Libraries", "Nino Beridze", 2024, true, "", "");

    cout << "Morning inventory:" << endl;
    book.display();
    dvd.display();
    magazine.display();
    paper.display();

    cout << endl << "Library day simulation:" << endl;

    book.borrowItem("Ana", "2026-06-07");
    cout << "Ana came in and borrowed " << book.getTitle() << "." << endl;

    dvd.borrowItem("Giorgi", "2026-06-07");
    cout << "Giorgi came in and borrowed " << dvd.getTitle() << "." << endl;

    book.returnItem();
    cout << "Ana returned " << book.getTitle() << " before closing." << endl;

    cout << "Giorgi did not return " << dvd.getTitle() << "." << endl;
    cout << "Late fee after 3 overdue days: " << dvd.calculateLateFee(3) << " GEL" << endl;

    cout << endl << "Closing inventory:" << endl;
    book.display();
    dvd.display();
    magazine.display();
    paper.display();

    ofstream file("library.txt");
    book.saveToFile(file);
    dvd.saveToFile(file);
    magazine.saveToFile(file);
    paper.saveToFile(file);
    file.close();

    return 0;
}
