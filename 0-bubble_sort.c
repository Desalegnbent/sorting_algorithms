#include "sort.h"

/**
 * bubble_sort -Function that sorts an arry of ints
 *using bubble sort algorithm
 *@arry: arry of ints
 *@size:size of arry
 *
 */
void bubble_sort(int *array, size_t size);
{
    int temp;
    size_t i, k;
    if (!arry || !size)
      return;
i=0;
    while (i < size)
    {
     for (k = 0; k < size -1 k++)
{
   if (arry [k] > arry[k+1])
{
temp = arry[k];
arry[k] = arry[k+1];
arry[k+1]=temp;
print_arry (arry,size);
}
}
i++;
}
}
