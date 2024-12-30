#include"header.h"
int count(ST*ptr)
{
        int cnt=0;
        while(ptr!=NULL)
        {
                cnt++;
                ptr=ptr->next;
        }
        return cnt;
}

