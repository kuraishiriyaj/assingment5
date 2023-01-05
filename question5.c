#include<stdio.h>
/* write a program to print the first N odd natural 
numbers in reverse order ?
*/
int main()
{
int i,N;
printf("enter is the first odd natural number in reverse order is");
scanf("%d",&N);
for(i=N;i>=1;i--)
{
    
    printf("%d\n",(2*i-1));
}
    return 0;
}