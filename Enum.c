
#include "Enum.h"

day_t today=MONDAY;
day_t tommorrow=MONDAY;




bool_t moror(int x)
{
    bool_t Status;
    if(x==1)
    {
        Status=ok;
    }
    else
    {
        Status=NOT_OK;
    }
    return Status;
}

Bool_t Dispenser(int x)
{
    Bool_t Status;
    if(x==1)
    {
        Status=E_80;
    }
    else if(x==2)

    {
         Status=E_74;
    }
    else if(x==3)
    {
         Status=E_71;
    }
    else if(x==4)
    {
         Status=E_73;
    }
    return Status;
}

void motor(motor_t m)
{
    int arr[5];
    printf("%i\n",arr[m]);
    switch(m)
    {

    }
}
void EnumGeneral(void)
{
     Bool_t Status=Dispenser(2);
     if( Status==E_74)
     {
         printf("E70\n");
     }

}
