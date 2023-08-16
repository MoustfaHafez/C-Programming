
#ifndef Datastructre
#define Datastructre

#define StackSize   5
#define QueueSize   5
#define CQueueSize  5


#define StackFull   0
#define StackDone   1
#define StackEmpty  0

#define QueueFull   0
#define QueueDone   1
#define QueueEmpty  0

#define Empty       1
#define NotEmpty    0
#define Full        1
#define NotFull     0

int Pop(int *data);
int Push(int data);
void StackTest(void);
int TopOfStack(int *data);
void DisplayStackElement();

void DisplayQueue(void);
int PeakOfQueue(void);
int DeQueue(int *data);
int Enqueue(int data);
void QueuekTest(void);

void CircularQueueTest(void);
int DisplayCqueueElements(void);
int PeakOfCqueue(void);
int CDequeue(int *data);
int CEnqueue(int data);
int ISFull();
int IsEmpty();
#endif // Datastructre
