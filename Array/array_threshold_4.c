#include <stdio.h>
#include <stdint.h>

struct array{
    int A[10];
    int size;
    int len;
};
int data_i[10];
int data_j[10];
int data_k[10];

void array_threshold_4(struct array A)
{
    int i,j,k=0;
    int a=0;
    int avg=0;
for (int i = 0; i < A.size - 1; i++) {

    int avg = (A.A[i] + A.A[i + 1] + A.A[i + 2]) / 3;
    if (avg == 4) {
        data_i[a] = A.A[i];
        data_j[a] = A.A[i + 1];
        data_k[a] = A.A[i + 2];
        a++;
    }
}

for (int idx = 0; idx < a; idx++) {
    printf("%d,%d,%d\n", data_i[idx], data_j[idx], data_k[idx]);
}
}
int main()
{
   struct array a={{2,5,5,6,7,0,9,6},8,8};
   array_threshold_4(a);
    return 0;
}
