#pragma once
#include "BankAccount.h"
#include "DataBase.h"
#include <string>
#include "Date.h"

using namespace std;

class PersonalBankAccount :
    public BankAccount
{
private:
    string _surname;
    string _name;
    string _patronymic;
    Date _birth_date;
    int _sex;
    string _passport;
public:
    PersonalBankAccount();

    void set_surname(string surname) { _surname = surname; };
    void set_name(string name) { _name = name; };
    void set_patronymic(string patronymic) { _patronymic = patronymic; };
    void set_birth_date(Date birth_date) { _birth_date = birth_date; };
    void set_sex(int sex) { _sex = sex; };
    void set_passport(string passport) { _passport = passport; };

    void change_surname();
    void change_name();
    void change_patronymic();
    void change_birth_date();
    void change_sex();
    void change_passport();

    string get_surname() { return _surname; };
    string get_name() { return _name; };
    string get_patronymic() { return _patronymic; };
    Date get_birth_date() { return _birth_date; };
    int get_sex() { return _sex; };
    string get_passport() { return _passport; };

    friend std::ostream& operator<<(ostream& out, PersonalBankAccount& t);


    friend std::istream& operator>>(istream& in, PersonalBankAccount& t);
};

