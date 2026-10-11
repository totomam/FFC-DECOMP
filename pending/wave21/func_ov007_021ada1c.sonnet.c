#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern S data_ov007_021c53ec;
typedef struct { uint32_t pad[3]; uint32_t f; uint32_t pad2[0x1c]; S s; uint32_t z; } T;

void func_ov007_021ada1c(T *p)
{
    if (p->z == 0) {
        p->f = (p->f & ~0xffu) | 2;
    }
    p->s = data_ov007_021c53ec;
}
