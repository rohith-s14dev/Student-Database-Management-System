#include"header.h"
void rev_data(ST**ptr)
{
        int c=count(*ptr),j=0,i;
        if(c==0)
        {
                printf("NO DATA AVAILABLE \n");
                return ;
        }
        ST*last=*ptr;
        ST**temp=(ST**)malloc(c*sizeof(ST*));

        while(last!=NULL)
        {
                temp[j++]=last;
                last=last->next;
 }
        last=*ptr;

        printf("roll no      name       percentage\n");
        for(i=0;i<c;i++)
        {
                last=*ptr;
                for(j=0;j<c-1-i;j++)
                {
                        last=last->next;
                }
                printf(" %d           %s          %.2f\n",last->roll,last->name,last->percentage);
        }

}

