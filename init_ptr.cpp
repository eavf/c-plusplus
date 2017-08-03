#include <iostream>
#include <string>

double pr_vaha (float, bool);
double pr_vyska (float, float, bool);

int main ()
	{
		using namespace std;
	
		int sisky = 6;
		int * p_sisky = &sisky;
		double pohare = 4.5;
		double * p_pohare = &pohare;
		cout << "Hodnota premennej sisky je : " << sisky << ", a *p_sisky = " << *p_sisky << endl;
		cout << "Adresa premennej sisky &sisky = : " << &sisky << ", a p_sisky = " << p_sisky << endl;
		cout << "Hodnota premennej pohare je : " << pohare << endl;
		cout << "Adresa premennej pohare je : " << &pohare << endl;	

		return 0;
	}