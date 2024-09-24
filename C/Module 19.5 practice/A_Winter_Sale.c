#include<stdio.h>
int main()
{
    float a,b,prc,pertk;
    scanf("%f %f",&a,&b);
    pertk=100-a;
    prc=(100/pertk)*b;
    printf("%.2f",prc); 
    return 0;
}