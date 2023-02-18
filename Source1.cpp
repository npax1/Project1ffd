#include <iostream>
#include <ctime>

using namespace std;

template<typename T>
T* init_array(int size1, int size2)
{
    T* arr1 = new T[size1];
    for (size_t i = 0; i < size1; i++)
    {
        arr1[i] = T(rand() % 50);
        cout << arr1[i] << '\t';
    }
    cout << '\n';
    T* arr2 = new T[size2];
    for (size_t i = 0; i < size2; i++)
    {
        arr2[i] = T(rand() % 50);
        cout << arr2[i] << '\t';
    }

    cout << '\n';
    T* arr3 = new T[size1 + size2];
    for (size_t i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }
    int i = 0;
    for (size_t k = size1; k < size1 + size2; k++)
    {
        arr3[k] = arr2[i++];
    }
    for (size_t i = 0; i < size1 + size2; i++)
    {
        cout << arr3[i] << '\t';
    }
    for (size_t i = 0; i < size1 + size2 - 1; i++)
    {
        for (size_t j = i + 1; j < size1 + size2; j++)
        {
            if (arr3[i] == arr3[j])
            {
                for (size_t k = j; k < size1 + size2; k++)
                {
                    arr3[k] = arr3[k + 1];
                }
                size1 + size2--;
            }
        }
    }
    cout << "\n\nSorted " << '\n';
    for (size_t i = 0; i < size1 + size2; i++)
    {
        cout << arr3[i] << '\t';
    }
    return 0;
}





int main() {
    srand(time(0));
    cout << "Enter 1 size: ";
    int size1;
    cin >> size1;
    cout << "Enter 2 size: ";
    int size2;
    cin >> size2;
    int* arr = init_array<int>(size1, size2);
}