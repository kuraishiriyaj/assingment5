#include<stdio.h>
/* write a program to print the first N 
even naturals in reverse order ?
*/
int main()
{
int i,N;
printf("enter is the first  N even natural in reverse order is ");
scanf("%d",&N);
for(i=N;i>=1;i--)
{

    printf("%d\n",2*i);
}
    return 0;
}