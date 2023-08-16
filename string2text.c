void StringPrint(char* str)
{
    for(int i=0; str[i]; i++)
    {
        printf("%c",str[i]);
    }
}

void StringCovertToUpperCase(char *str)
{
    for(int i=0; str[i]; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]- ('a'-'A');
        }
    }
}

void StringConvertToLowerCase(char *str)
{
    for(int i=0; str[i]; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+('a'-'A');
        }
    }
}

int StringLenght(char *str)
{
    int i;
    for( i=0; str[i]; i++) ///"m o s t a f a 0'
    {

    }
    return i;

}

int  StringCompare(char *str1,char *str2)
{

    for(int i=0; str1[i] || str2[i]; i++)
    {
        if(str1[i]!=str2[i])
        {
            return 0;
        }
    }
    return 1;
}

void StringCopy2(char *source,char *Destenation)
{
    int i;
    for( i=0; source[i]; i++)
    {
        Destenation[i]=source[i];
    }
    Destenation[i]=0;
}

void StringReverse1(char *str)
{
    int i;
    int Lenght=StringLenght(str);
    int j=Lenght-1;
    for(i=0; i<=j; i++,j--)
    {
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}

void StringSubReverse1(char *str, int F_Index,int L_Index)
{
    int i=F_Index;///8,10
    int j=L_Index;///12,11,10
    for(; i<=j; i++,j--)
    {
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}

void StringScanf1(char *str,int MaxSize)
{
    int i=0;
    scanf("%c",&str[i]);
    for(; str[i]!='\n' && i<MaxSize-1;)
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i]=0;
}

void IntToString7(int num,char *str)///1 2 3 4 5
{
    int i=0,Rem;
    for(; num; i++) ///1234
    {
        Rem=num%10; ///4
        str[i]=Rem+'0';///5 4
        num/=10;
    }
    str[i]=0;
    StringReverse1(str);
}


int StringIsMirror(char *str)///"mostsom "
{
  int L=StringLenght(str);
  int j=L-1;
  int i=0;
  for(;i<=j;i++,j--) ///2
  {
      if(str[i] !=str[j])///2
      {
          return 0;
      }
  }
  return 1;
}

int StringIndexof(char *str,char c)
{
    int index=-1;
    for(int i=0;str[i];i++)
    {
        if(str[i]==c)
        {
            index=i;
            break;
        }
    }
    return index;
}

 void StringSwap(char *str)
 {
     int i,L;
     L=ArrayRevString(str);
     int j=L-1;
     for(i=0;str[i];i++)
     {
         int temp=str[i];
         str[i]=str[j];
         str[j]=temp;
     }

 }


int StringLastOccuranceOfIndex(char *str,char c,int* count,char *parr)
{
    int Index=-1,c1=0;
    for(int i=0;str[i];i++)///"Mostafa Sayed Ahmed Hafez"
    {
        if(str[i]==c)
        {
            Index=i;
            c1++;
            parr[i]=1;///parr[4]=1;
        }
    }
    *count=c1;
    return Index;
}

void StringScanf5(char * str)
{
    int i=0;
    scanf("%c",&str[i]);
    for(;str[i]!='\n';)
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i]=0;
}

int StringToInt10(char* str,int *pnum )
{
    int num=0;///" 1 2 3 4 5"
    for(int i=0;str[i];i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            num= (num*10) + (str[i]-'0');///'1'-'0'=1
        }
        else
        {
            return 0;
        }
    }
    *pnum=num;
     return 1;
}
 void IntToString10(int num, char * str)
 {
     int i=0,Rem;///12345
     for(;num;i++)
     {
         Rem=num%10;
         str[i]=Rem+'0';
         num/=10;
     }
     str[i]=0;
     StringReverse1(str);

 }

void StringLongestWord(char * str, char * word)
{
    int c=0,max=0,L_Index,i,F_Index,j=0;
    for(i=0;str[i];i++)///" i work as automation engineer
    {
        if(str[i]==' ')
        {
            c=0;
        }
        else
        {
            c++;
            if(c>=max)
            {
                max=c;
                L_Index=i;
            }
        }
    }

    F_Index= max-L_Index-1;

    for(int i=F_Index;j<max;i++,j++)
    {
        word[j]=str[i];
    }
    word[i]=0;

   ///printf("max=%i\nindex=%i\nfirst chara in longest word=%c\n",max,L_Index,str[ F_Index]);

}

///sheet 4
/*Reverse string*/
///============================================================
int ExtractIntFromString(int *arr,char *str)
{
    ///"1 2 3 4 5 6 7893"
    int flag=0,i;
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            flag++;
            continue;
        }
        arr[flag]=arr[flag]*10+(str[i]-'0');
    }
    return flag+1;

}
///==================================================================
void ExtractIntFromString2(char *str,int *n1,int*n2,int*n3)
{
    ///"123  456 7893"
    int flag=1,i;
    for(i=0;str[i];i++)
    {
        if(flag==1)
        {
            *n1=(*n1)*10+(str[i]-'0');
        }
        if(flag==2)
        {
           *n2=(*n2)*10+(str[i]-'0');
        }
        if(flag==3)
        {
           *n3=(*n3)*10+(str[i]-'0');
        }
        if(str[i]==' ')
        {
            flag++;
        }
    }
}
///===========================================================
int  StringCompare3(char *str1,char *str2)
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
