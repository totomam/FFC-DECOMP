#include "ffc/types.h"

extern void func_ov007_021c10f8(uint32_t a, uint32_t b);

typedef struct {
    uint8_t pad[8];
    uint32_t field8;
} Inner;

typedef struct {
    uint8_t pad[8];
    Inner *inner;
    uint32_t *ptr;
} Outer;

void func_ov007_021c14bc(Outer *p)
{
    Inner *r2 = p->inner;
    uint32_t *r1 = p->ptr;
    if (r1 != 0) {
        func_ov007_021c10f8(r2->field8, *r1);
    }
}
