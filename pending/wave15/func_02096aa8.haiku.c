#include "ffc/types.h"

typedef struct {
    uint32_t lo;
    uint32_t hi;
} W;

double func_02096aa8(double x, double y)
{
    ((W *)&x)->hi = (((W *)&x)->hi & 0x7fffffff) | (((W *)&y)->hi & 0x80000000);
    return x;
}
