#include <iostream>

int main () 
	{
		using namespace std;
		//Zadefinovanie pola
		double wages [3] = {10000.0, 20000.0, 30000};
		short stacks [3] = {3, 2, 1};

		//Dva sposoby ziskania adresy pola:
		double * pw = wages;
		short * ps = &stacks[0];

		// Praca s dynamickym polom
		cout << "pw = " << pw << " a *pw = " << *pw << endl;
		pw = pw + 1;								// inkrementuje ukazovatel
		cout << "K adrese pola sme pripocitali 1" << endl;
		cout << "pw = " << pw << " a *pw = " << *pw << endl << endl;

		//dtto pre ps
		cout << "ps = " << ps << " a *ps = " << *ps << endl;
		ps = ps + 1;								// inkrementuje ukazovatel
		cout << "K adrese pola sme pripocitali 1" << endl;
		cout << "ps = " << ps << " a *ps = " << *ps << endl << endl;

		//Pristup k prvkom pola
		cout << "Zpristupnenie dvoch prvkov pola pomocou zapisu pola:" << endl;
		cout << "stacks[0] = " << stacks[0]
				<< " a stacks[1] = " << stacks[1] << endl;
		cout << "Zpristupnenie dvoch prvkov pola pomocou zapisu ukazovatela:" << endl;
		cout << "*stacks = " << *stacks
				<< " a *(stacks+1) = " << *(stacks + 1)<< endl;

		cout << sizeof wages << " je velkost pole wages" << endl;
		cout << sizeof pw << " je velkost ukazovatela pw" << endl << endl;

		return 0;
	}