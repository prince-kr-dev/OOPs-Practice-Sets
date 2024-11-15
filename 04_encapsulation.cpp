/*Create a class `BankAccount` with private properties `accountNumber` and `balance`.
Provide public methods to get the balance and to deposit and withdraw amounts,
ensuring balance cannot go negative. Test it with different scenarios.*/

#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
        long accNumber;
        double balance;
    public:
        BankAccount(long accNumber, double balance){
            this->accNumber=accNumber;
            this->balance=balance;
        }
        //Method to get balance outside class
        double getBalance(){
            return balance;
        }

        void deposite(double amount){
            if(amount > 0){
                balance = balance+amount;
                cout<<"Deposited "<<amount<<endl
                    <<"New Balance --> "<<balance<<endl;
            }
            else{
                cout<<"Deposite Amount must be graeter than Rs. 0"<<endl;
            }
        }

        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance = balance-amount;
                cout<<"Withdraw Success !!"<<endl
                    <<"Remaining Balance --> "<<balance<<endl;
            }
            else if(amount < 0){
                cout<<"Withdraw amount must be positive"<<endl;
            }
            else{
                cout<<"Insufficient balance!!!!!"<<endl;
            }
        }

        void showDetails(){
            cout<<"----Mini Statement-----"<<endl
                <<"Account Number --> "<<accNumber<<endl
                <<"Balance --> "<<balance<<endl;
        }
};

int main(){
    BankAccount ba1(127200235, 5080.067);
    cout<<"Initial Balance --> "<<ba1.getBalance()<<endl;

    ba1.deposite(243.45);//Correct Deposite
    ba1.showDetails();

    ba1.withdraw(608.90);//correct withdrawl
    ba1.showDetails();

    ba1.deposite(-243.45);//unable to deposite
    ba1.showDetails();

    ba1.withdraw(609998.90);//insufficient balance
    ba1.showDetails();
    return 0;
}