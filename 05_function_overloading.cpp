/*Write a class `MathOperations` with overloaded methods `add()`: one to add two
integers, one to add three integers, and one to add two floating-point numbers. Test
these functions by calling them with different argument counts and types.*/

#include<iostream>
using namespace std;

class MathOperations{
    public:
        int add(int num1, int num2){
            return num1+num2;
        }
        int add(int num1, int num2, int num3){
            return num1+num2+num3;
        }
        double add(double num1, double num2){
            return num1+num2;
        }
};

int main(){
    MathOperations m1;
    int sumTwoInt = m1.add(23,34);
    cout<<"Sum --> "<<sumTwoInt<<endl;

    int sumThreeInt = m1.add(45,25,19);
    cout<<"Sum --> "<<sumThreeInt<<endl;

    double sumTwoFlot = m1.add(29.7,34.8);
    cout<<"Sum --> "<<sumTwoFlot<<endl;
    return 0;
}