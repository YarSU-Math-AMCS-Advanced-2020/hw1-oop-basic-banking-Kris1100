#pragma once
#include "BankAccount.h"
#include "Date.h"
#include "DataBase.h"
#include <string>

using namespace std;

class LegalEnitityBankAccount :
    public BankAccount
{
private:
    string _name;
    Date _establishing_date;
    string _TIN;
public:
    LegalEnitityBankAccount();

    void set_name(string name) { _name = name; };
    void set_establishing_date(Date establishing_date) { _establishing_date = establishing_date; };
    void set_TIN(string TIN) { _TIN = TIN; };

    void change_name();
    void change_establishing_date();
    void change_TIN();

    friend std::istream& operator>>(istream& in, LegalEnitityBankAccount& t);
};

