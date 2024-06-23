#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r1,r2,c1,c2;
    printf("Enter 1st matrix row and column : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter 2nd matrix row and column : ");
    scanf("%d %d",&r2,&c2);

    if(c1!=r2)
    {
        printf("\nMultiplication is not possible\n");
        exit(0);
    }

    int *mat1[r1],*mat2[r2];
    printf("Enter the elements for matrix 1 : \n");
    for(int i = 0 ; i < r1 ; i++)
    {
        mat1[i]= (int*)calloc(c1,sizeof(int));
        for(int j = 0 ; j < c1 ; j++)
        {
            printf("Element [%d][%d] : ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("\nEnter the elements for matrix 2 : \n");
    for(int i = 0 ; i < r1 ; i++)
    {    
        mat2[i]=(int*)malloc(c2*sizeof(int));
        for(int  j = 0 ; j < c2 ; j++)
        {
            printf("Element [%d][%d] : ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("\n");
    printf("Multiplication : \n");
    for(int i = 0 ; i < r1 ; i++)
    {
        for(int j = 0 ; j < c1 ; j++)
        {
            int result = 0;
            for(int k = 0 ; k < r2 ; k++)
                result += mat1[i][k]*mat2[k][j];
            printf("%d ",result);
        }
        printf("\n");

    }
}