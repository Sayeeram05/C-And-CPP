#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};


void display(struct node *head,int n)
{
    printf("The values : ");
    for(int i = 1 ; i <= n ; i++)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}


int main()
{
    int no_of_values;
    printf("Enter the no of values : ");
    scanf("%d",&no_of_values);

    struct node *head,*temp;
    head = NULL;

    for(int i = 1 ; i <= no_of_values ; i++)
    {
        struct node *new_node;
        new_node = (struct node*) malloc(sizeof(struct node));

        printf("Enter the node %d value  : ",i);
        scanf("%d",&(new_node->data));
        new_node->prev = NULL;
        new_node->next = NULL;

        if(head == NULL)
        {
            head = new_node;
            temp = new_node;
        }

        else
        {
           temp->next = new_node;
           new_node->prev = temp;
           temp = new_node;
        }
    }


    display(head,no_of_values);

}

