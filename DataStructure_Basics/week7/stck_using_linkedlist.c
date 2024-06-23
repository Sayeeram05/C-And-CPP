#include<stdio.h>
#include<stdlib.h>


struct stack
{
    int data;
    struct stack *next;
};

struct stack *head,*temp,*mystack;

void display(struct stack *head)
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
        mystack = (struct stack*) malloc(sizeof(struct stack));
        printf("Options : \n\t1.push\n\t2.pop\n\t3.Quit\nChoice : ");
        scanf(" %c",&choice);

        if(choice == '1')
        {
            printf("Data : ");
            scanf(" %d",&(mystack->data));
            mystack->next = NULL;

            if(head == NULL)
            {
                head = mystack;
                temp = mystack;
            }
            else
            {
                temp->next = mystack;
                temp = mystack;
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
                struct stack *previous;
                temp = head;
                while(temp->next != NULL)
                {
                    previous = temp;
                    temp = temp->next;
                }
                previous->next=NULL;
                free(temp);

                display(head);
            }
        }
    }

    

}
