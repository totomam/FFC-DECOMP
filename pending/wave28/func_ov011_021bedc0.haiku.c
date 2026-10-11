#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov011_021cad04;
extern uint32_t func_ov011_021be2fc(void *a, Pair v);
extern void *func_ov011_021bd668(void *a);
extern void func_02056bc0(void *object, void *node);

void func_ov011_021bedc0(void *a0)
{
    uint8_t *p = (uint8_t *)a0;
    uint8_t *sub;
    uint32_t r6;
    void *obj;
    void **vt;

    if (*(int32_t *)(p + 0x118) == 1) {
        obj = *(void **)(p + 0x100);
        vt = *(void ***)obj;
        ((void (*)(void *))vt[11])(obj);
        r6 = func_ov011_021be2fc(a0, data_ov011_021cad04);
        {
            int16_t idx = *(int16_t *)(p + 0x120);
            void *n = func_ov011_021bd668(*(void **)(p + 0xc4 + (idx - 1) * 4));
            sub = p + 0x14;
            func_02056bc0(sub, n);
        }
        func_02056bc0(sub, (void *)r6);
    }
}
