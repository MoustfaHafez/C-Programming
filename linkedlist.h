
#ifndef linkedlist_h
#define linkedlist_h

typedef struct node
{
    int data;
    struct node *next;
}node;

void ListAddNoteAtFirst(node**head,int data);
void ListAddNoteAtLast(node**head,int data);
node * CreateNode(int data);
void ListPrint(node ** head);
int  ListSize(node **head);
int  ListEditNode(node ** head , int olddata,int newdata);
int  ListInsertAfter(node **head,int prevdata,int newdata);
int List_DeleteFirstNode(node **head);
int  list_DeleteLastnode(node**head);
int  List_Deletenode(node **head,int data);
void ListPush(node **head,int data);
int  ListPop(node**head);
void ListDisplayStack(node **head);

#endif // linkedlist_h
