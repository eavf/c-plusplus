#include <iostream>

int tom = 3;
int dick = 30;
static int harry = 300;


//prototyp funkcie
void remote_access ();

int main ()
{
	using namespace std;

	cout << "main () podáva správu o nasledujúcich adresách : \n";
	cout << &tom << " = &tom. " << &dick << " = &dick. \n";
	cout << &harry << " = &harry\n";

	remote_access ();
	return 0; 
}