#include"header.h"
void deletes(ST**ptr)
{
        if(*ptr==NULL)
        {
                printf("NO DATA AVAILABLE \n");
                return ;
                                    }
        char op;
        print(*ptr);
        printf("\n");
        printf("R/r : Enter roll to delete \n");
        printf("N/n : Enter name to delete \n");
        scanf(" %c",&op);

        if(op=='r'||op=='R')
                delete_roll(ptr);
 else if(op=='N'||op=='n')
         delete_name(ptr);
        else
        {
                printf("Invalid operation \n");
                return ;
        }
}
void delete_roll(ST**ptr)
{
        int n;
        ST*prev=NULL,*last=*ptr;


        printf("Enter the roll number to delete \n");
        scanf("%d",&n);

        while(last!=NULL)
        {
                if(last->roll==n)
                {
                        if(last==*ptr)
                                *ptr=last->next;
                        else
                                prev->next=last->next;

                        free(last);
                        last=NULL;
                        printf("This %d data are delete successfully \n",n);
                        return ;
                }
                else
                {
                        prev=last;
                        last=last->next;
                }
       }
        printf("This %d roll number not avaiable\n",n);
}
void delete_name(ST**ptr)
{
        int cnt=0,n;
        char names[10];

        ST*prev=NULL,*last=*ptr;

        printf("Enter the name to delete \n");
        scanf("%s",names);

        while(last!=NULL)
        {
                if(strcmp(last->name,names)==0)
                        cnt++;
                last=last->next;
        }
        if(cnt>1)
        {
                printf("The data are %d more time present \n",cnt);
                delete_roll_name(ptr,names);
        }
        last=*ptr;
        if(cnt==1)
        {
                while(last!=NULL)
                {

                      if(strcmp(last->name,names)==0)
                         {
                                if(last==*ptr)
                                        *ptr=last->next;
                                else
                                        prev->next=last->next;

                                free(last);
                               // last=NULL;
                                printf("This %s name is deleted successfully \n",names);
  return ;
                        }
                        else
                        {
                                prev=last;
                                last=last->next;
                        }
                }
        }
}

