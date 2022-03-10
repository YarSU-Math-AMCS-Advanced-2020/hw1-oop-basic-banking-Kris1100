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
	cout << "¬ведите страну: ";
	string s;
	cin >> s;
	t.set_country(s);
	cout << "¬ведите регион: ";
	cin >> s;
	t.set_region(s);
	cout << "¬ведите населенный пункт: ";
	cin >> s;
	t.set_locality(s);
	cout << "¬ведите улицу: ";
	cin >> s;
	t.set_street(s);
	cout << "¬ведите номер дома: ";
	int n;
	cin >> n;
	t.set_house(n);
	cout << "¬ведите номер квартиры: ";
	cin >> n;
	t.set_flat(n);
	cout << "¬ведите индех: ";
	cin >> s;
	t.set_index(s);

	return in;
}
