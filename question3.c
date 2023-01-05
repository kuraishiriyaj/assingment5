#include<stdio.h>
/* write  a program to print the first N natural in
 reverse order ?
*/
int main()
{
 int i, N;
 printf("enter is the first N natural number is the reverese order");
 scanf("%d",&N);
 for(i=N;i>=1;i--)
 {
    printf("%d\n",i);
 }
    return 0;
}