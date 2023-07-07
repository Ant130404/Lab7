#include <stdio.h>

void bubbleSort(int a[], int n)
{
    int i, j, temp;
    int total = 0;
    
    for(i=0; i<n; i++)
    {
        int count = 0;
        for(j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                // swap
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                // increment count;
                count++;
            }
        }
        printf("%d ", count);
        total += count;
    }
    printf("\nTotal swaps: %d",total);
}

int main()
{
    int array[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

    bubbleSort(array, 9);

    return 0;
}