#include <stdio.h>
int main(int argc, char *argv[])
{
    int a, b, w,x,y,z;
    w=15;
    x=10;
    y=6;
    z=22;
    a= w * x /++y + z / y ;
    printf("\nwersja 1");
    printf("\na= %d y= %d\n", a, y);
    w=11;
    x=1;
    y=5;
    z=21;
    b= z/y + w*x/++y; //b=??, y=??
    printf("\nwersja 2");
    printf("\nb= %d y= %d\n", b, y);
    fflush(stdin);
    getchar();
    return 0;
}