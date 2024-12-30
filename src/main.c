#include "header.h"
int main()
{
char op;
        ST*hptr=0;
        while(1)
        {
                menu();
                scanf(" %c",&op);
                switch(op)
                {
                        case 'A':
                        case 'a':add_end(&hptr);break;
                        case 's':
                        case 'S':print(hptr);break;
                        case 'm':
                        case 'M':stud_mod(hptr);break;
                        case 'T':
                        case 't':sort(&hptr);break;
                        case 'R':
                        case 'r':rev_data(&hptr);break;
                        case 'd':
                        case 'D':deletes(&hptr);break;
                        case 'L':
                        case 'l':delete_all(&hptr);break;
                        case 'V':
                        case 'v':stud_save(&hptr);break;
                        case 'E':
                        case 'e':Exit(&hptr);break;

                        default:printf("Invalid opertion \n");
                }
     }

}

