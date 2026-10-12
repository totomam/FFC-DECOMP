#include "ffc/types.h"

extern void func_020375f4(uint32_t mask);
extern void func_02076248(void *p, uint32_t v);
extern void func_0208aaf4(void);
extern void func_0208ae70(uint32_t x);
extern void func_0208ae80(uint32_t x);
extern void *func_0205681c(uint32_t x);
extern void *func_02071d84(void *a, void *b, uint32_t c, uint32_t d);
extern void *func_0203bfe0(uint32_t x);
extern void *func_0203bfcc(uint32_t x);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_020b0090[];
extern uint32_t data_020b01d4[2];

void func_0204a670(uint8_t *a)
{
    void *v;
    void *r7;
    uint8_t *p;
    uint32_t *d;
    uint32_t x;
    uint32_t y;
    void *r6;

    func_020375f4(4);
    func_02076248(data_020b0090, 0x56444545);
    func_0208aaf4();
    func_0208ae70(4);
    func_0208ae80(4);

    v = func_0205681c(0x20);
    if (v != 0) {
        v = func_02071d84(v, a + 0xb4, 1, 0);
    }

    r7 = func_0203bfe0(0x1e);
    p = func_0203bfcc(0x1e);
    r6 = func_0203b6fc();
    func_02056bc0(r6, p);
    func_02056bc0(r6, r7);
    p = a + 0x14;
    func_02056bc0(p, r6);
    func_02056bc0(p, v);

    d = data_020b01d4;
    x = d[0];
    y = d[1];
    *(uint32_t *)(a + 0x80) = x;
    *(uint32_t *)(a + 0x84) = y;
}
