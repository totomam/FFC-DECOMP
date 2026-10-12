#include "ffc/types.h"

extern uint8_t data_020afd58[];
extern void func_02091a24(void *p);
extern uint32_t func_0208f42c(void);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);

int32_t func_020489d8(uint8_t *s, uint32_t off, uint32_t len, const uint8_t *other, uint32_t olen)
{
    uint8_t *data;
    uint32_t size;
    uint32_t n;
    uint32_t avail;
    uint32_t m;
    uint32_t *pn;
    uint32_t *pm;
    uint32_t flag;
    int32_t r;

    flag = ((*(uint32_t *)s) << 31) >> 31;
    if (flag == 0) {
        data = s + 1;
        size = (((uint32_t)*(uint8_t *)s) << 24) >> 25;
    } else {
        data = *(uint8_t **)(s + 8);
        size = *(uint32_t *)(s + 4);
    }

    if (off > size) {
        func_02091a24(data_020afd58);
        func_0208f42c();
    }

    avail = size - off;
    pn = (len < avail) ? &len : &avail;
    n = *pn;
    pm = (olen < n) ? &olen : &n;
    m = *pm;

    r = func_02090410(data + off, other, m);
    if (r != 0) {
        return r;
    }
    if (n < olen) {
        return -1;
    }
    if (n == olen) {
        return 0;
    }
    return 1;
}
