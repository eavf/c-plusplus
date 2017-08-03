#include <iostream>

int main ()
	{
		using namespace std;
		cout.setf(ios_base::fixed, ios_base::floatfield);
		float klobuky, hlavy;
		cout << "Zadajte cislo :";
		cin >> klobuky;
		cout << "Zadajte dalsie cislo :";
		cin >> hlavy;

		cout << "klobuky = " << klobuky << ", hlavy = " << hlavy << endl;
		cout << "Klobuky + hlavy = " << klobuky + hlavy << endl;
		cout << "Klobuky - hlavy = " << klobuky - hlavy << endl;
		cout << "Klobuky * hlavy = " << klobuky * hlavy << endl;
		cout << "Klobuky / hlavy = " << klobuky / hlavy << endl;
		//cout << "Klobuky + hlavy = " << klobuky + hlavy << endl;

		return 0;
	}