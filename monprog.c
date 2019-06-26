/*Cvicenie systemových volani v C*/

#include <math.h>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
	int a, b;
	float r;
	scanf("%d", &a);
	scanf("%d", &b);
	r = fabsf(a - b);
	printf ("Výsledok je : %d \n", a-b );

	getchar ();

	return 0;
}