
void SodokoArray2D_Printf(int (*arr)[9])
{
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            printf("%3d",arr[i][j]);

            if((j+1)%3==0)
            {
                printf("|");
            }
        }
        printf("\n");
        if((i+1)%3==0)
        {
            printf("------------------------------\n");
        }

    }
    printf("\n===========================\n");
}

///===============================================
int SodokoCheckRow1(int (*arr)[9],int R,int num)
{
    for(int i=1; i<=9; i++)
    {
        if(arr[R-1][i]==num)
        {
            return 1;
        }
    }
    return 0;
}
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
        for(int k=1;k<=9;k++)
        {
            CountRow[k]=0;
        }
    }
    return 1;


}

void SodokoCheckColum(int (*arr)[9])
{
    int CountCol[10]={0};
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            CountCol[arr[j][i]]++;
        }
        for(int k=1;k<=9;k++)
        {
            if(CountCol[k]!=1)
            {
                 printf("your number is not unique at this colum =%i\n",k);
                 return 0;
            }
        }
        for(int k=1;k<=9;k++)
        {
           CountCol[k]=0;
        }
    }
    return 1;

}
///============================================
int SodokoCheckColum1(int (*arr)[9],int c,int num)
{
    for(int i=0; i<9; i++)
    {
        if(arr[i][c-1]==num)
        {
            return 1;/// your number is exisit
        }
    }
    return 0;/// not exsit
}

void SodoKo_IsAvailablePosition(int (*arr)[9][9],int x, int y,int num)
{
    if(arr[x][y]!=0)
    {
        printf("This position is not avaialbe");
        return 0;
    }
    else
    {

    }
    return 1;
}
 ///scanf num from user in specific position (num , x,y);
 /// check if tis place is available to write on it or not
 /// if not available (u can't write in this place )
 ///printf(array again);
 /// if number is repeated (wrong answer your number is not unique)



