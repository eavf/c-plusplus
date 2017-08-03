#include <iostream>
#include <cstring>
//#include <string>

using namespace std;

char * get_retazec (void);		// Vrati ukazovatel na retazcove pole char

int main ()
	{
		// Vyriesit priradovanie do
		struct data {
			char * meno;
			char * priezvisko;
			char * znamka;
			char * vek;
		};

		data ff;
		char hod;
		int f;
		int * g;

//		Zadanie udajov
		cout << "Ake je vase krstne meno : ";
		ff.meno = get_retazec();

		cout << "Ake je vase priezvisko : ";
		ff.priezvisko = get_retazec();

		cout << "Aku znamku si zasluzite : ";
		ff.znamka = get_retazec();

		cout << "Kolko mate rokov : ";
		ff.vek = get_retazec();

//		Konverzia, kde to je potrebné
		g = (int *) ff.znamka;
		f = *g;
		f = ++f;
		cout << "F je : " << f << endl;
		hod = char (f);
		cout << "hod je : " << hod << " a velkost je " << sizeof hod<<endl;
		ff.znamka = &hod;


//		Tlač výsledkov
		cout << endl << "Meno : " << ff.meno << ", " << ff.priezvisko << endl;
		cout << "Znamka : " << *ff.znamka << " a velkost je " << sizeof ff.znamka << endl;
		cout << "Vek : " << ff.vek << endl;

		return 0;
	}

char * get_retazec ()
	{
		char temp [200];

		cin.getline(temp, 200);

		char * pn = new char [strlen(temp) + 1];
		strcpy (pn, temp);

		return pn;
	}