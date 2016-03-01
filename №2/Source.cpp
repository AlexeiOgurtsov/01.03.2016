#include <iostream>
using namespace std;

void Merge(int *A, int first, int last);
void MergeSort(int *A, int first, int last);

int main()
{
	int i, n;
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
	int *A = new int[100];
	for (i = 1; i <= n; i++)
	{
		cout << i << " element > "; cin >> A[i];
	}
	MergeSort(A, 1, n);
	cout << endl;
	for (i = 1; i <= n; i++) cout << A[i] << " ";
	delete[]A;
	system("pause");
	return 0;
}

void Merge(int *A, int first, int last)
{
	int middle, start, final, j;
	int *mas = new int[100];
	middle = (first + last) / 2;
	start = first;
	final = middle + 1;
	for (j = first; j <= last; j++)
		if ((start <= middle) && ((final>last) || (A[start]<A[final])))
		{
		mas[j] = A[start];
		start++;
		}
		else
		{
			mas[j] = A[final];
			final++;
		}

	for (j = first; j <= last; j++) A[j] = mas[j];
	delete[]mas;
};

void MergeSort(int *A, int first, int last)
{
	{
		if (first<last)
		{
			MergeSort(A, first, (first + last) / 2);
			MergeSort(A, (first + last) / 2 + 1, last);
			Merge(A, first, last);
		}
	}
};
