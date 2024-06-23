#include <stdio.h>

struct detail
{
    char name[15],regno[15],gender;
    int number,mark;
};

int main()
{
    struct detail stu[5];
    for(int i = 1 ; i <= 3 ; i++)
    { 
        printf("Student %d details :\n",i);
        printf("\tStudent %d name : ",i);
        scanf("%s",stu[i-1].name),getchar();
        printf("\tStudent %d regno : ",i);
        scanf("%s",stu[i-1].regno),getchar();
        printf("\tStudent %d gender : ",i);
        scanf("%c",&stu[i-1].gender),getchar();
        printf("\tStudent %d number : ",i);
        scanf("%d",&stu[i-1].number),getchar();
        printf("\tStudent %d mark : ",i);
        scanf("%d",&stu[i-1].mark),getchar();
        printf("\n\n");
    }

    printf("Students scored 60 percent marks : \n");
    for(int i = 1 ; i <= 3 ; i++)
    {
        
        if(stu[i-1].mark > 60 && stu[i-1].mark < 80)
        {
            printf("\t%d.%s \n",i,stu[i-1].name);
        }
    }
    printf("\n\n");
    printf("Students scored 80 percent marks : \n");
    for(int i = 1 ; i <= 3 ; i++)
    {
        if(stu[i-1].mark > 80 )
        {
            printf("\t%d.%s \n",i,stu[i-1].name);
        }
    }
}