#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern uint32_t func_02073214(uint32_t obj, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5);
extern void func_02056bc0(void *object, void *node);
extern void *func_02075540(void *a, uint32_t b);
extern uint32_t data_020b0b68;
extern uint32_t data_020b0b7c;

void *func_020757e0(uint32_t *self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5)
{
    uint32_t *p;
    uint8_t *b;
    uint32_t *o;
    void *node;
    void *q;

    p = func_0205681c(0x34);
    if (p != 0) {
        b = (uint8_t *)p;
        p[3] &= 0xffffff00;
        p[0] = (uint32_t)&data_020b0b68;
        func_02087620(&p[7]);
        b[0x10] = (uint8_t)(b[0x10] & 0xffffff00);
        b[0x11] = (uint8_t)(b[0x11] & 0xffffff00);
        b[0x12] = (uint8_t)(b[0x12] & 0xffffff00);
        p[5] = 0;
        p[6] = (uint32_t)&p[5];
        p[0] = (uint32_t)&data_020b0b7c;
        b[0x11] = (uint8_t)((b[0x11] & 0xffffff00) | 1);
    }
    o = (uint32_t *)self[16];
    node = (void *)func_02073214(o[11], a1, a2, a3, a4, a5);
    func_02056bc0(p, node);
    q = func_0205681c(0x8c);
    node = q;
    if (q != 0) {
        node = func_02075540(q, self[16]);
    }
    func_02056bc0(p, node);
    return p;
}
