#include <iostream>
#include <ctime>

using namespace std;


void remastered(int*& array, int& size, int add_size, int* add, int start)
{
	int* temp = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = array[i];
	}
	int new_size = size + add_size;
	int* rem_array = new int[new_size];

	for (size_t i = 0; i < start - 1; i++)
	{
		rem_array[i] = temp[i];
	}

	for (size_t i = 0; i < add_size; i++)
	{
		rem_array[start - 1 + i] = add[i];
	}

	for (size_t i = start - 1; i < size; i++)
	{
		rem_array[add_size + i] = temp[i];
	}

	size = new_size;
	delete[] array;
	array = rem_array;
	delete[] temp;

	cout << "\n\nRemastered\n";
	for (size_t i = 0; i < size; i++)
	{
		cout << array[i] << "\t";
	}
}

int main() {
	srand(time(0));
	int size;
	cout << "Enter a size ";
	cin >> size;
	int* array = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		array[i] = rand() % 100;
		cout << array[i] << "\t";
	}
	cout << "\nEnter a start ->";
	int start;
	cin >> start;
	cout << "Enter a size ->";
	int add_size;
	cin >> add_size;
	int* add = new int[add_size];
	for (size_t i = 0; i < add_size; i++)
	{
		add[i] = rand() % 100;
	}

	remastered(array, size, add_size, add, start);
}