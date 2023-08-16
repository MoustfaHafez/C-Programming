

///find max of four number

int MaxNum(int a,int b,int c,int d)
{
    int arr[4]= {a,b,c,d};
    int max=arr[0];
    for(int i=0; i<4; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int MaxNum02(int a,int b,int c,int d)
{
    int max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    if(d>max)
    {
        max=d;
    }
    return max;
}

///Complete the function void update(int *a,int *b).
///It receives two integer pointers, int* a and int* b.
///Set the value of  to their sum, and  to their absolute difference.
///There is no return value, and no return statement is needed.

int update(int *a,int *b)
{
    int sum=*a+*b;
    int max=*a>*b ? *a: *b;
    int min=*a<*b ? *a: *b;
    *a=sum;
    *b=max-min;
}

///**** take num from user then print sum of this digits

int SumOfDigitsofNum(int n)
{
    int Rem,sum=0;
    for(; n>0;)
    {
        Rem=n%10;
        sum+=Rem;
        n=n/10;
    }
    return sum;
}
///if gender=='b' sum of even number in arr else if ==='g' sum of odd number
int marks_summation(int* arr, int size, char gender)
{
    int sum=0;
    if(gender=='b')
    {
        for(int i=0; i<size; i=i+2)
        {
            sum+=arr[i];
        }
    }
    else if (gender=='g')
    {
        for(int i=1; i<size; i=i+2)
        {
            sum+=arr[i];
        }
    }
    return sum;
}

///********************************************

int ArrayLastindex(int *arr,int size,int num)
{
    int index=-1;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==num)
        {
            index=i;
        }
    }
    return index;
}

///********************************************
int VarrayLongestConsecutive(int *arr,int size,int num)///{1,2,2,2,3,3,3,3,4,5,6,4,3,3,3,3,3};
{
    int max=0,c=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==num)
        {
            c++;
            if(c>max)
            {
                max=c;
            }
        }
        else
        {
            c=0;
        }
    }
    return max;
}

///*********************************************

int FunControl(int temp)
{
    static LastStatus=0;
    if(temp>=50)
    {
        LastStatus=1;
    }
    else if(temp<=30)
    {
        LastStatus=0;
    }
    return LastStatus;
}

int Iseven(int n)
{
    if(n%2==0)
    {
        return 1;/// even
    }
    else
    {
        return 0;
    }
}

int VarrSum(int *arr,int size)
{
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int NoOnes(int n)
{
    int c=0;
    for(int i=31; i>=0; i--)
    {
        if((n>>i)&1)
        {
            c++;
        }
    }
    return c;
}

int HighestOrder(int n)
{
    int order;
    for(int i=31; i>=0; i--)
    {
        if((n>>i)&1)
        {
            order=i;
            break;
        }
    }
    return order;
}

void VArrRev(int *arr,int size)
{
    int j=size-1;
    for(int i=0; i<=j; i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
///************************************
unsigned int TimeRequiredForHeating(unsigned int temp)
{
    int Time;
    if (temp>100)
    {
        Time=0;
    }
    else
    {
        if(temp>=0 && temp<=30)
        {
            Time=7;
        }
        else if (temp>30 && temp<=60)
        {
            Time=5;
        }
        else if (temp>60 && temp<=90)
        {
            Time=3;
        }
        else if (temp>90 )
        {
            Time=1;
        }
    }
    return Time;

}

///********************************************
int MaxOR(int a,int b)
{
    int max=0;
    for(int i=a;i<=b;i++)
    {
        for(int j=i;j<=b;j++)
        {
            if((i^j)>max)
            {
                max=(i^j);
            }
        }
    }
    return max;
}
///********************************
int ISPowofTow(int n)
{
    int c=0;
    for(int i=0;i<=31;i++)
    {
        if((n>>i)&1)
        {
            c++;
        }
    }
   return c==1 ? 1: 0;
}
///*********************************
int * IsPower(int *arr,int size,int *resultcount)
{
    int *arr2=(int *)malloc(sizeof(int)*size);
    *resultcount=size;
    for(int i=0;i<size;i++)
    {
        if(ISPowofTow(arr[i])==1)
        {
            arr2[i]=1;
        }
        else
        {
            arr2[i]=0;
        }
    }
    return arr2;
}

