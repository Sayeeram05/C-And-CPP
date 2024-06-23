#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int array[100];
    int top;
};

struct queue *myqueue;

void display(int top)
{
    printf("\nqueue : ");
    for(int i = 0 ; i <= top ; i++)
    {
        printf("%d ",myqueue->array[i]);
    }
    printf("\n\n");
}

int main()
{
    myqueue = (struct queue*) malloc(sizeof(struct queue));

    myqueue->top = -1;

    char choice;
    do
    {
        printf("Options : \n\t1.enqueue\n\t2.dequeue\n\t3.Quit\nChoice : ");
        scanf(" %c",&choice);

        if(choice == '1')
        {
            myqueue->top++;
            printf("Data : ");
            scanf(" %d",&(myqueue->array[myqueue->top]));
            display(myqueue->top);
        }

        if(choice == '2')
        {
            if(myqueue->top == -1)
            {
                printf("queue is Empty\n");
            }
            else
            {
                for(int i = 0 ; i < myqueue->top ; i++)
                {
                    myqueue->array[i] = myqueue->array[i+1];
                }
                myqueue->top--;
                display(myqueue->top);
            }
        }

        

    } while (choice !='3');
    

}
