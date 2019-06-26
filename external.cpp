#include <iostream>

using namespace std;

//vonkajšia premenná
double oteplenie = 0.3;

//funkčné prototypy
void update (double dt);
void local();

int main ()
{
	cout << "Globálna premenná oteplenie je " << oteplenie << " stupňov.\n";
	update (0.1);
	cout << "Globálna premenná oteplenie je " << oteplenie << " stupňov.\n";
	local ();
	cout << "Globálna premenná oteplenie je " << oteplenie << " stupňov.\n";
	return 0;
}

void update (double dt)
{
	//extern double oteplenie;
	oteplenie += dt;
	cout << "Zmena globalnej premennej oteplenie na " << oteplenie << " stupňov. \n";

}


void local ()
{
	double oteplenie = 0.8;
	cout << "Lokálna premenná oteplenie je " << oteplenie << " stupňov.\n";
	cout << "Ale globálna premenná oteplenie = " << ::oteplenie << " stupňov. \n";
}