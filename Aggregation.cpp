#include<iostream>
#include<string.h>
using namespace std;

class Book
{
    public:
    string bname,section;

    Book(string bname,string section)
    {
        this->bname=bname;
        this->section=section;
    }
};

class library
{
    private:
    Book *book;
    public:
    string lname,author_name;
    library(string lname,string author_name,Book *book)
    {
        this->lname=lname;
        this->author_name=author_name;
        this->book=book;
    }

    void show()
    {
        
        cout<<"Library:-"<<lname<<endl<<"Author name:-"<<author_name<<endl;
        cout<<"Book name:-"<<book->bname<<endl<<"Section:-"<<book->section<<endl;
    }
};

int main()
{
    Book b1=Book("Secrets of Nagas","B");
    Book b2=Book("Sham chi aai","A");
    Book b3=Book("Secrets of Nagas II","B");
    library l1=library("Kavyaratana","Amish thripathi",&b1);
    library l2=library("Kavyaratana","Pandurng  Sane",&b2);
    library l3=library("Kavyaratana","Amish thripathi",&b3);

    cout<<"-----lirary_information------"<<endl;
    l1.show();
    cout<<"------------------"<<endl;
    l2.show();
    cout<<"------------------"<<endl;
    l3.show();
    cout<<"------------------"<<endl;
}

