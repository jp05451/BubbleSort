#include <iostream>
#include <string>

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