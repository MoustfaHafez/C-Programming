void SwapPointers2(char **ptr1,char **ptr2)
{
    char *temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}

void PrintString(char *str)
{
    int i=0;
    for(i=0; str[i]; i++)
    {
        printf("%c",str[i]);
    }
}

void PrintfArrayOfPointersToChar(char **arr,int size)
{
    ///SwapPointers2(&arr[0],&arr[1]);
    for(int i=0; i<size; i++)
    {
        PrintString(arr[i]);
        printf("\n");
    }
}

int compareString(char *str1,char *str2)
{
    for(int i=0; str1[i] || str2[i]; i++)
    {
        if(str1[i] >str2[i])
        {
            return 1;
        }
        else if(str1[i] >str2[i])
        {
            return -1;
        }
    }
    return 0;
}

void Swaps(int *ptr1,int *ptr2)
{
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}

int SearchInArrayofPointersTochar(char **arr,int size,char *str)
{
    for(int i=0; i<size; i++)
    {
        if( compareString(arr[i],str)==0 )
        {
            return i;
        }
    }
    return -1;

}

void StringSortedInArrayBubleSort(char **arr,int size)
{
    int i=0,j=0;
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(compareString(arr[i],arr[j])==1)
            {
                SwapPointers(&arr[i],&arr[j]);
            }
        }
    }
}

void ScanString(char *str)
{
    int i=0;
    scanf("%c",&str[0]);
    for(; str[i]!='\n';)
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i]=0;

}

void StringPrintf(char *str)
{
    for(int i=0; str[i]; i++)
    {
        printf("%c",str[i]);
    }
}

int StringLen(char *str)
{
    int i=0;
    for(i=0; str[i]; i++)
    {

    }
    return i;
}

/* tricy code in c
 char s[20] = "Hello\0Hi";
   printf("%d %d", strlen(s), sizeof(s));

   ///
   char  str[ ] = "hello";
printf( "%d" , str[5]);

///
int x=0;
for(int i=0;i<5;i+1)
{
   x += i+5;
}
printf("%d",x);


     printf("%d",strcmp("strcmp()","strcmp()"));



*/

