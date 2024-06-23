#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int array[100];
    int top;
};

struct stack *mystack;

void display(int top)
{
    printf("\nStack : ");
    for(int i = 0 ; i <= top ; i++)
    {
        printf("%d ",mystack->array[i]);
    }
    printf("\n\n");
}

int main()
{
    mystack = (struct stack*) malloc(sizeof(struct stack));

    mystack->top = -1;

    char choice;
    do
    {
        printf("Options : \n\t1.push\n\t2.pop\n\t3.Quit\nChoice : ");
        scanf(" %c",&choice);

        if(choice == '1')
        {
            mystack->top++;
            printf("Data : ");
            scanf(" %d",&(mystack->array[mystack->top]));
            display(mystack->top);
        }

        if(choice == '2')
        {
            if(mystack->top == -1)
            {
                printf("Stack is Empty\n");
            }
            else
            {
                mystack->top--;
                display(mystack->top);
            }
        }

        

    } while (choice !='3');
    

}
