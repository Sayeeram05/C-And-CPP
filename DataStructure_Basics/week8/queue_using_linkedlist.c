#include<stdio.h>
#include<stdlib.h>


struct queue
{
    int data;
    struct queue *next;
};

struct queue *head,*temp,*myqueue;

void display(struct queue *head)
{
    printf("\nStack : ");
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n\n");
}

int main()
{
    head = NULL;
    int no_of_values;
    printf("Enter the no of values : ");
    scanf("%d",&no_of_values);

    char choice;
    
    for(int i = 1 ; i <= no_of_values ; i++)
    {
        myqueue = (struct queue*) malloc(sizeof(struct queue));
        printf("Options : \n\t1.enqueue\n\t2.dequeue\n\t3.Quit\nChoice : ");
        scanf(" %c",&choice);

        if(choice == '1')
        {
            printf("Data : ");
            scanf(" %d",&(myqueue->data));
            myqueue->next = NULL;

            if(head == NULL)
            {
                head = myqueue;
                temp = myqueue;
            }
            else
            {
                temp->next = myqueue;
                temp = myqueue;
            }

            display(head);
        }

        if(choice == '2')
        {
            if(head == NULL)
            {
                printf("Stack is Empty\n");
            }
            else
            {
                temp  = head;
                head = head->next;
                free(temp);

                display(head);
            }
        }
    }

    

}
