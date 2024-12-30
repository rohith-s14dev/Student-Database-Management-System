#include"header.h"
void delete_all(ST**ptr)
{

        char op;
        if(*ptr==NULL)
        {
                printf("NO DATA AVAILABLE  \n");
                return ;
        }

        printf("The data is deleted permently, also want delete(y/n)\n");
        scanf(" %c",&op);

        if(op=='y'||op=='Y')
        {
ST*last=*ptr;
                while(*ptr!=NULL)
                {
                        *ptr=last->next;
                        free(last);
                        last=*ptr;
                }
                printf("All nodes is deleted sucessfully \n");
        }
}

void delete_roll_name(ST**ptr,char*str)
{
        int n;
        ST*prev=NULL,*last=*ptr;
        printf("Enter the roll number to delete \n");
        scanf("%d",&n);

        while(last!=0)
        {

                if(last->roll==n)
                {

                        if(strcmp(last->name,str)==0)
                        {

                                if(last==*ptr)
                                        *ptr=last->next;
                                else
                                        prev->next=last->next;

                                free(last);
                                  last=NULL;
                                printf("This %s name delete successfully \n",str);
                                return ;
                        }
                        else
                        {
                                printf("Enter correct roll to delete\n");
                                delete_roll_name(ptr,str);

                        }
 }
                else
                {
                        prev=last;
                        last=last->next;
                }
        }
        printf("This %s data are deleted \n",str);

}

