#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,hours,minutes,seconds,y;
    printf("enter the passed seconds of the day:");
    scanf("%d",&x);
   hours=x/3600;
   y=x%3600;
   minutes=y/60;
   seconds=y%60;
   printf(" %d:%d:%d",hours,minutes,seconds);



    return 0;
}
