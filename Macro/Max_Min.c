#include <stdio.h>

#define max(a,b,c)   ((a) >= (b) && (a) >= (c) ? a : ((b) >= (c) && (b) >= (a) ? b : (c)))
#define min(a,b,c)   ((a) <= (b) && (a) <= (c) ? a : ((b) <= (c) && (b) <= (a) ? b : (c)))

int main()
{
    printf("%d",min(12,9,84));

    return 0;
}
