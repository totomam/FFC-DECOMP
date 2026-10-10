#include "ffc/types.h"

typedef void (*VFn)(void *);
typedef struct VTbl {
    VFn slots[16];
} VTbl;

void func_ov005_02196c3c(uint8_t *p)
{
    void *a = *(void **)(p + 0x9c);
    ((VTbl *)(*(void **)a))->slots[11](a);
    void *b = *(void **)(p + 0xbc);
    ((VTbl *)(*(void **)b))->slots[11](b);
}
