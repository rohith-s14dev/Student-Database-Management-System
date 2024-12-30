#include"header.h"
void print(ST*ptr)
{
int d;float f;char s[20];

        if(ptr==NULL)
        {
                printf("NO DATA AVAILABLE \n");
                return ;
        }
        printf("rollnumber  name      percentage\n");
        while(ptr!=NULL)
        {
                printf("  %d         %s        %.2f\n",ptr->roll,ptr->name,ptr->percentage);
                ptr=ptr->next;
        }

}


