#include <Windows.h>

void Sodoko_Printf(int (*arr)[9]);
void Sodoko_Write(int (*arr)[9],int x,int y,int num);
int  Sodoko_CheckRow(int (*arr)[9],int x,int num);
int  Sodoko_CheckColum(int (*arr)[9],int y,int num);
int  Sodoko_CheckNum(int (*arr)[9],int num);
int  Sodoko_CheckPosition(int (*arr1)[9],int x,int y);
int  Sodoko_CheckIfArrayComplete(int (*arr)[9],int R);
void SodokoSolve(void);
