#include "Addres.h"


Addres::Addres(string country, string region, string locality, string street, string index, int house, int flat) {
	set_country(country);
	set_region(region);
	set_locality(locality);
	set_street(street);
	set_index(index);
	set_house(house);
	set_flat(flat);
}

std::istream& operator>>(istream& in, Addres& t) {
	cout << "������� ������: ";
	string s;
	cin >> s;
	t.set_country(s);
	cout << "������� ������: ";
	cin >> s;
	t.set_region(s);
	cout << "������� ���������� �����: ";
	cin >> s;
	t.set_locality(s);
	cout << "������� �����: ";
	cin >> s;
	t.set_street(s);
	cout << "������� ����� ����: ";
	int n;
	cin >> n;
	t.set_house(n);
	cout << "������� ����� ��������: ";
	cin >> n;
	t.set_flat(n);
	cout << "������� �����: ";
	cin >> s;
	t.set_index(s);

	return in;
}
