#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 80;
	char sent[N];
	const int M = 20;
	char word[M];

	cout << "Введите строку: " << endl;
	cin.getline(sent, sizeof(sent));

	cout << "Введите слово: " << endl;
	cin.getline(word, sizeof(word));

	int n = 0;
	//int len = strlen(word);

	for (const char* src = sent;(src = strstr(src, word)) != nullptr; ++src)
		n++;

	cout << "Слово " << word <<" встречается " << n << endl;

	return 0;
}
