#include<stdio.h>
/* write a program to print cubes of the first 
N naturals numbers ?
*/
int main()
{
int i,N;
printf("enter is the first N cubes of the natural number is\n:");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    printf("%d\n",(i*i*i));
}
    return 0;
}