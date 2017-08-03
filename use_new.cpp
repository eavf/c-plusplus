#include <iostream>
#include <string>

double pr_vaha (float, bool);
double pr_vyska (float, float, bool);

int main ()
	{
		using namespace std;
	
		int * pt = new int;
		*pt = 1001;

		cout << "INT :" << endl;
		cout << "Hodnota je : " << *pt << " a umiestnenie je : " << pt << endl;

		double * pd = new double;
		*pd = 10000001.0;

		cout << "Double : " << endl;
		cout << "Hodnota je : " << *pd << ", a umiestnenie je " << pd << endl;
		cout << "Velkost pt je " << sizeof pt << endl;
		cout << "Velkost *pt je " << sizeof *pt << endl;
		cout << "Velkost pd je " << sizeof pd << endl;
		cout << "Velkost *pd je " << sizeof *pd << endl;

		return 0;
	}