// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i;
int choice;
struct student
{
    char name[50];
    int roll_no;
    int age;

    union
    {
        int aadhar;
        int voter;
        int pan;
    } id;
} stu;

// function declare+++++++++++++++++++
void print(stu arr[]);
void search(stu arr1[]);
void dispaly(stu arr1[]);
// enter your choice by switch case+++++++++++++
int main()
{
    stu arr[3];
    printf("Welcome to registeration portal\n");
    while (1)
    {
        int choice;
        printf("enter the number of student:");
        printf("Enter your choice:1->print\n ,2->search \n,3-> display\n");
        scanf("%d\n", &choice);
        switch (choice)
        {
        case 1:
            printf(arr[]);
            break;

        case 2:
            search(arr[]);
            break;

        case 3:
            dispaly(arr[]);
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Enter invalid inputs:");
            break;
        }
        // function defination
        void print(stu arr[])
        {

            printf("Enter your data\n :");
            // enter the data of student
            printf("Enter the name of student:");
            scanf("%s", &arr[i].name);

            printf("Enter the rollno of student:");
            scanf("%s", &arr[i].roll_no);

            printf("Enter the age of student:");
            scanf("%s", &arr[i].age);
            // enter the id card which is a basiaclly union member

            int id_choose;
            printf("Enter your choice:1->aadhar\n ,2->voter \n,3-> pan\n");
            scanf("%d\n", &id_choose);
            switch (id_choose)
            {
            case 1:
                printf("Enter the aadhar of student:");
                scanf("%s", &arr[i].id.aadhar);
                break;

            case 2:
                printf("Enter the voter of student:");
                scanf("%s", &arr[i].id.voter);
                break;

            case 3:
                printf("Enter the pan of student:");
                scanf("%s", &arr[i].id.pan);
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("Enter invalid id inputs:");
                break;
            }
        }
        // define the search operation by using flag variable
        void search(stu arr1[]);
        printf("enter the roll number you want to search:");
        int temp, flag = 0;
        scanf("%d\n", &temp);
        for (int j = 0; j <= i; j++)
        {
            if (temp == arr[j].roll_no)
            {
                printf("Your are exits");
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("Not found Try again");
        }
    }

    void display(stu arr1[]);
    for (int k = 0; k <= i; k++)
    {
        printf("Name is:\n", arr[k].name);
        printf("Roll no is:\n", arr[k].roll_no);
        printf("age is:\n", arr[k].age);
        // print govt id
        printf("Govt id is:\n", arr[k].id.aadhar);
        // printf("Govt id is:\n",arr[k].id.voter);
        // printf("Govt id is:\n",arr[k].id.pan);
    }
}
}
}