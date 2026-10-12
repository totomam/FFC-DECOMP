#include "ffc/types.h"

extern void *func_0203b688(void);
typedef struct { uint32_t a, b; } S;
extern uint32_t func_ov001_0218c414(void *p, S s);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov001_0218ed2c(void *a, uint32_t b, uint32_t c, void *d, uint32_t e, uint32_t f);
extern uint32_t func_0203c250(void);
extern uint32_t func_02061128(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0203c23c(void);
extern void *func_0203b6fc(void);
extern S data_ov001_0219485c;
extern S data_ov001_02194864;
extern void *data_020b8e44;

void *func_ov001_0218c34c(void *p)
{
    uint8_t *pp = (uint8_t *)p;
    void *r5;
    uint32_t r7, r4, s8, r6v;
    void *n;
    uint32_t res;

    r5 = func_0203b688();
    res = func_ov001_0218c414(pp, data_ov001_0219485c);
    func_02056bc0(r5, (void *)res);

    if (*(uint32_t *)((uint8_t *)(*(uint32_t **)data_020b8e44) + 0x88) != 0) {
        n = func_0205681c(0xb8);
        res = (uint32_t)n;
        if (n != 0) {
            res = func_ov001_0218ed2c(n, *(uint32_t *)data_020b8e44, *(uint32_t *)(pp + 0x98), pp + 0xe90, 1, 0);
        }
        func_02056bc0(r5, (void *)res);
    }

    r7 = func_ov001_0218c414(pp, data_ov001_02194864);
    s8 = func_02061128(func_0203c250(), 0x10, 0, 0);
    r4 = func_02061128(func_0203c23c(), 0x10, 0, 0);
    r6v = (uint32_t)func_0203b6fc();
    func_02056bc0((void *)r6v, (void *)r4);
    func_02056bc0((void *)r6v, (void *)s8);
    func_02056bc0(r5, (void *)r6v);
    func_02056bc0(r5, (void *)r7);
    return r5;
}
