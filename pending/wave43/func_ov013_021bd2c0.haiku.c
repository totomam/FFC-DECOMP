#include "ffc/types.h"

extern uint32_t *data_0213df20;
extern char data_020b0b68[];
extern char data_020b0b54[];

extern uint32_t func_02060eb4(uint32_t);
extern void *func_0205681c(uint32_t);
extern void *func_02056f0c(void *, uint32_t);
extern uint32_t func_0203c22c(void);
extern uint32_t func_0203c21c(void);
extern uint32_t func_020611bc(uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_02087620(void *);
extern void func_02056bc0(void *, void *);

typedef struct Obj {
    uint32_t w0, w4, w8, wc;
    uint8_t b10, b11, b12;
    uint32_t w14;
    uint32_t *p18;
    uint32_t tail[7];
} Obj;

void *func_ov013_021bd2c0(void)
{
    uint32_t r4, r6;
    Obj *o;

    if (func_02060eb4(data_0213df20[9]) == 0) {
        o = func_0205681c(0x18);
        if (o != 0) {
            return func_02056f0c(o, 0);
        }
        return o;
    }
    r6 = func_020611bc(func_0203c22c(), 30, 0, 0);
    r4 = func_020611bc(func_0203c21c(), 30, 0, 0);
    o = func_0205681c(0x34);
    if (o != 0) {
        o->wc &= ~0xffu;
        o->w0 = (uint32_t)data_020b0b68;
        func_02087620(&o->tail);
        o->b10 = (uint8_t)(o->b10 & ~0xffu);
        o->b11 = (uint8_t)(o->b11 & ~0xffu);
        o->b12 = (uint8_t)(o->b12 & ~0xffu);
        o->w14 = 0;
        o->p18 = &o->w14;
        o->w0 = (uint32_t)data_020b0b54;
        o->b11 = (uint8_t)((o->b11 & ~0xffu) | 1u);
    }
    func_02056bc0(o, (void *)r4);
    func_02056bc0(o, (void *)r6);
    return o;
}
