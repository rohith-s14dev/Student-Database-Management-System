#include"header.h"
void sort(ST**ptr)
{
        int i,j=0;
        ST*last=*ptr;
        int c=count(*ptr);

        if(c==0)
        {
                printf("NO DATA AVALIABLE \n");
                return;
        }

        ST**temp=(ST**)malloc(c*(sizeof(ST*)));

        while(last!=NULL)
        {
                temp[j++]=last;
                last=last->next;
        }

        char op;
 printf("N/n : Sort with name\n");
        printf("p/P : Sort with percentage\n");
        scanf(" %c",&op);

        if(op=='n'||op=='N')
                stud_sort_name(temp,c);
        else if(op=='P'||op=='p')
                stud_sort_percentage(temp,c);
        else
        {
                printf("Invalid operation \n");
                return;
        }

}

void stud_sort_name(ST**temp,int c)
{
        int i,j;
        ST*t;


        for(i=0;i<c-1;i++)
        {
                for(j=i+1;j<c;j++)
                {
                        if(strcmp(temp[i]->name ,temp[j]->name) > 0)
                        {
                                t=temp[i];
                                temp[i]=temp[j];
                                temp[j]=t;
                        }
                }
 }


        printf("The name order data are sorted \n");
        printf("\n");
        printf("roll no    name    percentage \n");
        for(i=0;i<c;i++)
        {
                printf("%d         %s       %.2f\n",temp[i]->roll,temp[i]->name,temp[i]->percentage);
        }
}

void stud_sort_percentage(ST**temp,int c)
{
        int i,j;
        ST*t;
        for(i=0;i<c-1;i++)
        {
                for(j=i+1;j<c;j++)
                {
                        if(temp[i]->percentage < temp[j]->percentage)
                        {
                                t=temp[i];
                                temp[i]=temp[j];
                                temp[j]=t;
                        }
                }
        }
        printf("The percentage order data are sorted \n");
        printf("\n");
        printf("roll no      name       percentage\n");
        for(i=0;i<c;i++)
        {
                printf(" %d          %s           %.2f\n",temp[i]->roll,temp[i]->name,temp[i]->percentage);
        }
}

