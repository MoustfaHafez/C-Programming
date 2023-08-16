int arrarmostRepaetedVop(int *arr,int size,int *num)
{
    int c=0,max=0,i=0,c2=0;
    for(i=0; i<size; i++)
    {

        for(int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
            c2++;
        }
        if(c>=max)
        {
            max=c;
            *num=arr[i];
        }
        c=0;
    }
    return max;
}

int arrarmostRepaetedVop_Sorted(int *arr,int size,int *num)
{
    int c=0,max=0,i=0;
    for(i=0; i<size-1; i++)
    {
        if(arr[i]==arr[i+1])
        {
            c++;
            if(c>=max)
            {
                max=c;
                *num=arr[i];
            }
        }
        else
        {
            c=0;
        }
    }
    return max;
}

int arrayBinarySreach(int *arr,int size,int num)
{
    int FIndex=0,LIndex=size-1;

    for(; FIndex<=LIndex;)
    {
        int MIndex=(FIndex+LIndex)/2;
        if(num==arr[ MIndex])
        {
            return MIndex;///Return Index
        }
        else if (arr[ MIndex]>num)
        {
            LIndex= MIndex-1;
        }
        else
        {
            FIndex=MIndex+1;
        }
    }
    return -1;

}

int ArrayMostRepeatedFre(int *arr,int size,int *num)
{
    int max=0,c=0,i=0;
    int count[10]= {0};
    for(i=0; i<size; i++)
    {
        count[arr[i]]++;
    }
    for(i=0; i<10; i++)
    {
        if(count[i]>=max)
        {
            max=count[i];
            *num=i;
        }
    }
    return i;
}

void arraySlectionSort(int *arr,int size)
{
    int max=arr[0],i=0,MaxIndex=0,LIndex=size-1,temp;

    for(int j=0; j<size; j++)
    {
        max=arr[0],MaxIndex=0;
        for(i=0; i<LIndex; i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                MaxIndex=i;
            }
        }
        temp=arr[LIndex];
        arr[LIndex]=max;
        arr[MaxIndex]=temp;
        LIndex--;

    }


}


int  ArrayBinarySearch2(int *arr,int size,int num)
{
    int Findex=0;
    int Lindex=size-1;
    while(Findex<=Lindex)
    {
        int Mindex=(Findex+Lindex)/2;
        for(int i=0; i<size; i++)
            if(num==arr[Mindex])
            {
                return Mindex;
            }
            else if(num<arr[Mindex])
            {
                Lindex=Mindex-1;
            }
            else
            {
                Findex=Mindex+1;
            }
    }
    return -1;

}
/*=======================================================*/
int ArrayMostRepeatedNumFRE(int *arr,int size,int *num)///1,2,1,2,3,3,3,3,4,4,5
{
    int i=0,j=0,c=0,max=arr[0],min=arr[0], countsize=0,max2;
    for(i=0; i<size; i++) ///-3,8==8+3+1
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]>min)
        {
            min=arr[i];
        }
    }

    countsize=max-min+1;
    int *count=calloc(countsize,sizeof(int));
    for(i=0; i<size; i++)
    {
        count[arr[i]-min]++;
    }
    for(i=0; i<countsize; i++)
    {
        if(i==0)
        {
            max2=count[0];
        }
        if(count[i]>max2)
        {
            max2=count[i];
            *num=i+min;
        }
    }
    return max2;
}

///*===================================================================*/
void ArrayBubleSort(int *arr,int size)
{
    int i=0,j=0;
    for(i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++) ///2,3,4,5,7
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];///2
                arr[i]=arr[j];///1
                arr[j]=temp;///2

            }
        }
    }
}
///*====================================================================*//
int ArrayMaxnum(int *arr,int size)
{
    int max=arr[0],index=0,i=0;
    for( i=0; i<size; i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
            index=i;
        }
    }
    return i-1;
}

void Sawp2(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}


///
int arrayMax2(int *arr,int size)
{
    int i=0,max=0,maxindex=0;
    max=arr[0];
    for(i=0; i<size; i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
            maxindex=i;
        }
    }

    return maxindex;
}

///=================================================
void arraySelectionsort3(int *arr,int size)
{
    int i=0,j=0,maxindex,max,Lindex=size-1;
    for(i=0; i<size; i++)
    {
        max=arr[0];
        maxindex=0;
        for(j=0; j<=Lindex; j++)
        {
            if(arr[j]>=max)
            {
                max=arr[j];
                maxindex=j;
            }
        }
        int temp=arr[Lindex];
        arr[Lindex]=arr[maxindex];
        arr[maxindex]=temp;
        Lindex--;
    }
}
///===================================================
void ArraySelectionSort4(int *arr,int size)
{
    int maxindex,max=arr[0],Lindex=size-1;///0:4
    for(int i=0; i<size; i++)
    {
        max=arr[0];
        maxindex=arrayMax2(arr,Lindex+1);///4
        Sawp2(&arr[maxindex],&arr[Lindex]);///&arr[2],&arr[4]
        Lindex--;///3
    }
}

///========================================================
void ArraycountSort(int *arr,int size)
{
    int count[10]={0};
    for(int i=0;i<size;i++)
    {
        count[arr[i]]++;
    }
    int j=0;
    for(int i=0;i<10;i++ )
    {
        while(count[i])///count[0]==5
        {
            arr[j++]=i;
            count[i]--;
        }
    }
}
///===================================================*/


