#include <iostream>
#include <cstring>

// chcem citat obsah randoom memory

using namespace std;
char * getname (void);			// Funkcia vracajuca ukazovatel na char.......
void print (char, char *, int, int *);

int main ()
	{
		char * name;
		int * p;
		int trmp;

		name = getname();
		cout << "Prva ulozena hodnota : " << name << " a adresa je " << (int *) name << endl;
		// bol prevod adresy na int abz netlacil obsah pamete

		cout << "Teraz zadaj adresu pamete, ktoru mam precitat :" << endl;
		cin >> hex >> trmp;		// hex vstup
		cout << "Zadali ste adresu v decimalnom formate : " << dec << trmp << endl;
		cout << hex;			// zmena vystupov na hex...
		cout << "Zadali ste adresu v hexadecimalnom formate : " << trmp << endl;

		p = (int *) trmp;		// prevod zadanej hodnoty na ukazovatel na int
		// Ma problem, lebo char je vacsia. Ale funguje tak,
		// ze precita iba cast co sa vojde do rozmeru int...

		name = (char *) trmp;	// Ulozenie ukaz. na zadanu hodnotu v char

		int value = *p;  // read an integer at adresse stored in p into 'value'
		int value1 = *(p+1);	// the same but in adresse p + 1

		cout << "Najprv cez *p: (int) : " << endl;
		cout << "Precitana pamet je : " << value << endl << " a jej hodnota v INT je : ";
		cout << (int) trmp << endl;
		cout << "Precitana pamet o jeden pos. je : " << value1 << endl;

		cout << "------------------------------------------------------------------------";

		cout << endl << "Teraz cez name : (char) : " << endl;
		cout << "Precitana pamet v char je : " << name << endl;



		return 0;

	}

char * getname ()
	{
		char temp [80];

		cout << "Zadaj retazzec : " << endl;
		cin >> temp;

		// Vytvorenie priestoru pre ulozenie premennej
		char * pt = new char [strlen(temp) + 1];
		strcpy (pt, temp);

		return pt;

	}

void print (char a, char * b, int c, int * d)
	{
		//Ideme tlacit

		cout << "";

		return;

	}