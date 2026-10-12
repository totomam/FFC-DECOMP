#include "ffc/types.h"

extern void func_0201ac38(int x);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern void *func_02056830(uint32_t size);
extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_0208763c(void);
extern void func_0201afbc(void *self, void *p);
extern void func_02087678(void *p);
extern void func_0201ad64(void *self, uint32_t a, uint32_t b, void *c);
extern void func_02056858(void *p);
extern void func_0201b4ac(void *self);

extern uint32_t data_020b93bc[];

typedef struct {
    void *p;
    volatile uint8_t flag;
} Local;

typedef struct {
    uint8_t e[0x2c];
} Elem;

typedef struct {
    uint8_t pad0[0x14];
    void **obj;
    uint8_t pad1[0x4];
    uint32_t idx;
    uint8_t pad2[0x4];
    uint32_t cnt;
    uint8_t pad3[0x4];
    Elem *base;
} Self;

void func_0201b608(Self *s)
{
    Local l;
    uint8_t one;
    uint32_t k;
    uint32_t n;
    uint32_t m;
    void *buf;
    void **obj;

    k = 0x1df;
    func_0201ac38(0);
    n = func_0209a978(s->cnt + k, k + 1);
    buf = func_02056830(n * (k + 1));
    m = func_0209a978(s->cnt + k, k + 1);
    func_02084b2c(buf, 0, m * (k + 1));
    l.p = data_020b93bc;
    one = 1;
    l.flag = one;
    if (l.flag != 0) {
        func_0208763c();
    }
    obj = s->obj;
    ((void (*)(void *, void *))((void **)(*obj))[3])(obj, buf);
    func_0201afbc(s, &s->base[s->idx]);
    if (l.flag != 0) {
        func_02087678(l.p);
    }
    func_0201ad64(s, s->idx + 1, s->cnt, buf);
    func_02056858(buf);
    func_0201b4ac(s);
    func_0201ac38(1);
}
