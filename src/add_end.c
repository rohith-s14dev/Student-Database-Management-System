#include"header.h"
void add_end(ST**ptr)
{
        int count=0;
        char ch,op;
 do{
                ST*temp=(ST*)malloc(sizeof(ST));
                printf("Enter the name and percentage\n");
                scanf("%s%f",temp->name,&temp->percentage);

                temp->roll=rollnumbercounter++;
                if(*ptr==NULL)
                {
                        temp->next=*ptr;
                        *ptr=temp;
                }
                else
                {
                        ST*last=*ptr;
                        while(last->next!=NULL)
                                last=last->next;

                        temp->next=last->next;
                        last->next=temp;
                }
                printf("Do you want add other data (Y/N)\n");
                scanf(" %c",&op);
        }while(op=='Y'||op=='y');
        return ;
}

