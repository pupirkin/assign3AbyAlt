#include "Account.h"
#include <string>



void Account::setN(string n) { //realization of functions of class Account
    this->name = n;
}//to set name

string Account::getN() {
    return name;
}//to get name

void Account::setB(float b){
    this->bal = b;
}//to set balance

float Account::getB() {
    return bal;
}//to get balance

void Account::setD(float d) {
    this->dol = d;
}//to set dollars

float Account::getD() {
    return dol;
}//to get dollars


void Account::setT(float t) {
    this->tg = t;
}//to set tenge

float Account::getT() {
    return tg;
}//to get tenge

void Account::setE(float e) {
    this->eu = e;
}//to set euros

float Account::getE() {
    return eu;
}//to get euros



//void Account::deposit() {
//    SavingsAccount a;
//    CheckingAccount c;
//    TrustAccount t;
//    setN("Mark");
//    setB(1000);
//    setD(2.34);
//    setE(2.02);
//    setT(1000);
//    Account *acc = new Account(getN(), getB(), getD(), getE(), getT());
//
//    //a.rate(getD(), getE(), getT()); //1 TASK
//    //c.withdraw(getB()); //2 TASK
//    t.deposit(getB()); // 3 TASK
//
//}

void SavingsAccount::rate(double a, double b, double c) { //realization of functions of class SavingsAccount
    int vibor;
    std::cout << "Select (1/2/3): " << "\n";
    std::cin >> vibor;//enter vibor

    if(vibor == 1){//choice 1-balance, rate for a
        std::cout << "Balance: " << a << "\n";

        double d_1 = a * (1 + interest_rate1/100);//callculate d_1

        std::cout << "Your Rate is: " << " " << d_1 <<"\n";
    }else if(vibor == 2){//choice 2-balance, rate for b
        std::cout << "Your balance: " << b << "\n";
        double d_1 = b * (1 + interest_rate1/100);//callculate d_1

        std::cout << "Your Rate Is: " << " " << d_1 <<"\n";
    }else if(vibor == 3){//choice 3-balance, rate for c
        std::cout << "Your balance: " << c << "\n";
        double d1 = c * (1 + interest_rate1/100);//callculate d_1

        std::cout << "Your Rate Is: " << " " << d1 <<"\n";
    }

}

void CheckingAccount::withdraw(double d) {//realization of functions of class CheckingAccount

    fee = d - d*fee;//caluclating fee

    std::cout << "Your balance: " << d << "\n";//show balance

    std::cout << "Your money: " << fee << "\n";//show money
}




void TrustAccount::deposit(double d) {//realization of functions of class TrustAccount
    TrustAccount *t;//pointer

    if(d > 1000){
        d = d + d*0.01;//calculate bonus and balance
        std::cout << "BALANCE: " << d << "\n"; //show balance
    }

    int choice;


    std::cout << "Your choice(1 or 0)\n";
    std::cin>> choice;//enter vybor


    if(choice == 1){
        t->TrustAccount::withdraw(d);
    }




    else if (choice == 0) {
        std::cout << "Have a good day!";//contact with customer
    }

}

void TrustAccount::withdraw(double a) {//realization of functions of class TrustAccount
    std::cout << "balance " << a << "\n";
    std::cout << "Sum, you can withdraw is " << a/5 << "\n";
}






void I_Printable::printAll(string a, float b, float dol, float eu, float t) { //realization of functions of class I_Printable

    std::cout << "Output using Abstract Class:" << "\n";

    std::cout << "Name: " << a;
    std::cout << "\n";
    std::cout << "balance: " << b;
    std::cout << "\n";
    std::cout << "Dollar: " << dol;
    std::cout << "\n";
    std::cout << "Euro: " << eu;
    std::cout << "\n";
    std::cout << "Tg: " << t;

}