#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
int count;
char *str_arr[3] = {"voter", "adhar", "pan"};

struct employ
{
    int salary;
    int year;
    union identity
    {
        int voter;
        int adhar;
        int pan;
    } id;

    int id_choice;
};
void input(struct employ *);
void display_all(struct employ *);
void update(struct employ *);
void search(struct employ *);
int main()
{

    struct employ emp[10];
    int choice;
    while (1)
    {
        printf("enter 1:input employ data:\n");
        printf("display all employ data\n");
        printf("update employ details\n");
        printf("search and display all data of employ\n");

        printf("enter choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            input(emp);
            break;
        case 2:
            display_all(emp);
            break;
        case 3:
            update(emp);
            break;
        case 4:
            search(emp);
            break;
        case 5:
            return -1;
            break;
        default:
            printf("invalid input:\n");
            break;
        }
        return 0;
    }
}

void input(struct employ *sarr)
{
    int ch;
    printf("enter details of employ id");
    printf("enter salary:");
    scanf("%d", &sarr[count].salary);
    printf("enter year of joining:");
    scanf("%d", &sarr[count].year);

    printf("enter govt id...0: voter\t, adhar\t, pan\n");
    scanf("%d", &sarr[count].id_choice);
    switch (sarr[count].id_choice)
    {
    case 1:
        printf("enter the voter card no");
        scanf("%d", &sarr[count].id.voter);
        break;
    case 2:
        printf("enter the adhar card no");
        scanf("%d", &sarr[count].id.adhar);
        break;
    case 3:
        printf("enter the pan card no");
        scanf("%d", &sarr[count].id.pan);
        break;
    default:
        printf("\n invalid input");
        break;
    }

    count++;
}
void display_all(struct employ *sarr)
{
    int id_choice;
    for (int i = 0; i < 10; i++)
    {
        printf("details of employ:\n");
        printf("salary:%d\n", sarr[i].salary);
        printf("year of joining:%d\n", sarr[i].year);

        printf("enter govt id:%s number %d\n", str_arr[sarr[i].id_choice]);
    }
}

void update(struct employ *sarr)
{
    int id_update;
    printf("Enter the employee ID to update: ");
    scanf("%d", &id_update);

    for (int i = 0; i < count; i++)
    {
        if (i == id_update)
        {
            printf("Enter new details for employee %d:\n", i);
            printf("Enter new salary: ");
            scanf("%d", &sarr[i].salary);
            printf("Enter new year of joining: ");
            scanf("%d", &sarr[i].year);
            printf("Enter govt id (0: voter, 1: adhar, 2: pan): ");
            scanf("%d", &sarr[i].id_choice);

            switch (sarr[i].id_choice)
            {
            case 0:
                printf("Enter the new voter card no: ");
                scanf("%d", &sarr[i].id.voter);
                break;
            case 1:
                printf("Enter the new adhar card no: ");
                scanf("%d", &sarr[i].id.adhar);
                break;
            case 2:
                printf("Enter the new pan card no: ");
                scanf("%d", &sarr[i].id.pan);
                break;
            default:
                printf("Invalid choice\n");
            }
            printf("Employee details updated successfully.\n");
            return;
        }
    }
    printf("Employee ID not found.\n");
}

void search(struct employ *sarr)
{
    int search_id;
    printf("Enter the employee ID to search: ");
    scanf("%d", &search_id);

    for (int i = 0; i < count; i++)
    {
        if (i == search_id)
        {
            printf("Employee %d details:\n", i);
            printf("Salary: %d\n", sarr[i].salary);
            printf("Year of joining: %d\n", sarr[i].year);
            printf("Government ID: %s\n", str_arr[sarr[i].id_choice]);
            switch (sarr[i].id_choice)
            {
            case 0:
                printf("Voter ID: %d\n", sarr[i].id.voter);
                break;
            case 1:
                printf("Adhar ID: %d\n", sarr[i].id.adhar);
                break;
            case 2:
                printf("PAN ID: %d\n", sarr[i].id.pan);
                break;
            default:
                printf("Invalid choice\n");
            }
            return;
        }
    }
    printf("Employee ID not found.\n");
}