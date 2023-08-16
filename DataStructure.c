#include "DataStructure.h"

int Stack[StackSize];
static index=0;

/*******SimpleQueue******************/
int Queue[QueueSize];
static int front=0,Rear=0;

/************circular Queue******/
int Cqueue[CQueueSize];
static int F=0,R=0;
/************circular Queue******/

int Enqueue(int data)
{
    if(Rear==QueueSize)
    {
        return QueueFull;
    }
    else
    {
        Queue[Rear]=data;
        Rear++;
    }

}
/*************************************************/

int DeQueue(int *data)
{
    if( (front==0 && Rear==0) || (front>Rear) )
    {
        return QueueEmpty;
    }
    else
    {
        *data=Queue[front];
        front++;
        return QueueDone;

    }
}
/****************************************************/

int PeakOfQueue(void)
{
    if( (front==0 && Rear==0) || (front>Rear) )
    {
        return QueueEmpty;
    }
    else
    {
        return Queue[front];

    }
}
/****************************************************/

void DisplayQueue(void)
{
    if( (front==0 && Rear==0) || (front>Rear) )
    {
        return QueueEmpty;
    }
    else
    {
        for(int i=front; i<=Rear; i++)
        {
            printf("%i ",Queue[i]);
        }
    }
}

/**********************************************/
void QueuekTest(void)
{
    int x,y;
    printf("enter any number to Enque zero to Dequeue\n");
    while(1)
    {
        scanf("%i",&x);
        if(x!=0)
        {
            if(Enqueue(x)==QueueFull)
            {
                printf(" queue full\n");
            }
            else
            {
                printf("%i is enqued\n",x);
            }
        }
        else
        {
            if(DeQueue(&y)==QueueEmpty)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Dequeued ->%i\n",y);
            }

        }

    }

}

/***********************************************/

int Push(int data)
{
    if(index==StackSize)
    {

        return StackFull;
    }
    else
    {
        Stack[index]=data;
        index++;
        return StackDone;
    }

}

/****************************************/
int Pop(int *data)
{

    if(index==0)
    {
        return StackEmpty;///empty
    }
    else
    {

        index--;
        *data=Stack[index];
        return StackDone;///ok
    }
}

/**************************************/

int TopOfStack(int *data)
{
    if(index==0)
    {
        return StackEmpty;///empty
    }
    else
    {

        /// index--;
        *data=Stack[index-1];
        return StackDone;///ok
    }
}


/**************************************/
void DisplayStackElement()
{
    if(index==0)
    {
        return StackEmpty;
    }
    else
    {
        for(int i=index-1; i>=0; i--)
        {
            printf("%i   ",Stack[i]);
        }
    }
}

/**************************************/

void StackTest(void)
{
    int x,y;
    printf("enter any number to push zero to pop\n");
    while(1)
    {
        scanf("%i",&x);
        if(x!=0)
        {
            if(Push(x)==StackFull)
            {
                printf("stack overflow\n");
            }
            else
            {
                printf("%i is pushed to stack\n",x);
            }
        }
        else
        {
            if(Pop(&y)==StackEmpty)
            {
                printf("stack is empty\n");
            }
            else
            {
                printf("pop ->%i\n",y);
            }

        }

    }

}

///*****************circular Queue**************************

int IsEmpty()
{
    return (F==0 && R==0)? 1 : 0;
}
///*********************************************************
int ISFull()
{
    return ( (F==0 && R==CQueueSize) || (R==F-1) ) ?  1  : 0 ;
}
///***********************************************************

int CEnqueue(int data)
{
    if(ISFull()==1)
    {
        return 0;///fulll
    }
    else
    {
        if (R==CQueueSize)
        {
            printf("R is = SIZE -1  R=%i  F=%i\n",R,F);
            R=0;
            printf("R is = SIZE -1  R=%i  F=%i\n",R,F);
            Cqueue[R++]=data;
            return 1;///done
        }
        else
        {
            printf("Q is Not empty R=%i  F=%i\n",R,F);
            Cqueue[R++]=data;
            return 1;///done
        }
    }
}

int CDequeue(int *data)
{
    if(IsEmpty()==1)
    {
        return 0;///queue is empty
    }
    else
    {
        if(F==R)
        {
            *data=Cqueue[F];
             F=R=0;///last element in array
        }
        else if(F==CQueueSize)
        {
            *data=Cqueue[F];
             F=0;
        }
        else///NORMAL CASE
        {
            *data=Cqueue[F];
             F++;
        }

    }
}
///****************************************

int PeakOfCqueue(void)
{
    if(IsEmpty()==1)
    {
        printf("Queue is empty\n");
        ///return 0;///queue is empty
    }
    else
    {
        return Cqueue[F];
    }
}
///*******************************************


int DisplayCqueueElements(void)
{

    if(IsEmpty()==1)
    {
        printf("Queue is empty\n");
        ///return 0;///queue is empty
    }
    else
    {
        if(F<=R)
        {
            for(int i=F; i<=R; i++)
            {
                printf("%i ",Cqueue[i]);
            }
            printf("\n");
        }
        else
        {
            for(int i=F; i<CQueueSize; i++)
            {
                printf("%i ",Cqueue[i]);
            }
            printf("\n");
            for(int i=0; i<=R; i++)
            {
                printf("%i ",Cqueue[i]);
            }
            printf("\n");
        }
    }
}
///******************************************************
void CQueueTest(void)
{
    int x,y;
    printf("enter any number to Enqueue zero to DeQueue\n");
    while(1)
    {
        scanf("%i",&x);
        if(x!=0)
        {
            if(CEnqueue(x)==0)
            {
                printf("Queue full\n");
            }
            else
            {
                printf("%i is Enqueued to stack\n",x);
            }
        }
        else
        {
            if(CDequeue(&y)==0)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Dequeue ->%i\n",y);
            }

        }

    }

}





