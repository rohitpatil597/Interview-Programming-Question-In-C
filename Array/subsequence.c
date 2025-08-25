#include <stdio.h>
#include <stdint.h>

struct array{
    int A[10];
    int size;
    int len;
};
int H[10];

void subsequence (struct array *arr)
{
    int i, k = 0;
    H[k++] = arr->A[0]; // Start with the first element

    for(i = 1; i < arr->size; i++)
    {
        if(arr->A[i] > H[k - 1])
        {
            H[k++] = arr->A[i];
        }
    }

    for(i = 0; i < k; i++)
    {
        printf("%d ", H[i]);

    }
}

void display(struct array arr)
{
    int i;
    for(i = 0; i <= arr.size - 1; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

int main()
{
    struct array arr={{10,22,9,33,21,50,41,60},10,10};
    subsequence (&arr);
    return 0;
}
