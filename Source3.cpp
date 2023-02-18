#include <iostream>
#include <ctime>

using namespace std;

template<typename T>
T* create_array(int size)
{
	T* array = new T[size];
	int sum = 0;
	int odd = 1;
	for (size_t i = 0; i < size; i++)
	{
		array[i] = T(rand() % 50);
		cout << array[i] << '\t';
		sum += array[i];
		odd *= array[i];
	}
	cout << "\nSum = " << sum;
	cout << "\nOdd = " << odd;
	return 0;
}

int main() {
	srand(time(0));
	int size;
	cout << "Enter a size -->";
	cin >> size;
	int* array = create_array<int>(size);
}