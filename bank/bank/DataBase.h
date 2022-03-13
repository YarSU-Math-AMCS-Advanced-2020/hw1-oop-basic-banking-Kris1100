#pragma once
#include <vector>
#include <iostream>
#include "BankAccount.h"
#include "DebitAccount.h"
#include "DebitCard.h"

using namespace std;
//������������ Singleton, �� ��� �� � ��� �� �� ���� ��� ��� �������
class DataBase
{
protected:
	//��� ������������ ������ ����� ������� ����� ������������
	long long _max_id_account = 1; //��� ��������(�� ��������� �� ������������ � �� ������������)
	long long _max_id_card = 1; //��� �����
	long long _max_id_debit = 1; //��� ���������� �����
	vector <BankAccount&> _base_account;
	vector <DebitAccount&> _base_debit;
	vector <DebitCard&> _base_card;
public:
	void add_account(BankAccount& account) { _base_account.push_back(account); };
	void add_debit(DebitAccount& debit) { _base_debit.push_back(debit); };
	void add_card(DebitCard& card) { _base_card.push_back(card); };

};

