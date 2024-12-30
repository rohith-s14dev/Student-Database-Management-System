#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#define Name_size 50

typedef struct student
{
        int roll;
        char name[Name_size];
        float percentage;
        struct student *next;
}ST;

static int rollnumbercounter=1;

void add_end(ST**);
void deletes(ST**);
void print(ST*);
void sort(ST**);
void delete_all(ST**);
void delete_roll(ST**);
void delete_name(ST**);
void delete_roll_name(ST**,char*);
void rev_data(ST**);
void stud_sort_percentage(ST**,int);
void stud_sort_name(ST**,int);
void stud_mod(ST*);
int count(ST*);
void mod_name(ST**,int);
void mod_perc(ST**,int);
void mod_val(ST**);
void menu(void);
void stud_save(ST**);
void Exit(ST**);

