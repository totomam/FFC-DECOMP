#include "ffc/types.h"

extern void *func_0205681c(uint32_t a);
extern void *func_ov013_021bf338(void *a, void *b, void *c);
extern void func_02056bc0(void *object, void *node);

typedef struct { uint32_t a, b; } S;
extern S data_ov013_021c41e0;

void func_ov013_021bd574(uint8_t *p)
{
    void *r;
    *(uint8_t *)(*(uint8_t **)(p + 0xc8) + 0x5c) = 0;
    r = func_0205681c(0xdc);
    if (r != 0) {
        r = func_ov013_021bf338(r, p, p + 0xcc);
    }
    func_02056bc0(p + 0x14, r);
    *(S *)(p + 0xb8) = data_ov013_021c41e0;
}
