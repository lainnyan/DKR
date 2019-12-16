#include <iostream>
using namespace std;

int main()
{
	int const N = 3;
	int n, c, a[N][N];
    
	for (int i = 0; i < N; i++) //заполняем массив
		for (int j = 0; j < N; j++)
			cin >> a[i][j]; 
	
	for (int i = 0; i < N; i++) //вывод массива
	{
		for (int j = 0; j < N; j++)
			 cout << a[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	for (int j, i = 0; i < N; i++)
	{
		j = i;
		c = a[i][j];
		a[i][j] = a[i][0];
		a[i][0] = c;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
