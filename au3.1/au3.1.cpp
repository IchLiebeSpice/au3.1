// au3.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "time.h"

int main()
{	
	const int sz = 10;
	float x[sz] = { 0.0f }, a, b;
	printf("%s", "enter something: ");
	scanf("%f %f", &a, &b);
	srand(time(NULL));
	for (int i = 0; i < sz; i++) {
		x[i] = a + (b - a)*1.0*rand() / RAND_MAX;
		printf("%7.2f%c", x[i], i < sz - 1 ? '\t' : '\n');
	}
	getchar();
    return 0;
}

