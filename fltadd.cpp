/* Problemy z presnostou float */

#include <iostream>

int main ()
	{
		using namespace std;
		float a = 2.34E+22f;
		float b = a + 1000.0f;

		cout << "a = " << a << endl;
		cout << "b - a = " << b - a << endl;

		return 0;
	} 