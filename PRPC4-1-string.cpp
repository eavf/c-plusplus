#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main ()
	{
		// Vyriesit priradovanie do
		struct data {
			string meno;
			string priezvisko;
			string * znamka;
			string vek;
		};

		data ff;
		string hod;
		int f;
		char g;

//		Zadanie udajov
		ff.znamka = new string;
		cout << "Ake je vase krstne meno : ";
		getline (cin, ff.meno);

		cout << "Ake je vase priezvisko : ";
		getline (cin, ff.priezvisko);

		cout << "Aku znamku si zasluzite : ";
		getline (cin, ff.znamka);

		cout << "Kolko mate rokov : ";
		getline (cin, ff.vek);

//		Konverzia, kde to je potrebné
		g = (char) ff.znamka;
		f =(int) g;
		f = ++f;
		cout << "F je : " << f << endl;
		hod = string (f);
		cout << "hod je : " << hod << " a velkost je " << sizeof hod << endl;
		ff.znamka = hod;

//		Tlač výsledkov
		cout << endl << "Meno : " << ff.meno << ", " << ff.priezvisko << endl;
		cout << "Znamka : " << ff.znamka << " a velkost je " << sizeof ff.znamka << endl;
		cout << "Vek : " << ff.vek << endl;

		return 0;
	}