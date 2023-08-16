
int ArrayScanf(int *parr, int MaxSize)
{
    int num;
    printf("please enter your number not greater than %i\n",MaxSize);
    scanf("%i",&num);
    for(int i=0; i<num && i<MaxSize; i++)
    {
        scanf("%i",&parr[i]);
    }
}

void ArrayPrintf(int *parr,int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%3d ",parr[i]);
    }
}

int ArraySearch(int *parr,int size,int search)
{
    int i,index=-1;
    for(i=0; i<size; i++)
    {
        if(parr[i]==search)
        {
            index=i;///last occurence
        }
    }
    return index;
}

void ArrayMaxMin(int *parr, int size,int *min,int *max,int *indexmax,int *indexmin)
{
    int i;
    *max=*min=parr[0];
    for(i=0; i<size; i++)
    {
        if(parr[i]>=*max)
        {
            *max=parr[i];
            *indexmax=i;
        }
        if(parr[i]<=*min)
        {
            *min=parr[i];
            *indexmin=i;
        }
    }
}

int PowerOf3(int num)
{
    if(num<1)
    {
        return 0;
    }
    while(num%3==0)
    {
        num/=3;
    }
    return num==1;
}

int ArrayWithinRange(int *parr, int MaxSize)
{
    int num1,num2,i;
    printf("please enter two number not grater than %i\n",MaxSize);
    scanf("%i%i",&num1,&num2);
    int max=num1>num2?num1:num2;
    int min=num1<num2?num1:num2;
    int j=min+1;
    for( i=0; i<(max-min)-1; i++,j++) ///2,6  3,4,5
    {
        parr[i]=j;
    }
    return i;///size

}

void ArrayReverse(int *parr,int size)
{
    int i,temp,j=size-1;
    for(i=0; i<size/2; i++,j--)
    {
        temp=parr[i];
        parr[i]=parr[j];
        parr[j]=temp;
    }
}

void ArraySwap(int *parr1,int size1,int *parr2,int size2)
{
    int size=size1<size2?size1:size2;
    for(int i=0; i<size; i++)
    {
        int temp=parr1[i];
        parr1[i]=parr2[i];
        parr2[i]=temp;
    }
}

int ArrayMostRepeatedNum(int *parr,int size,int *max)
{
    int i, MostRepeatedNum,count=0;
    for(i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(parr[i]==parr[j])
            {
                count++;
                if(count>=*max)
                {
                    *max=count+1;
                    MostRepeatedNum=parr[i];
                }
            }
        }
        count=0;
    }
    return MostRepeatedNum;
}

void ArraySort(int *parr,int size)
{
    int i,temp;
    for(i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(parr[i]>parr[j])
            {
                temp=parr[i];
                parr[i]=parr[j];
                parr[j]=temp;
            }

        }
    }
}

int ArrayLongSeriesgivenNum(int *parr,int size,int num)
{
    int i,count=0,max=0;///{1,2,2,3,3,3,3,4,4,4,4,3,3,3}
    for(i=0; i<size; i++)
    {
        if(parr[i]==num)
        {
            count++;
            if(count>max)
            {
                max=count;
            }
        }
        else
        {
            count=0;
        }
    }
    return max;
}

int ArrayLongestSeies(int *parr,int size,int *mostRepeated)///Array={1,2,2,3,3,3,3,4,4,4,4,4,3,3,3}
{
    int i,count=0,max=0;
    for(i=0; i<size-1; i++)
    {
        if(parr[i]==parr[i+1])
        {
            count++;///3
            if(count>=max)
            {
                max=count;///3
                *mostRepeated=parr[i];
            }
        }
        else
        {
            count=0;
        }
    }
    return max+1;
}

void Swap(int*x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void ArraySwapAfterTwoZeros(int *parr)
{
    int i,count=0,IndexFirstZero,IndexSecondzero;
    for(i=0; count<2; i++)
    {
        if(parr[i]==0 && count==0)
        {
            count=1;
            IndexFirstZero=i;
        }
        else if(parr[i]==0 && count==1)
        {
            count=2;
            IndexSecondzero=i;

        }
    }

    for(int i=1; i<=3; i++)
    {
        Swap(&parr[IndexFirstZero+i],&parr[IndexSecondzero+i]);
    }
}

///============================================================================================///
void ArrayRemoveRepeatedNumber(int *parr,int *size)
{
    for(int i=0; i<*size; i++)
    {
        for(int j=i+1; j<*size; j++)
        {
            if(parr[i]==parr[j])///1,2,3,1,4,5
            {
                for(int index=j; index<*size; index++)
                {
                    parr[index]=parr[index+1];
                }
                (*size)--;
                j--;
            }
        }
    }
}

///*===========================================*/

void SwapTwoPointer(int **ptr1,int **ptr2)///&
{
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
///-50:0 : 50   :100 :150 ///
/// 0 :50: 100  :150 :200 ///
/*============================================*/
int ArrayMostRepeatedNumV02(char * arr,long long size, int *max)
{
    *max=0;
    int Index=0;  ///-50                      50                 150
    int fre[256]= {0}; ///3 0 0 0 0 0 0 0 0 -----0 2 0 0 0 0 0 0--------3
    for(int i=0; i<size; i++)
    {
        int c=arr[i]+50;///
        fre[c]=fre[c]+1;
    }
    for(int i=0; i<256; i++)
    {
        if(fre[i]>=*max)
        {
            *max=fre[i];
            Index=i-50;///most repeated num in array
        }
    }
    return Index;
}
///1 1 1 2 2 2 3 3 4 5 6 6 6 7 8 8
///*=========================================================================*/
void ArrayRemoveRepaetedNum(int *arr, int size,int *NewArray, int *NewSize) ///asume array is sorted
{
    int Index=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i] !=arr[i+1])
        {
            NewArray[Index++]=arr[i];///1 2 3 4 5 6 7
        }
    }
    *NewSize=Index;
}

///=====================================================
int arraymostRepaetedSorted(int *arr,int size,int* num)
{
    int i,c=0,max=0;
    for(i=0; i<size-1; i++) ///1 1 1 1 2 2 2 3 3 3 3
    {
        if(arr[i]==arr[i+1])
        {
            c++;///3
        }
        else
        {
            c=0;
        }
        if(c>=max)
        {
            max=c;///2
           *num=arr[i];///1
        }
    }
    return max+1;
}

///===============================================
void ArraySort1(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void ArraySecondMaxSecondMin(int *arr,int size,int *SMax,int*SMin)
{
    ArraySort1(arr,size);
    *SMax=arr[size-2];
    *SMin=arr[1];
}

