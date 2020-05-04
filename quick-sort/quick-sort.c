#include "quick-sort.h"
#include <stdio.h>

void swap(int arry[], int a, int b)
{
    int temp = arry[a];
    arry[a] = arry[b];
    arry[b] = temp;
}

void print(int arry[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arry[i]);
    }
    printf("\n");
}



void quickSort(int arry[], int left, int right)
{
    if (left > right)
    {
        return;
    }
    int pivot = arry[left];
    int l = left;
    int r = right;
    while (l != r)
    {
        while ((!(pivot > arry[r])) && l < r)
        {
            r--;
        }
        while ((!(pivot < arry[l])) && l < r)
        {
            l++;
        }

        if (l < r)
        {
            swap(arry, l, r);
        }
    }
    swap(arry, left, l);
    quickSort(arry, left, l - 1);
    quickSort(arry, l + 1, right);
}