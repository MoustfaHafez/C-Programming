
void ArrayMerging(int const *arr1,int s1,int const * arr2,int s2,int *arrnew,int *newsize)
{
    int size=s1+s2;///
    int i,j=0;
    for(i=0; i<size; i++) ///1,2,3///4,5,6
    {
        arrnew[i++]=arr1[j];
        arrnew[i]=arr2[j];
        j++;
    }
    *newsize=size;
}

void ArrayMerging2(int const *arr1,int s1,int const *arr2,int s2,int *newarr,int *newsize)
{
    int i,j=0;
    int size1=s1+s2;///5+10===15
    int smallsize=s1<s2?s1:s2;
    int size=2*smallsize;
    int *arr3=s1>s2?arr1:arr2;

    for(i=0; i<size; i++)
    {
        newarr[i++]=arr1[j];
        newarr[i]=arr2[j];
        j++;
    }
    for(; i<size1; i++)
    {
        newarr[i]=arr3[j];
        j++;
    }
    *newsize=size1;

}
///=========================================================================*/
void ArraywithoutRepeatedData2(int *arr1,int s1,int *newarr,int *newsize)
{

    int i,j=0,flag=0;///1,2,2,2,3,4,3,5,6///   1,2,3,4,5,6
    for(i=0; i<s1; i++)
    {
        flag=0;
        for(int k=0; k<i; k++)
        {
            if(arr1[i]==arr1[k])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            newarr[j++]=arr1[i];

        }
    }
    *newsize=j;
}
/*=============================================================================*/


void ArrayMerging10(int const *arr1,int s1,int const *arr2,int s2,int *newarr,int *newsize)
{
    int size=s1+s2;///10
    int i=0,j=0;
    for(i=0;i<size;i++)
    {
        newarr[i++]=arr1[j];
        newarr[i]=arr2[j];
        j++;
    }
    *newsize=size;

}

void ArrayMergingwithDiffSize(int const *arr1,int s1,int const *arr2,int s2,int *newarr,int *newsize)
{
    int i=0,j=0;
    int size1=s1+s2;///5,8
    int smallsize=s1<s2?s1:s2;
    int size=2*smallsize;
    int *arr3=s1>s2?arr1:arr2;
    for(i=0;i<size;i++)
    {
        newarr[i++]=arr1[j];
        newarr[i]  =arr2[j];
        j++;
    }
    for(;i<size1;i++)
    {
        newarr[i]=arr3[j];
        j++;
    }
    *newsize=size1;
}

///*===============================================================*/

void ArraywituniqueData(int const *arr1,int s1,int *newarr,int *newsize)
{
    int i=0,j=0,flag=0;///1,2,3,4,5,6,7,2
    for(i=0;i<s1;i++)
    {
        flag=0;
        for(int k=0;k<i;k++)
        {
            if(arr1[i]==arr1[k])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
           newarr[j]=arr1[i];
           j++;
        }
    }
    *newsize=j;
}
