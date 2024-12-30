#include"header.h"
void Exit(ST**ptr)
{
        char op;

        printf("Enter\n");
        printf("S/s :save and exit\n");
        printf("E/e :Exit without saving\n");
        scanf(" %c",&op);

        if(op=='s'||op=='S')
        {
                stud_save(ptr);
                exit(0) ;
}
else if(op=='E'||op=='e')
        {
                char confirm;
                printf("Are you sure you want to exit without saving? (Y/N): ");
                scanf(" %c", &confirm);
                if (confirm =='Y'||confirm=='y')
                        exit(0);
                else
                        printf("Exiting canceled. Please choose an option.\n");
        }
        else
        {
                printf("Invalid operation \n");
                return ;
        }
}

