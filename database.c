
#include "database.h"


student arr[SIZE]= {0};
static int size=0;
static int index=0;

void  GeneralStudentInfo(int index1)
{

    printf("please enter student name: ");
    fflush(stdin);
    StringScanf4(arr[index1].name);
    printf("please enter student ID: ");
    scanf("%i",&(arr[index1].ID));
    printf("please enter student Age: ");
    scanf("%i",&(arr[index1].age));
    printf("please enter student Grade: ");
    scanf(" %c",&(arr[index1].garde));
    fflush(stdin);
    printf("please enter student Phone: ");
    StringScanf4(arr[index1].phone);
}
///==================================================================================================
void AddStudent(student *arr)
{
    if(index>SIZE-1)
    {
        printf("you can not add anymore\n");
    }
    else
    {
        size++;
        printf("\t\t\t\t\t    Add student Info      \n");
        GeneralStudentInfo(index);
        index++;
    }

/// system("cls");
}
///====================================================================================================
void Printfstudent()
{
    int i=ScanAndSearch();
    if(i!=-1)
    {
        printf("\n   name                                  ID             age           grade           phone\n");
        printf("--------------------------------------------------------------------------------------------\n");
        printf(" %-30s          |%-10d     |%-10d     |%c        |%10s\n",arr[i].name,arr[i].ID,arr[i].age,arr[i].garde,arr[i].phone);
        printf("\n---------------------------------------------------------------------------------------------\n");
    }
    else
    {
        printf("This name is not exsist in school\n");
    }
}
///========================================================================================================

void EditStudentInfo()
{
    int i=ScanAndSearch();
    if(i!=-1)
    {
        GeneralStudentInfo(i);
    }
    else
    {
        printf("This name is not exsist in school\n");
    }
}
///=======================================================================================
void studentPrint1(student *s)
{
    printf("name:");
    StringPrint(s->name);
    printf("\nID=%i\n",(s->ID));
    printf("age=%i\n",s->age);
    printf("grade=%c\n",s->garde);
    printf("Phone:");
    StringPrint(s->phone);
    printf("\n-------------------------\n");
}
///======================================================================================
void StudentDatabaseManagementSystem(void)
{
    printf("\n\n\n\t\t\t\t    student database management system\n");
    printf("\t\t\t            ==================================\n");
    int select=0;
    for(; select!=9;)
    {

        printf("\n\n\n\t\t\t\t\t 1.Add student\n");
        printf("\t\t\t\t         2.Edit student Info\n");
        printf("\t\t\t\t         3.Print student Records\n ");
        printf("\t\t\t\t         4.Delete student\n");
        printf("\t\t\t\t         5.Print All students\n");
        printf("\t\t\t\t         6.Print All students SortedByName\n");
        printf("\t\t\t\t         7.Print All students SortedBygrade\n");
        printf("\t\t\t\t         8.Call\n");
        printf("\t\t\t\t         9.Exsit\n");
        printf("\t\t\t\t         -------------------------\n");


        printf("\n\t\t\t\t            please select: ");
        scanf("%i",&select);
        printf("\t\t\t\t             ==============\n");
        switch(select)
        {

        case 1:
        {
            ///system("cls");
            AddStudent(arr);
            select=0;
            system("cls");
            break;
        }
        case 2:
        {
            /// system("cls");
            EditStudentInfo();
            select=0;
            ///system("cls");
            break;
        }
        case 3:
        {
            ///system("cls");
            Printfstudent();
            select=0;
            ///system("cls");
            break;
        }
        case 4:
        {
            ///system("cls");
            DeleteStudentfromDatabase();
            select=0;
            ///system("cls");
            break;
        }

        case 5:
        {
            ///system("cls");
            PrintfDatabaseofSchool();
            select=0;
            ///system("cls");
            break;
        }
        case 6:
        {
            ///system("cls");
            PrintstudentsSortedByName();
            PrintfDatabaseofSchool();
            select=0;
            ///system("cls");
            break;
        }
        case 7:
        {
            ///system("cls");
            PrintstudentsSortedByGrade();
            PrintfDatabaseofSchool();
            select=0;
            ///system("cls");
            break;
        }
        case 8:
        {
            ///system("cls");
            CallStudent();
            select=0;
            ///system("cls");
            break;
        }

        default:
        {
            ///system("cls");
            printf("invalid plz enter correct number\n");
            ///system("cls");
            break;
        }


        }
    }
}
///=========================================================================================================
void PrintfDatabaseofSchool()
{
    printf("    name                                  ID             age            grade          phone\n");
    printf("=================================================================================================\n");
    if(index==0)
    {
        printf("                                        your DataBase is Empty\n");
    }
    else
    {
        for(int i=0; i<size; i++)
        {
            printf(" %-30s         | %-10d     | %-10d     | %c       | %10s\n",arr[i].name,arr[i].ID,arr[i].age,arr[i].garde,arr[i].phone);
            printf("--------------------------------------------------------------------------------------------------\n");
        }
    }
}
///========================================================================================

int  SearchStudent(char *str)
{
    int index=-1;
    for(int i=0; i<size; i++)
    {
        if (StringCompare2(arr[i].name,str)==0)
        {
            index=i;
        }
    }
    return index;
}

///=======================================swap struct=======================================

void SwapStruct(student *x,student *y)
{
    student temp=*x;
    *x=*y;
    *y=temp;
}

///=========================================================================================

void PrintstudentsSortedByName()
{
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(StringCompare2(arr[i].name,arr[j].name)==1)
            {
                SwapStruct(&arr[i],&arr[j]);
            }
        }
    }
}
///====================================================================================
void PrintstudentsSortedByGrade()
{
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i].garde<arr[j].garde)
            {
                SwapStruct(&arr[i],&arr[j]);
            }
        }
    }
}

///=======================================================================================
void DeleteStudentfromDatabase()
{
    int j=ScanAndSearch();
    if(j!=-1)
    {
        for(int i=j; i<size; i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
        index--;
    }
    else
    {
        printf("This name is not exsist in school\n");
    }

}
///=======================================================================================
void CallStudent()
{
    int i=ScanAndSearch();
    if(i!=-1)
    {
        DelayTime();
    }
    else
    {
        printf("This name is not exsist in school\n");
    }
}

///====================================================
void DelayTime()
{
    for(int i=0; i<10; i++)
    {
        printf("-");
        sleep(1);
    }
    printf("- Response Time Out");
}

///====================================================
int ScanAndSearch()
{
    char s[30];
    fflush(stdin);
    printf("plz enter name: ");
    StringScanf4(s);
    int i=SearchStudent(s);
    if(i!=-1)
    {
        return i; ///index of name
    }
    return -1;
}
