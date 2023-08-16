
void ArrayStringprint(char *parr)
{
    for(int i=0; parr[i]; i++)
    {
        printf("%c ",parr[i]);
    }
}


void ArrayCapitalToSmall(char * parr)
{
    for(int i=0; parr[i]; i++)
    {
        if(parr[i]>='A' && parr[i]<='Z')
        {
            parr[i]+= ('a'-'A');///
        }
    }
}

void ArraystringCopy(char *Source,char *Destenation)
{
    for(int i=0; Source[i]; i++)
    {
        Destenation[i]=Source[i];
    }
}
int ArrayCompareStr(char *parr1,char *parr2)
{
    for(int i=0; parr1[i] || parr2[i]; i++)
    {
        if(parr1[i]!=parr2[i])
        {
            return 0;
        }
    }
    return 1;
}
int ArrayStrLenght(char *parr)
{
    int i;
    for(i=0; parr[i]; i++) ///mostafa0
    {

    }
    return i;
}

void ArrayRevString(char *parr)
{
    int j=ArrayStrLenght(parr)-1;///
    for(int i=0; i<=j; i++,j--)
    {
        int temp=parr[i];
        parr[i]=parr[j];
        parr[j]=temp;
    }
}
void ArrayStringLowcase(char *parr)
{
    for(int i=0; parr[i]; i++)
    {
        if(parr[i]>='A' && parr[i]<='Z')
        {
            parr[i]+=('a'-'A');
        }
    }
}

void ArrayStringToggle(char *parr)
{
    for(int i=0; parr[i]; i++)
    {
        if(parr[i]>='A' && parr[i]<='Z')
        {
            parr[i] += ('a'-'A');
        }
        else
        {
            parr[i]+= ('A'-'a');
        }
    }
}

/*=========================================*/
void ArrayStringScanf(char *str,int Maxsize)
{
    int i=0;
    scanf("%c",&str[i]);
    for(; str[i]!='\n' && i<Maxsize-1;)
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i]=0;///null character

}

void ArrayStringRev2(char *str)
{
    int l=ArrayStrLenght(str);
    int j=l-1;
    int i;
    for(i=0; i<=j; i++,j--) ///"mostafa"
    {
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}

void ArrayRevSubString(char *str, int F_index,int L_Index)///"i work as scada engineer in a company "
{
    int i=F_index;
    int j=L_Index;
    for(; i<=j; i++,j--)
    {
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}

int StringToInt(char *str)///"12345"///{'-','1','2','3','4','5',0}==12345
{
    int num=0;
    for(int i=0; str[i]; i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            num= (num*10)+(str[i]-'0');///12345
        }
    }
    return num;
}

int StringToInt2(char *str,int *pnum)///"1,2,3,4,5,6,0"
{
    int num=0;
    for(int i=0; str[i]; i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            num=(num*10)+(str[i]-'0');
        }
        else
        {
            return 0;
        }
    }
    *pnum=num;
    return 1;
}

int IntToString5(int num,char *str)///1345='1'2'3'4'5'null
{
    int flag=0,i, Rem;
    if(num==0)
    {
        str[0]='0';
        str[1]=0;
    }
    if(num<0)
    {
        flag=1;
        num=num*-1;
    }

    for( i=0; num; i++)
    {
        Rem=num%10;
        str[i]=Rem+'0';///['5','4',3,2,1,0]
        num=num/10;
    }
    if(flag==1)
    {
        str[i++]='-';
    }
    str[i]=0;
    ArrayStringRev2(str);
    return i;
}

int IsStringMirror(char *str)
{
    int Len=StringLenght(str);
    int i,j=Len-1;
    for(i=0; i<=j; i++,j--)
    {
        if(str[i]!=str[j])
        {
            return 0;
        }
    }
    return 1;
}

void StringRevWords(char *str)
{
    StringReverse1(str);
    int c=0,Lindex=0,Findex=0;
    for(int i=0; str[i]; i++) ///zefah demha mostafa
    {
        if(str[i]==' ')
        {
            c=0;
            ArrayRevSubString(str,Findex,Lindex);
        }
        else
        {
            c++;///7
            Lindex=i;///18
            Findex=Lindex-c+1;///12
        }

    }
    ArrayRevSubString(str,Findex,Lindex);
}

void FloatToString(float num,char *str)
{
    int pre=100,frac;
    int x=num;///extract int part;5
    float Afterpoint=num-x;///5.5-5///0.5
    frac=Afterpoint*pre;///500
    int i=IntToString5(x,str);
    str[i]='.';
    IntToString5(frac,str);

}

int Fun(int num)
{
    static int max;
    static flag=0;
    static c=0;
    c++;
    if(flag==0)
    {
        flag=1;
        max=num;
    }
    if(num>max)
    {
        max=num;
    }
    return max;
}

int * ArrayMerge(int *arr1, int s1,int *arr2,int s2,int *newsize)///1,2,3,4,5   ////6,7,8,9,10
{
    int i,j=0;
    int size=s1+s2;
    int *newarr=(int *)malloc(size * sizeof(int));
    if(newarr==0)
    {
        *newsize=0;
        return ;
    }
    for(i=0; i<size; i++) ///new array
    {
        if(i%2==0)
        {
            newarr[i]=arr1[j];
        }
        else
        {
            newarr[i]=arr2[j];
            j++;
        }
    }
    *newsize=size;
    return newarr;
}

/*===================================================================*/

int * ArrayMerge2(int *arr1, int s1,int *arr2,int s2,int *newsize)///1,2,3,4,5   ////6,7,8,9,10
{
    int i,j=0;
    int size=s1+s2;
    int *newarr=(int *)malloc(size * sizeof(int));
    if(newarr==0)
    {
        *newsize=0;
        return ;
    }
    for(i=0; i<size; i=i+2) ///new array
    {
        newarr[i]  =arr1[j];
        newarr[i+1]=arr2[j];
        j++;
    }
    *newsize=size;
    return newarr;
}

/*=========================================================================*/
int * ArrayMerge3(int *arr1, int s1,int *arr2,int s2,int *newsize)///1,2,3,4,5   ////6,7,8,9,10
{
    int i,j=0;///5,7
    int size2=s1+s2;///12
    int sizesmall=s1<s2?s1:s2;///10
    int size=2*sizesmall;
    int *arr=s1>s2?arr1:arr2;
    int *newarr=malloc(size2*sizeof(int));

    for(i=0; i<size; i=i+2)
    {
        newarr[i]=arr1[j];
        newarr[i+1]=arr2[j];
        j++;
    }
    for(; i<size2; i++)
    {
        newarr[i]=arr[j];
        j++;
    }
    *newsize=size2;
    return newarr;
}

///*=========================================================================*/

int * ArraywithoutRepeatedData(int *arr,int size,int *NewSize)
{
    int i,j=0,flag=1;
    int *arrnew=malloc(size*sizeof(int));///{1,2,3,4,5,30,40,1,2,3,4};
    if(arrnew==0)
    {
        *NewSize=0;
        return;
    }
    for(i=0; i<size; i++)
    {
        flag=1;
        for(int k=0; k<i; k++)
        {
            if(arr[i]==arr[k])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            arrnew[j]=arr[i];
            j++;
        }
    }

    *NewSize=j;
    arrnew=realloc(arrnew,j*4);
    return arrnew;

}
