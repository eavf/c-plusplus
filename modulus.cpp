#include <iostream>

int main ()
	{
		using namespace std;
		const int Lbs_per_stn = 14;
		int lbs;

		cout << "Zadajte Vasu vahu v librach : ";
		cin >> lbs;
		int stone = lbs / Lbs_per_stn;
		int pounds = lbs % Lbs_per_stn;
		cout << lbs << " Libier je " << stone << "kamenov a " << pounds << "libier" << endl;
		return 0;
	}