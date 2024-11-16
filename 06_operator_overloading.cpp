/*Implement a class `Complex` to represent complex numbers. Overload the `+` operator
to add two `Complex` numbers and print the result. Create two complex numbers and
add them using the overloaded operator.*/

#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imaginary;
    public:
        void setData(int real, int imaginary){
            this->real=real;
            this->imaginary=imaginary;
        }

        Complex operator+(Complex C){
            Complex temp;
            temp.real = real + C.real;
            temp.imaginary = imaginary + C.imaginary;
            return temp;
        }


        void printData(){
            cout<<real<<" + i"<<imaginary<<endl;
        }
};

int main(){
    Complex c1,c2,c3;

    c1.setData(5,8);
    c2.setData(7,3);
    c3=c1+c2;
    
    c3.printData();
    return 0;
}