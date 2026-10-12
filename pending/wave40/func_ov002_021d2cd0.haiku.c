#include "ffc/types.h"

typedef struct {
    uint32_t w[12];
} Elem;

typedef struct {
    Elem *data;
    uint32_t count;
} Pool;

extern int32_t func_0209a76c(int32_t a, int32_t b);
extern void func_ov002_021d2d4c(Pool *p, int32_t n, uint32_t flag);

void func_ov002_021d2cd0(Pool *p, Elem *begin, Elem *end)
{
    int32_t n = func_0209a76c((int32_t)((uint8_t *)end - (uint8_t *)begin), 0x30);
    Elem *dst;
    if (n == 0) {
        return;
    }
    func_ov002_021d2d4c(p, n, 0);
    dst = p->data + p->count;
    while (begin != end) {
        if (dst != 0) {
            *dst = *begin;
        }
        p->count++;
        begin++;
        dst++;
    }
}
