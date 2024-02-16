
#include<stdio.h>

/* FIND THE LARGEST OF THREE NUMBERS */
int main() {
    int a , b , c;
    scanf("%d %d %d",&a,&b,&c);
    if ((a>b) && (a>c)) /* composite condition statement */
        printf("Largest number is %d.",a);
    else
        if(b>c)    /* simple condition statement */
            printf("Largest number is %d.",b);
        else
            printf("Largest number is %d.",c);
    return 0;
}

