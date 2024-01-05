#include<iostream>
#include"Alien.h"
using namespace std;

int main()
{
	Alien alien1(120, 40, 'M');
	Alien alien2(140, 60, 'F');
	Alien alien3(200, 49, 'M');

	Alien alien4 = alien1 + alien2;
	Alien alien5 = alien2 + alien3;

	cout << "alien1 == alien2? " << boolalpha << (alien1 == alien2) << endl;
	cout << "alien1 != alien3? " << boolalpha << (alien1 != alien3) << endl;
	cout << "alien4 > alien5? " << boolalpha << (alien4 > alien5) << endl;

	return 0;
}