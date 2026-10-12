#include "ffc/types.h"

extern void func_0201ed30(uint32_t a, uint32_t b, uint32_t c, void *d);
extern uint32_t func_02036cd8(const void *object);
extern void func_ov005_02197684(void *a, void *b, uint32_t c);
extern void func_ov008_0219a878(void *a, void *b, uint32_t c);
extern uint32_t data_020b93b8;

typedef struct {
    uint8_t pad0[0xe0];
    uint32_t *arr;
    volatile uint32_t cnt;
    uint32_t cap;
    uint8_t pad1[0x118 - 0xec];
    uint32_t f118;
} Obj;

void func_ov008_0219b03c(Obj *p)
{
    uint32_t local;
    uint32_t out;
    uint8_t i;

    {
        uint32_t a = p->cnt;
        p->cnt = p->cnt - a;
    }

    for (i = 0; i < 8; i++) {
        func_0201ed30(data_020b93b8, p->f118, i, &local);
        if (func_02036cd8(&local)) {
            func_ov005_02197684(&out, &local, 1);
            if (p->cnt < p->cap) {
                p->arr[p->cnt++] = out;
            } else {
                uint8_t flag = 0;
                func_ov008_0219a878(&p->arr, &out, flag);
            }
        }
    }
}
