#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio_ext.h>

int count = 0;
typedef struct student
{
    char *name;
    int pnr;
} STU;

void insert(STU *);
void search(STU *);
void print_d(STU *);
void modify(STU *);

int main()
{
    STU stu1[10];
    int ch;
    while (1)
    {
        printf("What you want:- \n 0.EXIT\n 1.FILL the data\n 2.Print the all data \n 3.Modifiy the data\n 4.search th data\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
        {
            for (int i = 1; i <= count; i++)
            {
                free(stu1[i].name);
            }
            exit(0);
        }

        case 1:
        {
            insert(stu1);
            break;
        }

        case 2:
        {
            print_d(stu1);
            break;
        }

        case 3:
        {
            modify(stu1);
            break;
        }

        case 4:
        {
            search(stu1);
            break;
        }
        }
    }

    return 0;
}

void insert(STU *s1)
{
    char buffer[50];
    count++;
    printf("ENter the name of the student\n");
    __fpurge(stdin);
    scanf("%[^\n]s", buffer);
    int size = strlen(buffer);
    (s1 + count)->name = malloc((size + 1) * sizeof(char));
    strcpy((s1 + count)->name, buffer);

    printf("Enter the PRN\n");
    scanf("%d", &(s1 + count)->pnr);
}

void print_d(STU s3[])
{
    for (int i = 1; i <= count; i++)
    {
        printf("your name is:-%s", s3[i].name);
        printf("your PNR is:-%d", (s3 + i)->pnr);
    }
}
void modify(STU *s4)
{
    char buffer1[50];
    int ch1;
    char arr1[50];
    printf("ENter the name of the sudent whom you want to modify\n");
    __fpurge(stdin);
    scanf("%[^\n]s", arr1);
    for (int i = 1; i <= count; i++)
    {
        if (strcmp((s4 + i)->name, arr1) == 0)
        {

            printf("What you want to modify\n 1.Name\n 2.PNR ");
            scanf("%d", &ch1);
            switch (ch1)
            {
            case 1:
            {
                printf("Enter the new name\n");
                __fpurge(stdin);
                scanf("%[^\n]s", buffer1);
                int size1 = strlen(buffer1);
                (s4 + i)->name = malloc((size1 + 1) * sizeof(char));
                strcpy((s4 + i)->name, buffer1);
                break;
            }
            case 2:
            {
                printf("Enter the PRN\n");
                scanf("%d", &(s4 + i)->pnr);
                break;
            }
            }
        }
    }
}

void search(STU *s2)
{
    char arr[50];
    printf("ENter the name of the sudent\n");
    __fpurge(stdin);
    scanf("%[^\n]s", arr);
    for (int i = 1; i <= count; i++)
    {
        if (strcmp((s2 + i)->name, arr) == 0)
        {
            printf("Name of the student:-%s\n", (s2 + i)->name);
            printf("PNR  of the student:-%d\n", (s2 + i)->pnr);
        }
    }
}