#include<stdio.h>
/* write a program to print the first N odd  natural
numbers ?
*/
int main()
{
int i,N;
printf("enter is the first N odd natural number is");
scanf("%d",&N);
for(i=1;i<=N;i++)
{

    printf("%d\n",(2*i-1));

}
    return 0;
}