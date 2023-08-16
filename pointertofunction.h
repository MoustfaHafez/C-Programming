
#ifndef pointertofunction_h
#define pointertofunction_h
int sub(int x,int y);
int mul(int x,int y);
int add(int x,int y);
int func(int x,int y, int (*pf)(int,int));
void GeneralPointerToFunction();

#endif // pointertofunction
