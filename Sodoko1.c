
#include <Windows.h>

///============================================
int SodokoCheckRow(int (*arr)[9])
{
    int k;
    int CountRow[10]= {0};
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            CountRow[arr[i][j]]++;
        }
        for(int k=1; k<=9; k++)
        {
            if( CountRow[k]!=1)
            {
                printf("your number is not unique at this Row =%i\n",k);
                return 0;
            }
        }
        for(int k=1; k<=9; k++)
        {
            CountRow[k]=0;
        }
    }
    return 1;


}

void SodokoCheckColum(int (*arr)[9])
{
    int CountCol[10]= {0};
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            CountCol[arr[j][i]]++;
        }
        for(int k=1; k<=9; k++)
        {
            if(CountCol[k]!=1)
            {
                printf("your number is not unique at this colum =%i\n",k);
                return 0;
            }
        }
        for(int k=1; k<=9; k++)
        {
            CountCol[k]=0;
        }
    }
    return 1;

}

void setColor(int ForgC)
{

    //We will need this handle to get the current background attribute
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

    //we use csbi for the wAttributes word.
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute
        //, and add in the foreground color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

///===========================================
///scanf num from user in specific position ( x,y);
///scanf num from user in num from 1:9 (num)
///check if this place is available to write on (don't write in specific position)
///if available(printf array again);
///if not available (u can't write in this place)
///check if this num is correct or not(do not repeated num in Row Or Colum)
/// if not correct printf wrong answer
///printf(array again);
///
///=========================================================
void Sodoko_Printf(int (*arr)[9])
{
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            setColor(3);
            printf("%3d",arr[i][j]);
            setColor(7);
            if((j+1)%3==0)
            {
                printf("|");
            }
        }
        printf("\n");
        if((i+1)%3==0)
        {
            printf("-----------------------------\n");
        }
    }
}
///========================================================
void Sodoko_Write(int (*arr)[9],int x,int y,int num)
{
    arr[x-1][y-1]=num;
}
///=========================================================
int  Sodoko_CheckRow(int (*arr)[9],int x,int num)
{
    for(int i=0; i<9; i++)
    {
        if(arr[x-1][i]==num)
        {
            return 1;/// your num is exsist
        }
    }
    return 0;/// your num is not exsist
}
///==========================================================
int Sodoko_CheckColum(int (*arr)[9],int y,int num)
{
    for(int i=0; i<9; i++)
    {
        if(arr[i][y-1]==num)
        {
            return 1;/// your number is exsist
        }
    }
    return 0;///your number is not exsist
}
///===========================================================

int  Sodoko_CheckNum(int (*arr)[9],int num)
{
    return num>9 ?1:0;
}
///=============================================================

int  Sodoko_CheckPosition(int (*arr1)[9],int x,int y)
{
    if(arr1[x-1][y-1]==0)
    {
        return 0;/// valid position
    }
    return 1;/// invalid Position
}
///=============================================================
int Sodoko_CheckIfArrayComplete(int (*arr)[9])
{
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            if(arr[i][j]==0)
            {
                return 1;/// complete your array not full
            }
        }
    }
    return 0;/// congratulate your arr if full
}

///==============================================================


