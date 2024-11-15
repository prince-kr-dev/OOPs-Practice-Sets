/*Create a class `Book` with properties like `title` and `author`. Write a copy
constructor to create a copy of a `Book` object. Test the copy constructor by
creating a new object as a copy of an existing one.*/

#include<iostream>
#include<string>
using namespace std;

class Book{
    private:
        string title;
        string author;
    public:
        Book(string title, string author){
            this->title=title;
            this->author=author;
        }
        Book(Book &b1){
            this->title=b1.title;
            this->author=b1.author;
        }

        void printData(){
            cout<<"Book title --> "<<title<<endl
                <<"Author --> "<<author<<endl;
        }
};

int main(){
    Book  b1("War and Peace","Leo Tolstoy");
    b1.printData();

    Book b2(b1);
    b2.printData();
    return 0;
}