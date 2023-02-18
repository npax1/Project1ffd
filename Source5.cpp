#include <iostream>
#include <ctime>

using namespace std;

template<typename T>
T* cr_arr(int size1, int size2)
{
	T* array1 = new T[size1];
	T* array2 = new T[size2];
	for (size_t i = 0; i < size1; i++)
	{
		array1[i] = rand() % 100;
		cout << array1[i] << '\t';
	}
	cout << '\n';
	for (size_t i = 0; i < size2; i++)
	{
		array2[i] = rand() % 100;
		cout << array2[i] << '\t';
	}
	int i = 0;
	int* ptr;
	for (size_t i = 0; i < size1; i++)
	{
		int j = i, k = 0;
		while (j < size1 && k < size2 && array2[k] == array1[j])
		{
			j++;
			k++;
		}if (k == size2)
		{
			return ptr = array1 + i;
		}
	}
	return 0;
}

int main() {
	srand(time(0));
	int size1, size2;
	cout << "Enter 1 size --->";
	cin >> size1;
	cout << "Enter 2 size --->";
	cin >> size2;
	int* array = cr_arr<int>(size1, size2);
}