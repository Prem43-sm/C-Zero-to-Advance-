#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    Book(string title, string author, double price) {
        this->title = title;
        this->author = author;
        this->price = price;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book book("C++ Basics", "Prem", 299.0);
    book.display();

    return 0;
}
