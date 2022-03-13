#pragma once
#include <vector>
#include <iostream>
#include "BankAccount.h"
#include "DebitAccount.h"
#include "DebitCard.h"

using namespace std;
//Теоретически Singleton, но что то я как то не знаю как это сделать
class DataBase
{
protected:
	//Для безопасности храним номер который будем использовать
	long long _max_id_account = 1; //Для аккаунта(не разделяем на персональный и не персональный)
	long long _max_id_card = 1; //Для карты
	long long _max_id_debit = 1; //Для дебетового счета
	vector <BankAccount&> _base_account;
	vector <DebitAccount&> _base_debit;
	vector <DebitCard&> _base_card;
public:
	void add_account(BankAccount& account) { _base_account.push_back(account); };
	void add_debit(DebitAccount& debit) { _base_debit.push_back(debit); };
	void add_card(DebitCard& card) { _base_card.push_back(card); };

};

