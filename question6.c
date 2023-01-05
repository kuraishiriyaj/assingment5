#include<stdio.h>
/* write a program to print the first N 
even natural numbers ?
*/
int main()
{
int i,N;
printf("enter is the first N EVEN Naturl number is");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    
    printf("%d\n",2*i);
}
    return 0;
}