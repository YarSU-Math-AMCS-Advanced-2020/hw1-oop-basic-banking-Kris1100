#pragma once
#include "DebitAccount.h"
#include "BankAccount.h"
#include "DebitCard.h"
#include <iostream>
#include <vector>
#include <string>


using namespace std;

class DataBase
{
private:
	static DataBase* p_instance;
	//��� ������������ ������ ����� ������� ����� ������������
	long long _max_id_account = 1; //��� ��������(�� ��������� �� ������������ � �� ������������)
	long long _max_id_card = 1; //��� �����
	long long _max_id_debit = 1; //��� ���������� �����
	vector <BankAccount> _base_account;
	vector <DebitAccount> _base_debit;
	vector <DebitCard> _base_card;

	DataBase() {};
	DataBase& operator=(DataBase&);

public:

	static DataBase* getInstance() {
		if (!p_instance)
			p_instance = new DataBase();
		return p_instance;
	}

	string id_to_string(long long id);

	//����� ���������� ������ ����� 16, ���� ����� ����� ������, ���������� � ������ ����
	string get_max_id_account();
	string get_max_id_debit();
	string get_max_id_card();

	vector <BankAccount> get_base_account() { return _base_account; };
	vector <DebitAccount> get_base_debit() { return _base_debit; };
	vector <DebitCard> get_base_card() { return _base_card; };



	void add_account(BankAccount account) { _base_account.push_back(account); };
	void add_debit(DebitAccount debit) { _base_debit.push_back(debit); };
	void add_card(DebitCard card) { _base_card.push_back(card); };

	void delete_card(long long card_id);
	void delete_debit(long long debit_id);
};


