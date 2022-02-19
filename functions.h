#include "comic.h"

// funtion to insert records
void Book::insertRecords()
{
    cout << "\n Enter the name of Book: ";
    cin >> title;
    cout << "\n Enter The Name Of Author: ";
    cin >> author;
    cout << "\n Enter The name of Publisher: ";
    cin >> publisher;
    cout << "\n Enter the Price of book: ";
    cin >> price;
    while (cin.fail())
    {
        cout << "Error entering price" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cout << "\n Enter the Price of book again: ";
        cin >> price;
    }
    cout << "\n Enter Stock of book: ";
    cin >> stock_position;
    while (cin.fail())
    {
        cout << "Error entering stock" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cout << "\n Enter Stock of book again: ";
        cin >> stock_position;
    }
}

// funtion to display records
void Book::displayRecords()
{
    cout << "\n " << title << " \t " << author << " \t\t " << publisher << " \t\t " << price << " \t " << stock_position;
}

// funtion to search for records
int Book::searchRecords(string t, string a)
{
    int title_res = title.compare(t);
    int author_res = author.compare(a);

    if (title_res == 0 && author_res == 0)
    {
        return 1;
    }
    else
    {
        return 1;
    }
}

void Book::isInStock(int num, string book_name)
{
    if (stock_position >= num)
    {
        cout << "\n"
             << book_name << " is avilable";
        cout << "\n Cost of " << num << " books is Rs." << (price * num);
    }
    else
    {
        cout << "\n Required copies not in stock";
    }
}