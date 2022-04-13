#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"ALU.h"
#include"std.h"


int sub (int x , int y)
{


    int res = x /y;


    return res;

}
int add (int x , int y)
{


    int res = x +y;


    return res;

}
int main()
{

    int x = 5;
    int y = 6;
    printf("%d + %d = %d"  ,x,y, add(x ,y));
    printf("%d - %d = %d"  ,x,y, sub(x ,y));
    return 0;
}






























