#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } S;

int func_02090270(S s)
{
    return (s.b & 0x80000000u) != 0;
}
