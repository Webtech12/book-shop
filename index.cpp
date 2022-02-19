#include <string.h>
#include "functions.h"

int main()
{

    // initializing used vars
    int selected, display_i = 1, i, requested, key = 0;
    string keyword_title, keyword_author, selected_book;
    bool available = false;
    Book book_obj[50];

    do
    {
        cout << "\n-----------BOOK SHOP.PK-----------";
        cout << "\n 1.Insert Book \n 2.Display Records \n 3.Search \n 0.Exit";
        cout << "\n Enter Your Choice: ";
        cin >> selected;

        // cases to print output as desired
        switch (selected)
        {
        case 1:
            cout << "\n How many books data u want to enter";
            cin >> display_i;
            for (i = 0; i < display_i; i++)
            {
                book_obj[i].insertRecords();
            }
            break;
        case 2:
            cout << "\n TITLE \t AUTHOR \t PUBLISHER \t PRICE \t STOCK \n";
            for (i = 0; i < display_i; i++)
            {
                cout << "\n";
                book_obj[i].displayRecords();
            }
            break;
        case 3:
            cout << "\n Enter title : ";
            cin >> keyword_title;
            cout << "\n Enter author name : ";
            cin >> keyword_author;

            for (i = 0; i < display_i; i++)
            {
                if (book_obj[i].searchRecords(keyword_title, keyword_author))
                {
                    available = true;
                    cout << "\n TITLE \t AUTHOR \t PUBLISHER \t PRICE \t STOCK";
                    book_obj[i].displayRecords();
                    //break;
                    key = i;
                    selected_book = book_obj[i].title;
                }
            }
            if (available == true)
            {
                cout << "\n Book is available \n Please enter the required number of copies of the book : ";
                cin >> requested;
                book_obj[key].isInStock(requested, selected_book);
            }
            else
            {
                cout << "\n book is Not available";
                break;
            }
            break;
        case 0:
            exit(EXIT_SUCCESS);
            break;
        default:
            cout << "\n Wrong option selected";
            break;
        }
    } while (selected != 4);
}