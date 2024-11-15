/*Create a class `Student` with properties `name` and `age`. Add a parameterized
constructor to initialize these properties, and a destructor that prints when an
object is destroyed. Create and destroy a `Student` object to observe the output.*/


#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string name;
        int age;

    public:
        Student(string name, int age){
            this->name=name;
            this->age=age;
            cout<<"~~~~~~~~~~~Object Created~~~~~~~~~"<<endl
                <<"Name --> "<<name<<endl
                <<"Age --> "<<age<<endl;
        }

        ~Student(){
            cout<<"Object destroyed"<<endl;
        }
};

int main(){
    Student s1("Prince",20);
    return 0;
}