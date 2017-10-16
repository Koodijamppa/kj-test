
#include "stdio.h"

float kertolasku(float a, float b);


int main(void)
{
	char s[] = "koira kissa turska naakka konna pissakakkapieru-hirviö";
	// missähän se syntax highlight viipyy?
	printf("%s = %.2f\n", s, kertolasku(5.5, 1.1234));
	return (int)kertolasku(5, 7.5);
}


float kertolasku(float a, float b)
{
	return a*b;
}

