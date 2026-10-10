#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov007_021c60c0;

void func_ov007_021b2b1c(uint8_t *p)
{
    *(Pair *)(p + 0x3114) = data_ov007_021c60c0;
}
