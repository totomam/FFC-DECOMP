#include "ffc/types.h"

extern uint32_t func_02009730(void *p, uint32_t n);
extern void func_020098f4(void *tmp, uint32_t a, uint32_t b);
extern void func_020095b8(void *elem, uint32_t arg);
extern uint32_t func_0209a76c(uint32_t size, uint32_t elemsize);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern void *func_020903cc(void *object, uint32_t value, uint32_t length);
extern void func_020098ac(void *tmp);

typedef struct {
    uint8_t *base;
    uint32_t count;
    uint32_t cap;
} Arr;

typedef struct {
    uint8_t *base;
    uint32_t count;
    uint32_t cap;
    uint32_t *pcap;
    uint32_t end;
} Tmp;

void func_020097b0(Arr *p, uint32_t cnt, uint32_t arg)
{
    Tmp t;
    uint8_t *elem;
    uint32_t n;
    uint32_t tmp;
    uint32_t ret;
    uint32_t cnt_p;
    uint8_t flag[8];

    t.base = 0;
    t.count = 0;
    t.cap = 0;
    t.pcap = &p->cap;
    t.end = 0;

    ret = func_02009730(p, p->count + cnt - p->cap);
    {
        uint8_t *pf = &flag[3];
        uint8_t v, w;
        uint8_t *pg;
        *pf = 0;
        v = *pf;
        pg = (uint8_t *)((uint32_t)flag - 4);
        flag[4] = v;
        w = v;
        *pg = w;
        func_020098f4(&t, ret, *(uint32_t *)pg);
    }

    cnt_p = p->count;
    t.end = cnt_p;
    elem = t.base + 12 * cnt_p + 12 * t.count;

    if (cnt != 0) {
        do {
            if (elem != 0) {
                func_020095b8(elem, arg);
            }
            cnt--;
            t.count++;
            elem += 12;
        } while (cnt != 0);
    }

    {
    uint32_t m = 12 * p->count;
    uint8_t *b = p->base;
    uint32_t sz;
    n = func_0209a76c((uint32_t)(b + m) - (uint32_t)b, 12);
    uint32_t e = t.end - n;
    sz = 12 * n;
    t.end = e;
    func_02090380(t.base + 12 * e, b, sz);
    func_020903cc(b, 0, sz);
    }
    t.count += n;

    {
    uint32_t *pc = &t.cap;
    tmp = p->cap;
    p->cap = *pc;
    *pc = tmp;
    }

    tmp = (uint32_t)p->base;
    p->base = t.base;
    t.base = (uint8_t *)tmp;

    tmp = p->count;
    p->count = t.count;
    t.count = tmp;

    func_020098ac(&t);
}
