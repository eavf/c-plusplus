#include <iostream>

int main ()
	{
		using namespace std;
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << "Celociselne delenie : 9 / 5 = " << 9 / 5 << endl;
		cout << "Delenie s pohyblivou des. ciarkou : 9 / 5 = " << 9.0/5.0 << endl;
		cout << "Kombinovane delenie : 9 / 5 = " <<  9.0/5 << endl;
		cout << "Konstanty typu double : 1e7 / 9.0 = " << 1e7 / 9.0 << endl;
		cout << "Konstanty typu float : 1e7f / 9.0f = " << 1e7f / 9.0f << endl;

		return 0;
	}