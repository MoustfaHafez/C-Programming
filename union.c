
typedef unsigned char  u8;
/* **************************************/
/* *     Range    :0---255               */
/* *    comment   :mostasfa              */
/* **************************************/
typedef unsigned short u16;
/* ***************************************/
/* *     Range    :0---255               */
/* *    comment   :mostasfa              */
/* **************************************/
typedef unsigned int   u32;

///extern student arr[100];
///=============================================
typedef struct __attribute__((packed,aligned(1)) )
{
    char c;
    long long age;
}
str;
///=================================================
typedef struct
{
    char c1;
    char c2;
    char c3;
    char c4;
} stru;
///=================================================
typedef union
{
    int x;
    char arr[4];
    short y;
    stru s;
} uni;
///=================================================
typedef union
{
    int x;
    struct
    {
        char c1;
        char c2;
        char c3;
        char c4;
    };
} uni2;
///==================================================


typedef union
{
    struct
    {
        char  c1;
        char  c2;
        char  c3;
        char  c4;
        char  c5;
        char  c6;
        char  c7;
        char  c8;
    };
    struct
    {
        short s1;
        short s2;
        short s3;
        short s4;
    };
    struct
    {
        int i1;
        int i2;
    };
    struct
    {
        long long l;
    };
} uni3;


typedef union
{
    char arr[6];
    struct
    {
        char current;
        char voltage;
        char kw;
        char kvar;
        char kwh;
        char pf;
    };
}uni4;


void GeneralUnion()
{
    uni u1;
    u1.x=300;
    ///printf("%i %i %i %i\n",u1.x,u1.arr[1],u1.s.c1,u1.y);
    str s;
    ///StudentDatabaseManagementSystem();
    printf("size of struct  %i\n",sizeof(s));
    uni2 u;
    u.x=300;
    u.c1=44;
    u.c2=5;
    ///printf("%i %i %i %i %\n",u.x,u.c1,u.c2,u.c3,u.c4);
    uni3 x;
    x.l=300;
    ///pointer to union =======================
    uni3 *ptr=&x;
    ptr->c1=5;
    ///-==========================================
    printf("size of u8=%i u16=%i u32=%i\n",sizeof(u8),sizeof(u16),sizeof(u32));

    ///very important========================================///
    uni4 u2;

    u2.current=5;
    u2.voltage=10;
    u2.kw=15;
    u2.kvar=20;
    u2.kwh=25;
    u2.pf=1;
    int z;
    printf("select : ");
    scanf("%i",&z);
    printf("%i \n",u2.arr[z]);

}
