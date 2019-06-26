#include <iostream>

// konstanty
const int ArSize = 10;
 

 //prototyp funkcie
void strcount (const char * str);

int main ()
{
	using namespace std;
	char input [ArSize];
	char next;

	cout << "Zadajte riadok textu : \n";
	cin.get(input, ArSize);
	while (cin)
	{
		cin.get(next);
		while (next != '\n')	//retazec sa nevosiel
			cin.get(next);
		strcount (input);
		cout << "Zadajte dalsi riadok textu (prazdny riadok na ukoncenie):\n";
		cin.get(input, ArSize);
	}
	cout << "Zbohom\n";
	return 0;
}

void strcount (const char * str)
{
	using namespace std;
	static int total = 0;	//staticka lokalna premenna
	int count = 0;			//autmaticka lokalna premenna
	cout << "\"" << str << "\" obsahuje";
	while (*str++)			//ide na koniec retazca
		count++;
		total += count;
		cout << count << " znakov \n";
		cout << total << " znakov celkom\n";
}