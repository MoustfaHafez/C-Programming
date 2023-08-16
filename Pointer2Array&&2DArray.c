
static int arr[2][2]={{1,2},{3,4}};

void Array2D_Printf(int (*arr)[9],int R,int C)
{
    int i=0,j=0;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
}
///===============================================
void Array2D_Scan(int arr[][3],int R,int C)
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            scanf("%i",&arr[i][j]);
        }
    }
}

///================================================
void Array2D_Printf2(int*arr,int R,int C)
{
    int i=0,j=0;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%3d",arr[i*5+j]);
        }
        printf("\n");
    }
}
///=================================================
void Array2D_Addition(int (*arr)[3],int (*arr1)[3],int *(arr2)[3],int R,int C)
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            arr[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
}
///======================================================
int Array2D_IS_Equal(int (*arr1)[3],int (*arr2)[3],int R,int C)
{

    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(arr1[i][j]!=arr2[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}
///=====================================================
int Array2D_SumOfMainDaional(int (*arr)[3],int R,int C)
{
    int sum=0;
    for(int i=0;i<R;i++)
    {
       for(int j=0;j<C;j++)
       {
           if(i==j)
           {
               sum=sum+arr[i][j];
               break;
           }
       }
    }
    return sum;
}
///============================================================
void Array2D_SumOEachRowAndColum(int (*arr)[3],int *arr1,int *arr2,int R,int c)
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<c;j++)
        {
           arr1[i]=arr1[i]+arr[i][j];///sum each Row
        }
        for(int j=0;j<c;j++)
        {
           arr2[j]=arr2[j]+arr[i][j];///sum each Colum
        }
    }
}
///============================================================

int Array2D_SumOfUpperTringle(int (*arr)[3],int R,int c)
{
    int sum=0;
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<c;j++)
        {
            if( i>j)
            {
               sum+=arr[i][j];
            }
        }
    }


    return sum;///upper matrix
}
///==================================================
int Array2D_CheckDiagonals(int (*arr)[3],int R,int c)
{
    int D1=0,D2=0;
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                D1+=arr[i][j];
            }
            if(i+j==c-1)
            {
                D2+=arr[i][j];
            }
        }
    }
    if(D1==D2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void Array2D_PrintfZigzag(int (*arr)[3],int R,int c)
{
    for(int i=0;i<R;i++)
    {
        ArrayPrintf(arr[i],c);
        printf(">>");
    }
}
///======================================================
void ArrayStarPrint(char (*arr)[5],int R,int c)
{

    for(int i=0;i<R;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
    printf("=================================\n");
}
///========================================================
void ArraySetStar(char (*arr)[5],int R,int c,int x,int y)
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<c;j++)
        {
            if( (i>x) && (j==y))
            {
                arr[i][j]='^';
            }
            else if ((i<x) && (j==y))
            {
                 arr[i][j]='v';
            }
             else if ((i==x) && (j<y))
            {
                 arr[i][j]='>';
            }
             else if ((i==x) && (j>y))
            {
                 arr[i][j]='<';
            }
            else
            {
                arr[i][j]='0';
            }

        }
    }
    arr[x][y]='*';
}

void Array2D_SetNum( const int (*arr)[9],int x,int y)
{
   // arr[x][y]=10;
    printf("\n=================================");
}


