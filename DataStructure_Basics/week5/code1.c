#include<stdio.h>
#include<stdlib.h>

void Insertatpos(int *arr,int *size)
{
    int p,v;
    printf("Enter the position and value : ");
    scanf("%d %d",&p,&v);

    for(int i = *size ; i >= p ; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[p-1]=v;
    size = (*size) + 1;
    printf("%d",*size);

    for(int i = 0 ; i < *size ; i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[10] = {1,2,3};
    int size = 3;
    Insertatpos(arr,&size);

}