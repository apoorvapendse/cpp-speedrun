#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a = 12;
   int b = 18;
   char name[100];
   printf("enter your name\n");
   scanf("%s",name);

   int age ;
   printf("enter your age\n");
   scanf("%d",&age);

   printf("%s is %d years old\n",name,age);
    

    return 0;
}
