#include <stdio.h>
#include <stdlib.h>
#include "string2test.h"
#include "array.h"
#include "struct.h"
#include "Sodoko1.h"
#include "database.h"
#include "dos.h"
#include <time.h>
#include <Windows.h>
#include "DataStructure.h"
#include "pointertofunction.h"
#include "linkedlist.h"
#include "Enum.h"
#include "HakerRankProblems.h"
void CQueueTest(void);
  unsigned char str[20];
    unsigned char StrMessage[10];
    unsigned char NumMessage=0,flag1=0;

///=============================
int main()
{
    ///int x;
    ///StudentDatabaseManagementSystem();
    /// GeneralUnion();
    ///CircularQueueTest();
    ///CQueueTest();
    ///GeneralPointerToFunction();


    while(1)
    {
          StringScanf1(str,20);
          StringPrint(str);

    	for(unsigned char i=0;str[i];i++)
		{
			if(str[i]!=' '&& flag1!=1)
			{
				StrMessage[i]=str[i];
			}
			else
			{
				if(str[i]==' ')
				{
					flag1=1;
					StrMessage[i]=0;
					continue;
				}

				NumMessage=NumMessage*10+str[i]-'0';
			}
		}

        printf("\n");
        StringPrint(StrMessage);
        printf("\n");
        printf("%i\n",NumMessage);
         flag1=0;
         NumMessage=0;

    }


}

int countofones(int n)
{
    ///000001000001001
    int flag=0, c=0,max=0;
    for(int i=31; i>=0; i--) ///000011000001000000
    {
        if((n>>i)&1)
        {
            flag=1;
            c=0;
        }
        else
        {
            if( flag==1)
            {
                c++;
                if(c>max)
                {
                    max=c;
                }
            }

        }
    }
    return max;
}



