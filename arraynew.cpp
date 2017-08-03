#include <iostream>

int main ()
	{
		using namespace std;
		//Zadefinovanie dynamick0ho pola
		double * p3 = new double [3];

		// naplnenie udajmi
		p3[0] = 0.2;
		p3[1] = 0.5;
		p3[2] = 0.8;

		// Praca s dynamickym polom
		cout << "p3[1] je " << p3[1] << endl;
		p3 = p3 + 1;								// inkrementuje ukazovatel
		//Operacia hovori, ze po pripocitani jednotky k ukayovatelu na pole 
		//ukazuje ukazovatel na 2 prvok dynamickeho pola ... 
		cout << "Teraz je p3[0] = " << p3[0] << " a p3[1] je = " << p3[1] << endl;
		p3 = p3 - 1;								// dekrementuje ukazovatel
		cout << "Teraz po vrateni je p3[0] = " << p3[0] << " a p3[1] je = " << p3[1] << endl;
		delete [] p3;

		return 0;
	}