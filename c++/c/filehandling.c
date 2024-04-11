#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>

typedef struct hospital_Portal
{
    char session_Id[50];
    char recep_name[100];
    char patient_name[100];
    int age;
    char address[200];
    union govt_Id
    {
        int adhaar;
        int pan;
        int pass_number;
    } govt_Id;
} hospital;

// All Functions Declaration

void add_Node(hospital *); // Input function Declaration
void show_All();           // Display Function Declaration
int search(hospital *);    // Search Function Declaration

int main()
{
    hospital recep, *ptr;
    ptr = &recep;
    int choice;
    while (1)
    {
        printf("\n------------------------> Select Any Choice <-------------------- \n1->Add Patient Details\t2->Show All Patient Details \t3->Search Patient Details \t4->Exit : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add_Node(ptr);
            break;
        case 2:
            show_All();
            break;
        case 3:
            if (search(ptr))
            {
                printf("Session Id Found\n");
            }
            else
            {
                printf("Session Id not exist\n");
            }
            break;
        case 4:
            return 0;
        default:
            printf("Please Enter a Valid choice\n");
        }
    }
}
//    Defination of Input data function Function

void add_Node(hospital *ptr)
{
    FILE *fp; // declare file pointer
    int choice;

    printf("\n-------------------> Enter Patient Details <-----------------------\n");

    // Open file sessionID,txt in write mode
    fp = fopen("SessionID.txt", "w");
    if (fp == NULL)
    {
        printf("File is not open seccessfully:\n");
        exit(0);
    }
    __fpurge(stdin);
    printf("Enter the Session Id [abc123] : ");
    scanf("%50[^\n]s", ptr->session_Id);
    fprintf(fp, "Session Id : %s\n", ptr->session_Id);

    __fpurge(stdin);
    printf("Enter Receptionist Name : ");
    scanf("%100[^\n]s", ptr->recep_name);
    fprintf(fp, "Recep Name : %s\n", ptr->recep_name);

    __fpurge(stdin);
    printf("Enter Patient Name : ");
    scanf("%100[^\n]s", ptr->patient_name);
    fprintf(fp, "Patient Name : %s\n", ptr->patient_name);

    __fpurge(stdin);
    printf("Enter Patient Age : ");
    scanf("%d", &ptr->age);
    fprintf(fp, "Patient Age : %d\n", ptr->age);

    __fpurge(stdin);
    printf("Patient Address : ");
    scanf("%200[^\n]s", ptr->address);
    fprintf(fp, "Patient Address : %s\n", ptr->address);

    while (1)
    {
        // Ask user to select any one govt. id
        printf("Select Any Govt. ID : 1->Adhaar Card 2->PAN Card 3->Passport : ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 3)
        {
            switch (choice)
            {
            case 1:
                printf("Enter Adhaar Number : ");
                scanf("%d", &ptr->govt_Id.adhaar);
                fprintf(fp, "Govt ID Number : %d\n", ptr->govt_Id.adhaar);
                break;
            case 2:
                printf("Enter PAN Number : ");
                scanf("%d", &ptr->govt_Id.pan);
                fprintf(fp, "Govt ID Number : %d\n", ptr->govt_Id.pan);
                break;
            case 3:
                printf("Enter Passport Number : ");
                scanf("%d", &ptr->govt_Id.pass_number);
                fprintf(fp, "Govt ID Number : %d\n", ptr->govt_Id.pass_number);
                break;
            }
            break;
        }
        else
        {
            printf("Please Select Valid Govt. ID\n");
        }
    }
    // Close file sessionID.txt
    fclose(fp);
}
//    Defination of Show All Function

void show_All()
{
    FILE *fp;
    int ch;
    // open file sesssionID.txt
    fp = fopen("SessionID.txt", "r");
    if (fp == NULL)
    {
        printf("File not open Successfully\n");
        exit(0);
    }

    printf("-------------------> Patient Details <-----------------------\n");

    // extracting information from file char by char and print on console
    while ((ch = getc(fp)) != EOF)
    {

        if (ch == '\n')
        {
            printf("\n");
        }
        else
        {
            printf("%c", ch);
        }
    }
    printf("\n");

    // Close file
    fclose(fp);
}

int search(hospital *ptr)
{
    FILE *fp;
    int ch;
    char search_Id[10];

    __fpurge(stdin);
    printf("Enter the Session Id which you want to search : ");
    scanf("%10[^\n]s", search_Id);

    fp = fopen("SessionID.txt", "r");
    if (fp == NULL)
    {
        printf("File not open Successfully\n");
        exit(0);
    }
    int n = fseek(fp, 13, SEEK_SET);

    int len = strlen(search_Id);
    for (int i = 0; i < len; i++)
    {
        while ((ch = fgetc(fp)) != '\n')
        {
            if (ch != search_Id[i])
            {
                return 0;
            }
        }
    }
    return 1;
}