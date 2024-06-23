#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **mat;
    int *temp;
    temp = (int*)malloc(3*sizeof(int));
    mat = &temp;
    for(int i = 0 ; i < 3 ; i++)
    {
        scanf("%d",&temp[i]);
    }
    printf("out : ");
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("%p\n",((*mat)+i));
    }
}