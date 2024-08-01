/*Create a class publication that stores the title and price of a
publication. From this class derive two classes:book, which adds a
page count and tape, which adds a playing time in minutes. Each of
these three classes should have getdata() function to get its data
from the user at the keyboard and putdata() function to display its
data.*/
#include <iostream>
#include<string.h>
using namespace std;
class Publication
{
protected:
    string title;
    float price;

public:
    void setdata()
    {
        cout << "Enter title: ";
        cin>> title;
        cout << "Enter price: ";
        cin >> price;

    }

    void putdata() 
    {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    }
};

class Book : public Publication
{
private:
    int pageCount;

public:
    void getdata()
    {
        Publication::setdata();
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void putdata() 
    {
        Publication::setdata();
        cout << "Page Count: " << pageCount << endl;
    }
};

class Tape : public Publication
{
private:
    float playingTime;

public:
    void getdata()
    {
        Publication::setdata();
        cout << "Enter playing time (in minutes): ";
        cin >> playingTime;
    }

    void putdata() 
    {
        Publication::putdata();
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};

int main()
{
    Book book;
    Tape tape;

    cout << "Enter book details:" << endl;
    book.getdata();
    cout << "Enter tape details:" << endl;
    tape.getdata();

    cout << "\nBook details:" << endl;
    book.putdata();
    cout << "\nTape details:" << endl;
    tape.putdata();

    return 0;
}




