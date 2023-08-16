
#include "linkedlist.h"

node *front=0;
node *rear =0;

node * CreateNode(int data)
{
    node*newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=0;
    return newnode;
}
///******************************************
void ListAddNoteAtLast(node**head,int data)
{
    node*newnode=CreateNode(data);
    node *current=*head;
    if(*head==0)
    {
        *head=newnode;
        return;
    }
    while(current->next !=0)
    {
        current=current->next;
    }
    current->next=newnode;
}
///*****************************************
void ListAddNoteAtFirst(node**head,int data)
{
    node*newnode=CreateNode(data);
    newnode->next=*head;
    *head=newnode;
}
///*****************************************
void ListPrint(node ** head)
{
    if(*head==0)
    {
        printf("list is empty\n");
    }
    node *current=*head;

    while(current!=0)
    {
        printf("%i  ",current->data);
        current=current->next;
    }
    printf("\n================\n");
}
///**************************************
int ListSize(node **head)
{
    node *current=*head;
    int size=0;
    while(current!=0)
    {
        current=current->next;
        size++;
    }
    return size++;
}
///*********************************

int ListEditNode(node ** head, int olddata,int newdata)
{
    if(*head==0)
    {
        return 0;/// node is empty
    }
    else
    {
        node *current=*head;
        while(current!=0)
        {
            if(current->data==olddata)
            {
                current->data=newdata;
                return 1;///exsit
            }
            current=current->next;
        }

    }
    return -1;///not exsit
}

///*********************************
int ListInsertAfter(node **head,int prevdata,int newdata)
{
    if(*head==0)
    {
        return 0;/// list is empty
    }
    node *current=*head;
    while(current !=0)
    {
        if(current->data==prevdata)
        {
            node *newnode=CreateNode(newdata);
            newnode->next=current->next;
            current->next=newnode;
            return 1;
        }
        current=current->next;
    }
    return 0;
}
///*******************************************
/*
int ListDeleteLastNode(node **head)
{
   node *current=*head;
   while(current->next==0)
   {
       free();
   }

}*/
///*******************************************
int List_DeleteFirstNode(node **head)
{
    int data;
    node *current=*head;
    if(*head==0)
    {
        return 0;/// list is empty
    }
    else
    {
          data=(*head)->data;
         *head=(*head)->next;
          free(current);
          current==0;
    }
    return data;

}
///******************************************

int list_DeleteLastnode(node**head)
{
    node *current=*head;
    if(*head==0)
    {
        return 0;/// list is empty
    }
    while(current->next->next!=0)
    {
        current=current->next;
    }
    node *temp=current->next;
    free(temp);
    current->next=0;
}
///*****************************************
int List_Deletenode(node **head,int data)
{
    node *current=*head;
    if(*head==0)
    {
        return 0;/// your list is empty;
    }
    while(current->next!=0)
    {
        if(current->next->data==data)
        {
            node *temp=current->next;
            current->next=current->next->next;
            free(temp);
            return 1;///
        }
        current=current->next;
    }
}

///******************Stack with linked list******
void ListPush(node **head,int data)
{
   ListAddNoteAtFirst(head,data);
}

///*********************************************
int ListPop(node**head)
{
   int data=List_DeleteFirstNode(head);
   if(data !=0)
   {
       return data;
   }
}
///**********************************************

int listTop(node **head)
{
    int top;
    if(*head==0)
    {
        top=0;/// empty
    }
    else
    {
        top=(*head)->data;
    }
    return top;
}
///*********************************

void ListDisplayStack(node **head)
{
    ListPrint(head);
}

///**********************************



