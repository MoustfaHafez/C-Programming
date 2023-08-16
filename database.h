
#ifndef database_h
#define database_h
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include  <dos.h>

#define SIZE 100
typedef struct
{
    int ID;
    int age ;
    char name[30];
    char garde;
    char phone[11];

} student;

///array of struct[1000]///name age grade phone and struct conten subject (math,arabic,scienece )
///student base management system [ 1 add student , 2 student Records ,3 Search Student,4 delete student,5 Exsit]
///if user select 1 (==add student info==== then enter  name, Record stored successfuly )
/// 2 edit student ->>>>>> select student by name or ID (search by name or id)
///3 printf student ->>>>>>>by name (search by name or ID then print)
///4 printf school data (array of struct )
///6 call select student (search ) then call ------------after 3 s no answer
///function search max degree in one scan cycle
void StudentAdd();
void StudentSearchByName(void);
void StudentSearchByID(void);
void StudentPrintByName(void);
void StudentPrintByID(void);
void StudentDatabaseManagementSystem(void);
void StringPrint(char  *str);
void StringScanf4(char *str);
void studentPrint(student*s);
void AddStudent(student *s);
void PrintfDatabaseofSchool();
void studentPrinttest(student *s);
void Printfstudent();
void Printfstudent2(student *arr);
int  StringCompare(char *str1,char *str2);

int  SearchStudent(char *str);
void GeneralStudentInfo();
void PrintstudentsSortedByName();
void PrintstudentsSortedByGrade();
void DeleteStudentfromDatabase();

int ScanAndSearch();
void CallStudent();

#endif
