#include "ffc/types.h"

extern void *data_020ad958;
extern void func_0202ad8c(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_02023800(void *p);
extern void func_02022e64(void *x);
extern void func_02023e50(void *p, uint32_t sz);
extern void func_02024db0(void *p, uint32_t v);

void *func_0202be9c(uint8_t *p, void *a, uint32_t n)
{
    uint8_t *self = p;
    uint32_t cnt = n;
    uint32_t i = 0;
    uint32_t *pcnt;
    void *q;

    func_0202ad8c(self);
    *(void **)self = &data_020ad958;
    *(uint32_t *)(self + 0xb20) = cnt;
    pcnt = (uint32_t *)(self + 0xb20);
    if (cnt != 0) {
        do {
            q = func_0205681c(0x2e4);
            if (q != 0) {
                q = func_02023800(q);
            }
            *(void **)(self + 0x19c + i * 4) = q;
            func_02022e64(a);
            func_02023e50(*(void **)(self + 0x19c + i * 4), 0x1000);
            func_02024db0(*(void **)(self + 0x19c + i * 4), 0);
            i++;
        } while (i < *pcnt);
    }
    *(uint32_t *)(self + 0xb1c) = 0;
    *(uint32_t *)(self + 0x28) = 0;
    return self;
}
