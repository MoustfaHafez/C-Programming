

#ifndef struct_h
#define struct_h
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    int phone[11];
    int age;

} Person;
///=================================
struct student
{
    char name[20];
    int age;
    char grade;
    struct student *p;
};




void StructGeneral(void);
void StructstudentPrint( struct student s);
void ArrayOfStruct(void );
void StructStudentbyRef1(struct student *s);
void StructStudentbyRef(struct student *s);
void PrintArrayOfStruct(const struct student *arr,int size);
void PrintArrayOfStruct1(const struct student *arr,int size);
void PrintArrayOfStruct2(const struct student *arr,int size);
void ScanfStructStudent(struct student *s);
struct student ScanfStruct(void);
void StringScanf4(char * str);
int StructFindMax(struct student *arr,int size);
void StructStudentSort(struct student *arr,int size);
void StructStudentSwap(struct student *x, struct student *y);
int  StringCompare2(char *str1,char *str2);///-1
void StructstudentSortName(struct student *arr,int size);
void StructTipsWithPointers(void);
#endif
