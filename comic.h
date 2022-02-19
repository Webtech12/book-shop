#include <iostream>
using namespace std;

class Book
{
public:
    string author;
    string title;
    string publisher;
    double price;
    int stock_position;

public:
    Book();
    void insertRecords();
    void displayRecords();
    void isInStock(int, string);
    int searchRecords(string, string);
};

// constructor function
Book::Book()
{
    string *author = new string[50];
    string *title = new string[50];
    string *publisher = new string[50];
    price = 0;
    stock_position = 0;
}
