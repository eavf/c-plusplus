#include <iostream>

extern int tom;
static int dick = 10;
int harry = 200;


//prototyp funkcie
void remote_access ()
{
	using namespace std;
	cout << "remote_access () podáva správu o nasledujúcich adresách : \n";
	cout << &tom << " = &tom. " << &dick << " = &dick. \n";
	cout << &harry << " = &harry\n";
}