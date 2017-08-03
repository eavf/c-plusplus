#include <iostream>

int main ()
	{
		using namespace std;
		cout.setf(ios_base::fixed, ios_base::floatfield);
		float three = 3;
		int odhad = 3.9832;
		//int druhy = 7.2e12;

		cout << "Three = " << three << endl;
		cout << "Odhad = " << odhad << endl;
		//cout << "Druhy = " << druhy << endl;

		return 0;
	}