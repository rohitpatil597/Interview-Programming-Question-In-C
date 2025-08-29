#include <stdio.h>
#include <stdint.h>

#define clear_1st_set(data)   ((data-1) & data)

int main() 
{
printf("%d",clear_1st_set(12));
return 0;
}
