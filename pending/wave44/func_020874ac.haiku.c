#include "ffc/types.h"

typedef struct Pool {
    uint8_t pad[0x10];
    uint32_t *arr;
    int32_t cap;
    int32_t base;
    int32_t len;
} Pool;

extern uint32_t func_02088978(Pool *p);
extern void func_0208898c(uint32_t h);
extern void func_02087024(Pool *p);
extern uint64_t func_0209a76c(int32_t x, int32_t cap);
extern void func_02087058(void *q);

int func_020874ac(Pool *p, uint32_t v, uint32_t flag)
{
    uint32_t h = func_02088978(p);
    uint64_t r;

    while (p->cap <= p->len) {
        if (!(flag & 1)) {
            func_0208898c(h);
            return 0;
        }
        func_02087024(p);
    }

    r = func_0209a76c(p->base + p->len, p->cap);
    p->arr[(uint32_t)(r >> 32)] = v;
    p->len = p->len + 1;
    func_02087058((uint8_t *)p + 8);
    func_0208898c(h);
    return 1;
}
