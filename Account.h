#include <iostream>
using namespace std;
#include <string>

#ifndef ASSIGNMENT_3_ACCOUNT_H
#define ASSIGNMENT_3_ACCOUNT_H

class Account{

protected:
    string name = "Unknown";
    float bal = 0.0;//creating attributes
    float dol = 0;//creating attributes
    float eu = 0;//creating attributes
    float tg = 0;//creating attributes

public:
//    void deposit();
//    virtual void withdraw(double d);

    void setN(string n);
    string getN();
    void setB(float b);
    float getB();
    void setD(float d);
    float getD();
    void setE(float e);
    float getE();
    float getT();
    void setT(float t);

    virtual bool deposit() = 0;
    virtual bool withdraw() = 0;

    Account(){};

    Account(string n, float b, float ball_dol, float b_eu, float b_tg){//constructor for Account
        this->name = n;
        this->bal = b;
        this->dol = ball_dol;
        this->eu = b_eu;
        this->tg = b_tg;
    }


};



class SavingsAccount : public Account{
public:
    double interest_rate1 = 3;
    void rate(double a, double b, double c);
//    virtual void withdraw(double d);


};



class CheckingAccount : public Account{
private:
    string name;
    double balance;
    double fee = 0.15;
    float bal = 0.0;
    float dol = 0;
    float eu = 0;
    float tg = 0;

public:
    void Print();
    void withdraw(double b);
    CheckingAccount(){};
    CheckingAccount(string n, float b, float ball_dol, float b_eu, float b_tg){//constructor for CheckingAccount
        this->name = n;
        this->bal = b;
        this->dol = ball_dol;
        this->eu = b_eu;
        this->tg = b_tg;
    }
};



class TrustAccount : public Account{
private:
    string name;
    double balance;
    int interest_rate;
    float bal = 0.0;
    float dol = 0;
    float eu = 0;
    float tg = 0;
public:
    void deposit(double s);
    void withdraw(double a);
    TrustAccount(){};
    TrustAccount(string n, float b, float ball_dol, float b_eu, float b_tg){//constructor for TrustAccount
        this->name = n;
        this->bal = b;
        this->dol = ball_dol;
        this->eu = b_eu;
        this->tg = b_tg;
    }
};



class I_Printable : public Account{
public:
    void printAll(string a, float b, float dol, float eu, float t);
    bool deposit() override{
        auto *b = new I_Printable();
        setN("Altair");
        setB(545);
        setD(2.65);
        setE(3.05);
        setT(465);

        b->printAll(getN(), getB(), getD(), getE(), getT());
        return true;
    };
    bool withdraw() override{
        return true;
    };
};



class Redistribution : public Account{
public:
    Redistribution(){};
    void redistribute(double tenge){

        setN("Alta");
        setB(5498);
        setD(426.62);
        setE(494.62);
        setT(554);

        double f_Dollar = getT()/getD();
        double f_Euro = getT()/getE();

        cout << "Converted into Dollars: " << f_Dollar << endl;
        cout << "Converted into Euros: " << f_Euro << endl;

        cout << endl;

        setN("Abyl");
        setB(3254);
        setD(426.62);
        setE(494.62);
        setT(6548);

        double f_Dollar1 = getT()/getD();
        double f_Euro1 = getT()/getE();

        cout << "Second Account: " << endl;
        cout << "Name: " << getN() << endl;
        cout << "Tenge: : " << getB() << endl;
        cout << "Converted into Dollars: " << f_Dollar1 << endl;
        cout << "Converted into Euros: " << f_Euro1 << endl;

        cout << endl;

        setN("Nurik");
        setB(565);
        setD(426.62);
        setE(494.62);
        setT(564);

        double f_Dollar2 = getT()/getD();
        double f_Euro2 = getT()/getE();

        cout << "Third Account: " << endl;
        cout << "Name: " << getN() << endl;
        cout << "Tenge: : " << getB() << endl;
        cout << "Converted into Dollars: " << f_Dollar2 << endl;
        cout << "Converted into Euros: " << f_Euro2 << endl;

        cout << endl;
    };

    bool deposit() override{
        auto *b = new I_Printable();
        setN("Mata");
        setB(1354);
        setD(2.34);
        setE(2.02);
        setT(165);

        b->printAll(getN(), getB(), getD(), getE(), getT());
        return true;
    };
    bool withdraw() override{
        return true;
    };
};


#endif //ASSIGNMENT_3_ACCOUNT_H