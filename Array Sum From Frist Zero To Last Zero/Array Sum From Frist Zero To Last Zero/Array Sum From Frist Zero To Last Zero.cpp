#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	const int SIZE = 100;
	int x[SIZE], y[SIZE];
	int n, j = 0, k = 0, sum = 0;
	cout << "Введите размер массива (макс.100): ";
	cin >> n;
	cout << endl << "Введите элементы массива: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (x[i] == 0)
		{
			j = i;
			break;
		}
	}
	for (int i = n; i >= 0; i--)
	{
		if (x[i] == 0)
		{
			k = i;
			break;
		}
	}
	for (int i = j; i <= k; i++)
	{
		sum += x[i];
	}
	cout << endl << "Сумма элементов массива от первого до последнего нуля: " << sum << endl;
}