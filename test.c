#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int* arr = (int*)malloc(sizeof(int)*12);
    for (int i = 0; i < 12; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    

    return 0;
}
