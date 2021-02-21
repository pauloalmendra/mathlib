
typedef signed char int8;
typedef unsigned char uint8;

typedef int int32;
typedef unsigned int uint32;

typedef double real;


typedef struct Matrix
{
    void* data;
    uint32 rows;
    uint32 columns;
} Matrix;

typedef struct Vector
{
    void* data;
    uint32 m;
} Vector;