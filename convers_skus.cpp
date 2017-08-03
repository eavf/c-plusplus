#include <iostream>
#include <string>

struct inflatable 
{
	std::string name;
	float olume;
	double price;
};
double pr_vaha (float, bool);
double pr_vyska (float, float, bool);

int main ()
	{
		using namespace std;
		cout.setf(ios_base::fixed, ios_base::floatfield);
		float vahl, vyss, vysp;
		bool jedn;
		double bmi;

		cout << "Budete zadavat v metrickych jednotkach (0/1) :";
		cin >> jedn;


		cout << "Vlozte vahu librach / kg :";
		cin >> vahl;
		cout << endl << "Vlozte vasu vysku v stopach / metroch :";
		cin >> vyss;
		cout << endl << "Vlozte cast vysky v palcoch / centimetroch :";
		cin >> vysp;

		// Prevody o funkciach 
		bmi = pr_vaha (vahl, jedn) / (pr_vyska (vyss,vysp, jedn) * pr_vyska (vyss,vysp,jedn));

		cout << "Body mass index je : " << bmi << endl;

		return 0;
	}

double pr_vaha (float libr, bool ano)
	{
		if (ano != 0) {
			return libr;}
		else
			{return libr / 2.2;
			}
	}

double pr_vyska (float st, float pal, bool ano)
	{
		double pom;
		if (ano != 0) {
			pom = (st*100 + pal)/100;
			return pom;
			}
		else
			{
				pom = st + pal/12;
				return pom * 0.3048;
			}
	}