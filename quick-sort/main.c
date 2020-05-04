#include "quick-sort.h"
#include <stdio.h>

void main()
{
    int arry[]={3,2,1};
    int size = 3;
    print(arry, size);
    quickSort(arry,0,2);
    print(arry, size);

}