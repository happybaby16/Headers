#pragma once
#include <stdio.h>

double sum(double, double);
double dif(double, double);
double myl(double, double);
double div(double, double);




double sum(double a, double b)
{
	return a + b;
}

double dif(double a, double b)
{
	return a - b;
}

double myl(double a, double b)
{
	return a * b;
}


double div(double a, double b)
{
	return a / b;
}

char* concat(char* c1, char* c2)
{
	int lenC1 = 0, lenC2 = 0;
	while (c1[lenC1] != '\0')
	{
		lenC1++;
	}
	while (c2[lenC2] != '\0')
	{
		lenC2++;
	}
	char* c = (char*)malloc(lenC1 + lenC2);
	for (int i = 0; i < lenC1; i++)
	{
		c[i] = c1[i];
	}
	for (int i = 0; i < lenC2; i++)
	{
		c[i + lenC1] = c2[i];
	}
	c[lenC1 + lenC2] = '\0';
	return c;
}


int stringToInt(char* s)
{
    int temp = 0;
    int i = 0;
    int sign = 0;
    if (s[i] == '-')
    {
        sign = 1;
        i++;
    }
    while (s[i] >= 0x30 && s[i] <= 0x39)
    {
        temp = temp + (s[i] & 0x0F);
        temp = temp * 10;
        i++;
    }
    temp = temp / 10;
    if (sign == 1)
        temp = -temp;
    return(temp);
}

char* intToString(int n)
{
    char s[40], t, * temp;
    int i, k;
    int sign = 0;
    i = 0;
    k = n;
    if (k < 0)
    {
        sign = 1;
        k = -k;
    }
    do {
        t = k % 10;
        k = k / 10;
        s[i] = t | 0x30;
        i++;
    } while (k > 0);
    if (sign == 1)
    {
        s[i] = '-';
        i++;
    }
    temp = malloc(i*sizeof(char));
    k = 0;
    i--;
    while (i >= 0) {
        temp[k] = s[i];
        i--; k++;
    }
    temp[k] = '\0';
    return(temp);
}