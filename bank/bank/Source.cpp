#pragma once
#include <iostream>
#include <Windows.h>
#include "LegalEnitityBankAccount.h"
#include "DebitAccount.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	LegalEnitityBankAccount t;
	DataBase* data_base = DataBase::getInstance();
	DebitAccount temp;
	cin >> t;
	cin >> temp;

	cin >> t;

	cin >> t;
	vector <BankAccount> c = data_base->get_base_account();
	return 0;
}