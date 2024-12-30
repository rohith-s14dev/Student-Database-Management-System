#include"header.h"
void stud_save(ST**ptr)
{
        if(count(*ptr)==0)
        {
                printf("NO DATA AVAILABLE \n");
                return ;
        }
        FILE*fp=fopen("student_dat","w");

        if (fp == NULL)
        {
                perror("fopen");
                return;
        }

        ST*last=*ptr;

 fprintf(fp,"roll no       name          percentage\n");
        while(last!=NULL)
        {
                fprintf(fp," %d            %s             %.2f\n",last->roll,last->name,last->percentage);
                last=last->next;
        }

        fclose(fp);
        printf("Records saved successfully!\n");
}

