#include<iostream>

using namespace std;

void QuickSort(int*, int, int);
void QuickSort(int*, int);
int* AllocArray(int);
void DisplayArray(int*, int);


int main(){

	int n;
	while (true)
	{
		cout << "Enter integer size of first Array(size > 0):";
		cin >> n;
		if (n <= 0)
		{
			system("cls");
			continue;
		}
		break;
	}
	system("cls");
	int* a = AllocArray(n);
	AllocArray(n);
	DisplayArray(a, n);
	cout << endl;
	QuickSort(a, n);
	DisplayArray(a, n);
	system("pause");
	return 0;
}

void QuickSort(int*a, int n)
{
	QuickSort(a, 0, n - 1);
}

void QuickSort(int*a, int left, int right)
{
	int i = left, j = right;
	int middle = a[(left + right) / 2];
	while (i <= j)
	{
		while (a[i] < middle)
			i++;
		while (a[j] > middle)
			j--;
		if (i <= j)
		{
			swap(a[i], a[j]);
			i++;
			j--;
		}
		if (left < j)
			QuickSort(a, left, j);
		if (i < right)
			QuickSort(a, i, right);

	}
}

	void DisplayArray(int* a, int n)
	{
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
	}

	int* AllocArray(int n)
	{
		int* a = new int[n];
		for (int i = 0; i < n; i++)
			a[i] = rand() % 10;
		return a;
	}
