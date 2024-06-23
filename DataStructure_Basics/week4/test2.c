#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **mat[2];
    int *temp;
    temp = (int*)calloc(3,sizeof(int));
    mat[0] = &temp;
    for(int i = 0 ; i < 3 ; i++)
    {
        scanf("%d",&temp[i]);
    }
    printf("out : ");
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("%d",(*(*mat[0])+i));
    }
}