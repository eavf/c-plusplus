#include <iostream>
/* Ukazka rozdielovvo float typoch.... */
int main ()
	{
		using namespace std;
		cout.setf(ios_base::fixed, ios_base::floatfield);
		float tub = 10.0/3.0;
		double mint = 10.0/3.0;
		const float milion=1.0e6;

		cout << "skopek = " << tub;
		cout << ", milion skopku = " << milion * tub;
		cout << "," << endl << "a desat milionov skopkov = ";
		cout << 10 * milion * tub << endl;

		cout << "ranec = " << mint << " a milion rancu = ";
		cout << milion * mint << endl;

		return 0; 
	}