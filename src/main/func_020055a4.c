#include "ffc/types.h"

extern uint32_t func_0205db5c(const void *object);
extern uint32_t func_0205db6c(const void *object);
extern uint32_t func_0205db04(const void *object);
extern void func_02005500(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_020055a4(void *p, uint32_t idx)
{
    uint32_t *obj = *(uint32_t **)((uint8_t *)p + 0xc + (idx << 2));
    uint32_t a = obj[3];
    uint32_t b = obj[4];
    uint32_t c;
    uint32_t d;
    uint32_t e;

    if (b == 0) {
        uint32_t *first = *(uint32_t **)((uint8_t *)p + 0xc);
        b = first[4];
    }
    c = func_0205db5c((const void *)obj[2]);
    d = func_0205db6c((const void *)(*(uint32_t **)((uint8_t *)p + 0xc + (idx << 2)))[2]);
    e = func_0205db04((const void *)(*(uint32_t **)((uint8_t *)p + 0xc + (idx << 2)))[2]);
    func_02005500(p, a, b, c, d, e);
}
