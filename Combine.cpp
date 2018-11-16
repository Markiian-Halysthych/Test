// My comment

#include "Combine.h"
#include <iostream>
using namespace std;


	void Combine::getVolume()
	{
		cout << "Input volume(in kilograms): ";
		cin >> v;
		cout << endl;
	}
	
	void Combine::getFuel()
	{
		cout << "Input fuel per 1 hectare(in litters): ";
		cin >> fuel;
		cout << endl;
	}
	
	void Combine::getPower()
	{
		cout << "Input engine power(in horsepowers): ";
		cin >> power;
		cout << endl;
	}

	void Combine::getShow()
	{
		cout << "volume(in kilograms): " << v << endl;
		cout << "fuel per 1 hectare(in litters): " << fuel << endl;
		cout << "engine power(in horsepowers): " << power << endl;
	}

int main()
{
	setlocale(0, "");

	Combine n1;
	
	n1.getVolume();
	n1.getFuel();
	n1.getPower();
	n1.getShow();
	
	Combine n2;
	n2.getVolume();
	n2.getFuel();
	n2.getPower();
	n2.getShow();
	
	Combine n3;
	n3.getVolume();
	n3.getFuel();
	n3.getPower();
	n3.getShow();
	
	return 0;
}
