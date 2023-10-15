#pragma once
class algorithmOfEvclid {
private:
	int divider; // Делитель
	int divisible; // Делимое
	int nod;
	int Bezu_coefficient1; // u
	int Bezu_coefficient2; // v
	struct Bezu {
		int xj2 = 1;
		int xj1 = 0;
		int yj2 = 0;
		int yj1 = 1;
	};
	Bezu* bezu = new Bezu;
public:
	algorithmOfEvclid();
	algorithmOfEvclid(int, int);
	int* algorithm();
	void printKoeff();
	int* searchKoeff(int, int);
};