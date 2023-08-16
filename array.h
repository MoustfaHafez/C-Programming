void ArrayMaxMin(int *parr, int size,int *min,int *max,int *indexmax,int *indexmin);
int ArraySearch(int *parr,int size,int search);
void ArrayPrintf(int *parr,int size);
int ArrayScanf(int *parr, int MaxSize);
int PowerOf3(int num);
int ArrayWithinRange(int *parr, int MaxSize);
void ArrayReverse(int *parr,int size);
int ArrayMostRepeatedNum(int *parr,int size,int *max);
void ArraySort(int *parr,int size);
int ArrayLongSeriesgivenNum(int *parr,int size,int num);
int ArrayLongestSeies(int *parr,int size,int *mostRepeated);
void ArrayRemoveRepeatedNumber(int *parr,int *size);
void ArraySort2(int *parr,int size);

/*==============String.h=================*/
void ArrayStringprint(char *parr);
void ArrayCapitalToSmall(char * parr);
int ArrayCompareStr(char *parr1,char *parr2);
int ArrayStrLenght(char *parr);
void ArrayRevString(char *parr);
void ArrayStringLowcase(char *parr);
void ArrayStringToggle(char *parr);
int IntToString5(int num,char *str);
int StringToInt(char *str);
void ArrayStringRev2(char *str);
void ArrayRevSubString(char *str, int F_index,int L_Index);
int IsStringMirror(char *str);
void StringRevWords(char *str);
///int StringToInt(char *str);
int StringToInt2(char *str,int *pnum);

void FloatToString(float num,char *s);


/*======================================================*/
int * ArrayMerge(int *arr, int s1,int *arr2,int s2,int *newsize);
/*=======================================================*/
int * ArrayMerge3(int *arr1, int s1,int *arr2,int s2,int *newsize);
///*=================================================================*/

int * ArraywithoutRepeatedData(int *arr,int size,int *NewSize);

///===============================================================*/
void ArrayMerging(int const *arr1,int s1,int const * arr2,int size,int *arrnew,int *newsize);
/*================================================================================================*/
void ArraywithoutRepeatedData2(int *arr1,int s1,int *newarr,int *newsize);
///============================================================================================*/
void ArrayMerging10(int const *arr1,int s1,int const *arr2,int s2,int *newarr,int *newsize);
///*================================================================================================*/
void ArrayMergingwithDiffSize(int const *arr1,int s1,int const *arr2,int s2,int *newarr,int *size);

void ArraywituniqueData(int const *arr1,int s1,int *newarr,int *newsize);

void arraySlectionSort(int *arr,int size);
///================================================================================================*/
void ArrayBubleSort(int *arr,int size);
///========================================================================================*/
int ArrayMaxnum(int *arr,int size);
///===============================================================================================*/
void Sawp2(int *x, int *y);
///=============================================================================================
int arrayMax2(int *arr,int size);
///===============================================================================================*/
void arraySelectionsort3(int *arr,int size);
///==========================================================================================
void ArraySelectionSort4(int *arr,int size);
///==========================================================================================
void ArraycountSort(int *arr,int size);
///===========================================================
void SwapPointers(char **ptr1,char **ptr2);
///============================================================
void PrintArrayOfPointersToChar(char **arr,int size);
///============================================================
int  ArrayofPointersSearch(char **arr,int size,char *Str);
///=======================================================
void PrintString(char *str);
void PrintfArrayOfPointersToChar(char **arr,int size);
///=======================================================
int SearchInArrayofPointersTochar(char **arr,int size,char *str);
///===========================================================
void StringSortedInArrayBubleSort(char **arr,int size);
///==========================================
void ScanString(char *str);
void StringPrintf(char *str);
///==============================
int StringLen(char *str);
///====================================
void Array2D_Printf(int (*arr)[3],int R,int C);
void Array2D_Scan(int arr[][3],int R,int C);
void Array2D_Addition(int *(arr)[3],int *(arr1)[3],int *(arr2)[3],int R,int C);
int Array2D_IS_Equal(int *(arr1)[3],int *(arr2)[3],int R,int C);
///=================================================================
int Array2D_SumOfMainDaional(int *(arr)[3],int R,int C);
///================================================================
void Array2D_SumOEachRow(int (*arr)[3],int *arr1,int *arr2,int R,int c);
///=================================================================================
int Array2D_IsUpperTringle(int (*arr)[3],int R,int c);
///=================================================================================
int Array2D_SumOfUpperTringle(int (*arr)[3],int R,int c);
///=================================================================================
int Array2D_CheckDiagonals(int (*arr)[3],int R,int c);
///=================================================================================
void Array2D_PrintfZigzag(int (*arr)[3],int R,int c);
///============================================================================
void ArrayStarPrint(char (*arr)[5],int R,int c);
///==============================================================================
void ArraySetStar(char (*arr)[5],int R,int c,int x,int y);


