#pragma once
#include <string>

using namespace std;

class Addres
{
private:
	string _country;
	string _region;
	string _locality; //Населенный пункт
	string _street;
	string _index;
	int _house;
	int _flat;
public:
	Addres(string country, string region, string locality, string street, string index, int house, int flat = 0);

	void set_country(string country) { _country = country; };
	void set_region(string region) { _region = region; };
	void set_locality(string locality) { _locality = locality; };
	void set_street(string street) { _street = street; };
	void set_index(string index) { _index = index; };
	void set_house(int house) { _house = house; };
	void set_flat(int flat) { _flat = flat; };
};

