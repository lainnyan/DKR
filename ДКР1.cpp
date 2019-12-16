#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b, mos = 1, i = 1;

	cout << "Введите a: "; cin >> a;
	cout << "Введите b: "; cin >> b;
	
	do { 
		mos = 1 / (pow(2, i));
		i++;
	} while (mos >= a&& mos <= b);

	cout << "mos = " << mos << endl;
	
	return 0;
}
