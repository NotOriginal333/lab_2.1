// Lab_02.1.cpp 
// < Наумович Роман > 
// Лабораторна робота № 2. 
// Лінійні програми. 
// Варіант 18 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double z1; //результат обчислення 1-го виразу
	double z2; //результат обчислення 2-го виразу
	double a;  //вхідний параметр
	cout << "a= "; cin >> a;
	z1 = ((a + 2) / (sqrt(2 * a)) - a / (sqrt(2 * a) + 2) + 2 / (a - sqrt(2 * a))) * ((sqrt(a) - sqrt(2)) / (a + 2));
	z2 = 1 / (sqrt(a) + sqrt(2));
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}