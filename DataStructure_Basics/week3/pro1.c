#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[15];
    char gender;
    int age;
};

int main()
{
    int strength;
    printf("Enter the number of students : ");
    scanf("%d",&strength);

    struct student *list = NULL;
    list = (struct student*)malloc(strength * sizeof(struct student));

    for(int i = 0 ; i < strength ; i++)
    {
        printf("Student %d details : \n",i+1);
        printf("Name : ");
        scanf("%s",(list+i)->name),getchar();
        printf("Gender : ");
        scanf("%c",&(list+i)->gender),getchar();
        printf("Age : ");
        scanf("%d",&(list+i)->age);
    }

    printf("\n\n");
    for(int i = 0 ; i < strength ; i++)
    {
        printf("Student %d details : \n",i+1);
        printf("Name : %s\t",(list+i)->name);
        printf("Gender : %c\t",(list+i)->gender);
        printf("Age : %d\n",(list+i)->age);
    }

    free(list);
    return 0;
}