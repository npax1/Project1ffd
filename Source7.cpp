#include <iostream>
#include <ctime>

using namespace std;

template<typename T>
T* cr_ar(int size)
{
	T* array = new T[size];
	for (size_t i = 0; i < size; i++)
	{
		array[i] = rand() % 100;
		cout << array[i] << '\t';
	}
	cout << "\n\nEnter [ 1 - add | 2 - skip ] ----> ";
	int op;
	cin >> op;
	switch (op)
	{
	case 1: {
		cout << "\nEnter size to add ---> ";
		int add_size;
		cin >> add_size;
		int size_added = size + add_size;
		for (size_t i = size; i < size_added; i++)
		{
			cout << "\nEnter a number -> ";
			int num;
			cin >> num;
			array[i] = num;
		}
		cout << "\nRemastered array\n";
		for (size_t i = 0; i < size_added; i++)
		{
			cout << array[i] << '\t';
		}
	}break;
	case 2: {
		break;
	}break;
	default:
		break;
	}
	return 0;
}

int main() {
	srand(time(0));
	int size;
	cout << "Enter a size ---> ";
	cin >> size;
	int* arr = cr_ar<int>(size);
}