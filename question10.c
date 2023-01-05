#include<stdio.h>
/* write a program to print a tabel of N ?
*/
int main()
{
int i,N;
printf("table of the N number is ");
scanf("%d",&N);
for(i=1;i<=10;i++)
{
    printf("%d\n",i*N);
}
    return 0;
}