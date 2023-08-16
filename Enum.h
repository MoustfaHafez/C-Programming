
#ifndef Enum_h
#define Enum_h

typedef enum
{
    SUNDAY,
    MONDAY,
    TUSEDAY,
    FRIDAY
}day_t;

typedef enum
{
    ok  =1,
    NOT_OK,
}bool_t;

typedef enum
{
    E_80=1,
    E_71,
    E_72,
    E_73,
    E_74
}Bool_t;

typedef enum
{
    m1,
    m2,
    m3,
    m4,
    m5
}motor_t;

Bool_t Dispenser(int x);



#endif // Enum_h
