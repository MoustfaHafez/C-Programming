
void SwapPointers(char **ptr1,char **ptr2)
{
    char *temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}

void PrintArrayOfPointersToChar(char **arr,int size)
{
   /// SwapPointers(&arr[2],&arr[3]);
    int i=0,j=0;
    for(i=0;i<size;i++)
    {
       StringPrint2(arr[i]);
       printf("\n");
    }
}

void PrintArrayOfPointersToChar2(char **arr,int size)
{

    int i=0,j=0;
    for(i=0;i<size;i++)
    {
        for(j=0;arr[i][j];j++)
        {
            printf("%c",arr[i][j]);
        }
    }
}

void StringPrint2(char *str)
{
    for(int i=0;str[i];i++)
    {
        printf("%c",str[i]);
    }
}

int  StringCompare2(char *str1,char *str2)
{
    for(int i=0;str1[i]||str2[i];i++)
    {
        if(str1[i]>str2[i])
        {
            return 1;
        }
        else if(str1[i]<str2[i])
        {
             return -1;
        }
    }
    return 0;
}

int  ArrayofPointersSearch(char **arr,int size,char *Str)
{
    for(int i=0;i<size;i++)
    {
        if (StringCompare2(arr[i],Str)==0)
        {
            return i;
        }
    }
    return -1;
}

void Swap2(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void ArrayBubbleSort3(int **arr,int size)
{
    int i=0,j=0;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(StringCompare2(arr[i],arr[j])==1)
            {
               Swap2(&arr[i],&arr[j]);
            }
        }
    }
}



