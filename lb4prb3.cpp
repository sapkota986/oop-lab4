/*Modify Q.2 to add base class sales that holds an array of three
floats so that it can record the dollar sales of a particular
publication for the last three months. Include getdata() function to
get three Sales amount from the user and a putdata() function to
display sales figures. Alter the book and tape classes so they are
derived from both publication and sales. An object of class book or
tape should input and output sales data along with its other data.*/
#include <iostream>
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
class Sales {
protected:
    float sales[3];

public:
    void setdata() {
        cout << "Enter sales for the last three months:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Month " << i + 1 << ": $";
            cin >> sales[i];
        }
    }

    void putdata() {
        cout << "Sales for the last three months:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Month " << i + 1 << ": $" << sales[i] << endl;
        }
    }
};

class Book : public Publication
{
private:
    int pageCount;

public:
    void setdata()
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
    void setdata()
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
    book.setdata();
    cout << "Enter tape details:" << endl;
    tape.setdata();

    cout << "\nBook details:" << endl;
    book.putdata();
    cout << "\nTape details:" << endl;
    tape.putdata();

    return 0;
}
