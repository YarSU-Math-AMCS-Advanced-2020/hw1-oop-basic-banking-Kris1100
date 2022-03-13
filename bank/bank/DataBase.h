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
		//��� ������������ ������ ����� ������� ����� ������������
		long long _max_id_account = 1; //��� ��������(�� ��������� �� ������������ � �� ������������)
		long long _max_id_card = 1; //��� �����
		long long _max_id_debit = 1; //��� ���������� �����
		vector <BankAccount&> _base_account;
		vector <DebitAccount&> _base_debit;
		vector <DebitCard&> _base_card;
};

