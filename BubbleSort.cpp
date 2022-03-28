#include <iostream>
#include <string>

using namespace std;

template <class T>
void bubbleSort(T A[], size_t size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (A[j] > A[i])
            {
                swap(A[j], A[i]);
            }
        }
    }
}

int main()
{
    int t[] = {3, 5, 7, 9, 1, 2, 4, 8};
    bubbleSort(t, sizeof(t) / sizeof(t[0]));
    for (auto a : t)
    {
        cout << a << " ";
    }
}