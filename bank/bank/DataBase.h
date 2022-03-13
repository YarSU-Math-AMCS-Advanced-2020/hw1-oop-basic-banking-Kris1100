#pragma once
#include <vector>
#include <iostream>
#include "BankAccount.h"
#include "DebitAccount.h"
#include "DebitCard.h"

using namespace std;

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
};

