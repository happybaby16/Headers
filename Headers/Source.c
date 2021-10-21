#include "UsersHeaders.h"



int main(void)
{
	system("chcp 1251>n");

	printf("Метод из stdio.h");

	double _a1 = sum(10, 10);
	double _a2 = dif(10, 10);
	double _a3 = myl(10, 10);
	double _a4 = div(10, 10);


	printf("\nsum = %f ; dif = %f ; myl = %f ; div = %f",_a1,_a2,_a3,_a4);

	int a = stringToInt("15");
	printf("\nstringToInt: %i", a);
	char* b = intToString(15);
	printf("\nintToString: %s", b);

	char c1[] = "Hello, ";
	char c2[] = "world!";
	char* c = concat(c1,c2);

	printf("\nРезультат конкатенации: %s",c);


	return 0;
}

