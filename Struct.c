
#include "struct.h"
#include "string2test.h"

void StructGeneral(void)
{
    struct student s1= {"Hafez",54,'B'},s2,s3= {"mostafa",27,'c'};
    printf("%i\n",s1.age);
    StringPrint(s1.name);
    printf("\n%c",s1.grade);
    s1.name[0]='M';
    s1.name[1]='O';
    printf("%c",s1.name[0]);
    s2=s3;
    printf("%i\n",s2.age);
    printf("%c",s2.grade);
    StringPrint(s2.name);
    printf("%i\n",sizeof(s1));
    printf("%i\n",&s1);
    printf("%i\n",s1.name);
    printf("\n=========array of struct===================\n");
}
///==========================================================
void ArrayOfStruct(void )
{
    struct student s1= {"mostafa",23,'c'};
    struct student arr[20]= {{"ahmed",25,'c'},{"mohaned",27,'d'}};
    StructstudentPrint(arr[0]);///Pass by value
    StructstudentPrint(arr[1]);
    arr[0].age=30;
    StructstudentPrint(arr[0]);
    arr[3]=s1;
    arr[4]=arr[0];
    StructstudentPrint(arr[4]);
    StructStudentbyRef(&s1);
}
///===================================================
void StructstudentPrint( struct student s)
{
    StringPrint(s.name);
    printf("\n%i\n",s.age);
    printf("%c",s.grade);
    printf("\n--------------------------------\n");
}
///=====================================================
void StringScanf4(char * str)
{
    int i=0;
    scanf("%c",&str[i]);
    for(;str[i]!='\n';)
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i]=0;
}
///=====================================================

void StructStudentbyRef1(struct student *s)
{
    StringPrint((*s).name);
    printf("\n%i\n",(*s).age);
    printf("%c",(*s).grade);
    printf("\n--------------------------------\n");
}
///======================================================
void StructStudentbyRef(struct student *s)
{
    StringPrint(s->name);
    printf("\n%i\n",s->age);
    printf("%c",s->grade);
    printf("\n--------------------------------\n");
}
///========================================================
void PrintArrayOfStruct(const struct student *arr,int size)
{
    for(int i=0; i<size; i++)
    {
        StructStudentbyRef(&arr[i]);
        ///StructstudentPrint(arr[i]);
    }
}
///==========================================================
void PrintArrayOfStruct1( const struct  student *arr,int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%10s   %3i  %c",arr[i].name,arr[i].age,arr[i].grade);
    }
}

///==============================================================
void PrintArrayOfStruct2(const struct student *arr,int size)
{
    printf(" name    age    grade\n");
    for(int i=0; i<size ; i++)
    {
        printf("%10s %3d  %c\n",(arr+i)->name,(arr+i)->age,(arr+i)->grade);
    }
}
///===============================================================

void ScanfStructStudent(struct student *s)
{
    printf("please enter your name:\n");
    StringScanf4(s->name);
    printf("please enter your age:\n");
    scanf("%i",&(s->age));
    printf("please enter your grade:\n");
    scanf(" %c",&(s->grade));
    printf("\n--------------------------------\n");
}


///==============================================================
struct student ScanfStruct(void)
{
    struct student s;
    printf("plz enter your name\n");
    StringScanf4(s.name);
    ///scanf("%s",s.name);
    printf("please enter your age:\n");
    scanf("%i",&(s.age));
    printf("please enter your grade:\n");
    scanf(" %c",&(s.grade));
    printf("\n--------------------------------\n");
    return s;
}

///=============================================================
int StructFindMax(struct student *arr,int size)
{
    int max=arr[0].age;
    int index=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i].age > max)
        {
            max=arr[i].age;
            index=i;
        }
    }
    return index;

}
///=========================================================
void StructStudentSwap(struct student *x, struct student *y)
{
    struct student temp=*x;
    *x=*y;
    *y=temp;
}
///=========================================================
void StructStudentSortAge(struct student *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i].age > arr[j].age)
            {
                StructStudentSwap(&arr[i],&arr[j]);
            }
        }
    }
}
///===========================================================
void StructstudentSortName(struct student *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(StringCompare2(arr[i].name,arr[j].name)==1)
            {
                StructStudentSwap(&arr[i],&arr[j]);
            }
        }
    }
}

///=============================struct inside struct===========================//

void StructTipsWithPointers(void)
{
  typedef struct
{
    char c1;
    char c2;
    char c3;
    char c4;
}Str;
  char arr[4]={0};
  int *ptr=arr;
  *ptr=67305985;///0x04030201
   printf("%i %i %i %i\n",arr[0],arr[1],arr[2],arr[3]);
   Str s,s2={1,2,3,4};
   int x=300;
   Str *p=&x;
   ///(*p)=1000 ; cant assign int into struct must be struct
   ///(*p)=s2   ok
   (*p).c1=10;
    p->c2=20;
    Str s1;
    int *p2=&s1;
    *p2=10;
    printf("%i %i %i %i\n",s1.c1,s1.c2,s1.c3,s1.c4);
    ///================================================
    int z,y;
    Str*p3,*p4;
    int *p5=&z;
    p3=&z;///compilier will consider x as struct
    p4=&y;
    *p5=200;///ok
    ///p3 contain &z && p5 ==&z /// but p3 pointer to struct , p5 pointer to int)
    p3->c1=300;///write 44 in c1 one character not write in c2 1
    p3->c2=200;
    *p4=*p3;///asign struct in strcuct


}
