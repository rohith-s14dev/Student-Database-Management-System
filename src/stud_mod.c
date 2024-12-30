#include"header.h"
void stud_mod(ST*ptr)
{
        int j=0;
        ST*last=ptr;

        int c=count(ptr);
        if(c==0)
        {
                printf("NO DATA AVALIABLE \n");
                return;
        }

        ST**temp=(ST**)malloc(c*sizeof(ST*));

        while(last!=NULL)
        {
                temp[j++]=last;
                last=last->next;
        }
        print(ptr);

        char op;
        printf("Enter which record to search for modification \n");
        printf("N/n : to search a name\n");
        printf("P/p : to percentage based\n");
        printf("Enter the choice: \n");
        scanf(" %c",&op);

        if (op=='N'||op=='n')
                mod_name(temp,c);
        else if(op=='P'||op=='p')
                mod_perc(temp,c);
        else
        {
                printf("Invalid operation \n");
                return ;
}

        free(temp);
        temp=NULL;
}
void mod_name(ST**temp,int c)
{
        int i=0,cnt=0,fcnt=0,rolls;
        float f;
        char val[10],op;

        ST*last=*temp;
        printf("Enter the name to modfiy\n");
        scanf("%s",val);

        ST**p=(ST**)malloc(c*sizeof(ST));
        while(last!=0)
        {
                if((strcmp(last->name,val))==0)
                cnt++;

                p[i++]=last;
                last=last->next;
        }
        if(cnt>1)
        {
 printf("This %d number of time present \n",cnt);
                printf("\n");
printf("roll no    name    percentage\n");
                for(int j=0;j<i;j++)
                {
                        if((strcmp(p[j]->name,val))==0)
                                printf(" %d         %s       %.2f\n",p[j]->roll,p[j]->name,p[j]->percentage);
                }
                printf("Enter the roll no to modify\n");
                scanf("%d",&rolls);
                for(int j=0;j<i;j++)
                {
                        if(temp[j]->roll==rolls)
                        {

                                printf("Record Found Enter new details:\n");
                                printf("Enter option \n");
                                printf("n :name to modify\n");
                                printf("p :percentage to modify\n");
                                printf("b :name and both to modfiy\n");
                                scanf(" %c",&op);
                                if((op=='b'||op=='B')||(op=='p'||op=='n'))
                                {
                                        if(op=='n'||op=='b')
                                        {
                                                printf("New Name: ");
                                                scanf("%s", (temp[j])->name);
                                        }
                                        if(op=='p'||op=='b')
                                        {
                                                printf("New Percentage: ");
                                                scanf("%f", &(temp[j])->percentage);
                                        }
                                        printf("Record Updated!\n");
                                                                         }
                                else
                                {
                                        printf("Invalid operation \n");
                                        return ;
                                }

                        }


                }
        }




        if(cnt==1)
        {
                for(i=0;i<c;i++)
                {
                        if(strcmp(temp[i]->name,val)==0)
                        {

                                printf("Record Found Enter new details:\n");
                                printf("Enter option \n");
                                printf("n :name to modify\n");
                                printf("p :percentage to modify\n");
                                printf("b :name and percentage to modfiy\n");
                                scanf(" %c",&op);
                                if((op=='b'||op=='B')||(op=='p'||op=='n'))
                                {
                                        if(op=='n'||op=='b')
  {

                                                printf("New Name: ");
                                                scanf("%s", (temp[i])->name);
                                        }
                                        if(op=='p'||op=='b')
                                        {
                                                printf("New Percentage: ");
                                                scanf("%f", &(temp[i])->percentage);
                                        }

                                        printf("Record Updated!\n");
                                }
                                else
                                {
                                        printf("Invalid operation \n");
                                        return ;
                                }

                        }

                }

                printf("Record with name %s not found.\n",val);
        }
}
void mod_perc(ST**temp,int c)
{
        int i,fcnt=0,ncnt=0,rolls;
        float per;
        char s[20],op;
        printf("Enter the Percentage to modfiy\n");
        scanf("%f",&per);
        if(*temp==0)
        {
                printf("No data available \n");
                return ;
        }
        ST*last=*temp;
        while(last!=0)
        {
                if(last->percentage==per)
                        fcnt++;
                last=last->next;
        }
        last=*temp;
        if(fcnt>1)
        {

                printf("This %d number of time present \n",fcnt);
                printf("\n");
                printf("rollnumber    name   percentage\n");
                while(last!=0)
                {
                        if(last->percentage == per)
                                printf(" %d            %s      %.2f\n",last->roll,last->name,last->percentage);
                        last=last->next;
                }
                printf("Enter the roll no to modify\n");
                scanf("%d",&rolls);
                for(int j=0;j<c;j++)
                {
if(temp[j]->roll==rolls)
                        {

                                printf("Record Found Enter new details:\n");
                                printf("Enter option \n");
                                printf("n :name to modify\n");
                                printf("p :percentage to modify\n");
                                printf("b :name and both to modfiy\n");
                                scanf(" %c",&op);
                                if((op=='b'||op=='B')||(op=='p'||op=='n'))
                                {
                                        if(op=='n'||op=='b')
                                        {
                                                printf("New Name: ");
                                                scanf("%s",temp[j]->name);
                                        }
                                        if(op=='p'||op=='b')
                                        {
                                                printf("New Percentage: ");
                                                scanf("%f",&temp[j]->percentage);
                                        }

                                        printf("Record Updated!\n");
                                }
                                else
                                {
                                        printf("Invalid operation \n");
                                        return ;
                                }

                        }
                }
        }
        else if(fcnt==1)
{
                for(i=0;i<c;i++)
                {
                        if(temp[i]->percentage == per)
                        {

                                printf("Record Found Enter new details:\n");
                                printf("Enter option \n");
                                printf("n :name to modify\n");
                                printf("p :percentage to modify\n");
                                printf("b :name and both to modfiy\n");
                                scanf(" %c",&op);
                                if((op=='b'||op=='B')||(op=='p'||op=='n'))
                                {
                                        if(op=='n'||op=='b')
                                        {
                                                printf("New Name: ");
                                                scanf("%s",temp[i]->name);
                                        }
                                        if(op=='p'||op=='b')
                                        {
                                                printf("New Percentage: ");
                                                scanf("%f", &(temp[i])->percentage);
                                        }

                                        printf("Record Updated!\n");
                                        return ;
                                }
                                else
                                {
                                        printf("Invalid operation \n");
                                        return ;
                                }

                        }
}
printf("Record with Roll Number %f not found.\n", per);
        }

}


