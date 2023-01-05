#include<stdio.h>
/* write a program to print squares of the first 
N naturals numbers ?
*/
int main()
{
int i,N;
printf("enter s the first N natural number is ");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    printf("%d\n",i*i);
}
    return 0;
}