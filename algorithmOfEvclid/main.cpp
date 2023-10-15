#include <iostream>
#include "Algorithm.h"
int main() {
	algorithmOfEvclid alg;
	int* arr = new int[2];
	arr = alg.searchKoeff(8, 9);
	alg.printKoeff();
	//std::cout << arr[0] << " " << arr[1];
	return 0;
}