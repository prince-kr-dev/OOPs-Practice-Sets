/*Write a class `Car` with properties like `brand`, `model`, and `year`. Add a
member function to display the car's details. Create an object of `Car` and call
the display function.*/

#include<iostream>
#include<string>
using namespace std;

class Car{
    private:
        string brand;
        string model;
        int year;
    
    public:
        void inputDetails(string brand, string model, int year){
            this->brand = brand;
            this->model = model;
            this->year = year;
        }

        void showDetails(){
            cout<<"Brand --> "<<brand<<endl
                <<"Model --> "<<model<<endl
                <<"Year --> "<<year<<endl;
        }
};

int main(){
    Car c1,c2,c3;
    c1.inputDetails("TATA", "Harrier",2021);
    c2.inputDetails("TOYOTA", "Urban Cruiser Hyrider",2023);
    c3.inputDetails("TOYOTA", "Urban Cruiser",2020);

    c1.showDetails();
    c2.showDetails();
    c3.showDetails();
    return 0;
}