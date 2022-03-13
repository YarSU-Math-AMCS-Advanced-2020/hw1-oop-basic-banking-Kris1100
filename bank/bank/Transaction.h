#pragma once
#include <string>
#include "Date.h"

using namespace std;

class Transaction
{
private:
	string _debit_account;
	string _transfer_account;
	double _amount;
	int _currency_of_operation;
	Date _date;
	int _status;
public:
	Transaction();

	void set_debit_account(string debit_account) { _debit_account = debit_account; };
	void set_transfer_account(string transfer_account) { _transfer_account = transfer_account; };
	void set_amount(double amount) { _amount = amount; };
	void set_currency_of_operation(int currency_of_operation) { _currency_of_operation = currency_of_operation; };
	void set_date(Date date) { _date = date; };
	void set_status(int status) { _status = status; };

	friend std::istream& operator>>(istream& in, Transaction& t);
};

