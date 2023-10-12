#include <stdio.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int arr[], int size) 
{
    int i, j, k;

    for (i = 0; i < size - 1; i++) 
    {
        k = i;
        for (j = i + 1; j < size; j++) 
        {
            if (arr[j] < arr[k]) 
            {
                k = j;
            }
        }
        if (k!= i) 
        {
            swap(&arr[i], &arr[k]);
        }
    }
}

int main() 
{
    int arr[] = { 60, 32, 21, 15, 20, 9, 70 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("배열 정렬 전: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sort(arr, size);

    printf("배열 정렬 후: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}