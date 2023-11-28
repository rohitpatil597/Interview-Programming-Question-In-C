#include <stdio.h>
#include <inttypes.h>
#define INT_BYTE 32 

#define Rotate_Left(data,pos)   ((data << pos)| data >>(INT_BYTE - pos))
#define Rotate_Right(data,pos)  ((data >> pos)| data <<(INT_BYTE - pos))
int main()
{
  int Data=16;
  printf("Left Result=%d",Rotate_Left(Data,2));
  printf("\nRight Result=%d",Rotate_Right(Data,2));
  return 0;
}
