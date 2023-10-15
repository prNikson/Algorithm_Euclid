#include <iostream>
#include "Algorithm.h"

algorithmOfEvclid::algorithmOfEvclid(): divider(0), divisible(0), Bezu_coefficient1(0), Bezu_coefficient2(0){}
algorithmOfEvclid::algorithmOfEvclid(int number1, int number2) {
	divider = (number1 < number2) ? number1 : number2;
	divisible = (number1 > number2) ? number1 : number2;
	Bezu_coefficient1 = 0;
	Bezu_coefficient2 = 0;
}

int* algorithmOfEvclid::searchKoeff(int number1, int number2) {
	int divider1 = (number1 < number2) ? number1 : number2;
	int divisible1 = (number1 > number2) ? number1 : number2;
	static int count = 1;
	static int x, y;
	while ((divisible1 % divider1) != 0) {
		divisible = divisible1;
		divider = divider1;
		count++;
		int mod = (divisible1 % divider1);
		nod = mod;
		int priv = divisible1 / divider1;
		if ((count - 2) >= 0) {
			x = bezu->xj2 - priv * bezu->xj1;
			y = bezu->yj2 - priv * bezu->yj1;
			bezu->xj2 = bezu->xj1;
			bezu->xj1 = x;
			bezu->yj2 = bezu->yj1;
			bezu->yj1 = y;
		}
		return searchKoeff(divider1, mod);
	}
	int* arr = new int[2];
	Bezu_coefficient1 = x;
	Bezu_coefficient2 = y;
	arr[0] = x;
	arr[1] = y;
	return arr;
}
void algorithmOfEvclid::printKoeff() {
	std::cout << divisible << " * (" << Bezu_coefficient1 << ") + " << divider << " * (" << Bezu_coefficient2 << ") = " << nod;
}