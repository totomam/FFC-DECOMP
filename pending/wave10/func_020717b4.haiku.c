#include "ffc/types.h"

extern void func_02071404(void *p);

typedef struct {
    uint8_t *base;
    int32_t count;
} List;

void func_020717b4(List *p, int32_t n)
{
    uint8_t *e = p->base + p->count * 28;
    p->count = p->count - n;
    while (n != 0) {
        e -= 28;
        func_02071404(e + 12);
        n--;
    }
}
