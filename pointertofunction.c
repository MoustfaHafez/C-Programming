
#include "pointertofunction.h"
static void(*pfg)(void)=0;


int add(int x,int y)
{
    return x+y;
}
///********************************
int mul(int x,int y)
{
    return x*y;
}
///*********************************
int sub(int x,int y)
{
    return x-y;
}

///HOW TO PASS FUNCTION TO FUNCTION

int func(int x,int y, int (*pf)(int,int))
{
    x++;
    int R=pf(x,y);
    return R;
}
///***************************************
void timer_set(int t,void(*pf)(void))///call back function
{
    for(int i=t;i>=0;i--)///5
    {

    }
   /// pf();
   pfg=pf;
}
///***************************************
void TimerDone()
{
    pfg();
}
///****************************************
void motor1_on(void)
{

}
///*****************************************
void motor2_on(void)
{

}
///***************************************

void GeneralPointerToFunction()
{
    int x=5,y=10;
    int (*Pf) (int ,int)=&add;///pointer to function
    int R=add(x,y);
    Pf=&mul;
    Pf=&sub;
    printf("%i %i\n",add,Pf);
    printf("R=%i\n",Pf(x,y));


    int (*arr[3])(int,int)={&add,&mul,&sub};///array from 3  pointer to function
    ///*************for addition*********
    printf("add=%i\n",arr[0](x,y));
    ///*************for mul**************
    printf("mul=%i\n",arr[1](x,y));
    ///*************for sub**************
    printf("mul=%i\n",arr[2](x,y));
    ///**********************************

    ///***********PASS FUNCTION TO FUNCTION
    int R1=func(x,y,&add);///6+10
    printf("R=%i\n",R1);
    ///******************************
    R1=func(x,y,&mul);///6+10
    printf("R=%i\n",R1);
    ///******************************
    R1=func(x,y,&sub);///6+10
    printf("R=%i\n",R1);
    ///******************************
    timer_set(10,&motor1_on);
    timer_set(10,&motor2_on);
    TimerDone();
}




