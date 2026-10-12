#include "ffc/types.h"

typedef struct {
    uint32_t *data;
    uint32_t size;
    uint32_t cap;
} FfcVec;

extern void *func_0205681c(uint32_t size);
extern void func_02091a24(void *p);
extern uint32_t func_0208f42c(void);
extern void func_02090398(void *dst, void *src, uint32_t n);
extern void func_02056844(void *p);
extern uint8_t data_020ab220[];

void func_020657e4(FfcVec *p, uint32_t n)
{
    uint32_t cap = ((n - 1) >> 5) + 1;
    uint32_t *np = (uint32_t *)func_0205681c(cap << 2);
    if (np == 0) {
        func_02091a24(data_020ab220);
        func_0208f42c();
    }
    if (p->data != 0) {
        if (p->size != 0) {
            uint32_t *base = p->data;
            uint32_t *end = base + ((p->size - 1) >> 5) + 1;
            int32_t cnt = end - base;
            func_02090398(np, base, (uint32_t)(cnt << 2));
        }
        func_02056844(p->data);
    }
    p->data = np;
    p->cap = cap;
}
