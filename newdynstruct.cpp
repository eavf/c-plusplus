#include <iostream>

struct inflatable
	{
		char name [20];
		float volume;
		double price;
	};

	int main ()
	{
		using namespace std;
		// Vytvorenie nepomenovanej struktury
		inflatable * ps = new inflatable;

		cout << "Zadajte meno nafukovacieho predmetu : ";
		cin.get (ps->name, 20);
		cout << endl << "Zadajte objem v litroch : ";
		cin >> (*ps).volume;
		cout << endl << "Zadajte cenu v EUR : ";
		cin >> ps->price;

		cout << "Meno : " << ps->name << endl;
		cout << "Objem : " << (*ps).volume << endl;
		cout << "Cena : " << ps->price << endl;

		delete ps;

		return 0;

	}