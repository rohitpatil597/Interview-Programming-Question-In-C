#include <stdio.h>
#include <stdlib.h>

struct Linear{
    int A[10];
    int len;
};
void Linear_search(struct Linear a,int key)
{
    int i;
    int count;
    for(i=0;i<a.len;i++)
    {
        if(a.A[i]==key)
        {
            count=1;
            break;
        }
        else
        {
            count=0;
        }

    }
    if(count==1)
    printf("Find the Key");
    else
    printf("Not found the key");
}
int main()
{
    struct Linear a={{2,5,6,4,7},5};
    Linear_search(a,5);
    return 0;
}
