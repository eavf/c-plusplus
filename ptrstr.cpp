#include <iostream>
#include <cstring>
int main ()
	{
		using namespace std;
		char animal[20] = "medved";
		const char * bird = "lastovicka";
		char * ps;
		cout << "Inicializovany stav animal je :" << animal << " a  vtakov je : " << bird << endl;
		// cout << ps << endl;					Chyba, zatial nie je inicializovana

		cout << "Zadajte druh zvierata : ";
		cin.getline(animal,20);
		ps = animal;
		cout << "Tlacime ukazovatel PS : " << ps << endl;
		cout << "Pred pouzitim strcpy : " << endl;
		// Ak chceme aby cout zobrazil adresu ukazujucu na miesto kde je char, musime ho pretypovat!
		cout << animal << " je na adrese " << (int *) animal << endl;
		cout << ps << " je na adrese " << (int *) ps << endl;

		ps = new char [strlen(animal) + 1];					// Ziska novu pamat
		strcpy (ps, animal);								// Kopiruje retazec do ps
		cout << "Po pouziti strcpy : " << endl;
		cout << animal << " je na adrese " << (int *) animal << endl;
		cout << ps << " je na adrese " << (int *) ps << endl;

		delete [] ps;

		return 0; 
	}