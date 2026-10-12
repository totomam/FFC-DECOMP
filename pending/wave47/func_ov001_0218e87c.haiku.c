#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern void func_02005988(uint32_t *obj, uint32_t v);
extern void *func_02033094(void *a, uint32_t *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(uint32_t *object);
extern uint32_t data_020b8e44;

void func_ov001_0218e87c(uint8_t *p)
{
    uint32_t zero;
    void *obj;
    int flag;

    if (*(uint32_t *)(p + 0x88) != 0) {
        return;
    }
    (*(uint32_t *)(p + 0x88))++;

    if (*(uint32_t *)(p + 0x80) != 0) {
        volatile uint32_t v60;
        volatile uint32_t v80;
        uint32_t sB[3];
        uint32_t sA[3];
        zero = 0;
        flag = 0;
        obj = func_0205681c(0xa4);
        if (obj != 0) {
            v80 = 0x80;
            v60 = 0x60;
            func_02005988(sA, func_020159c8(data_020b8e44, *(uint32_t *)(p + 0x80)));
            obj = func_02033094(obj, sA, zero, v80, v60, 4, zero);
            flag = 1;
        }
        func_02056bc0(p + 0x48, obj);
        if (flag) {
            func_020059cc(sA);
        }
    } else {
        volatile uint32_t w80;
        volatile uint32_t w60;
        uint32_t sB[3];
        zero = 0;
        flag = 0;
        obj = func_0205681c(0xa4);
        if (obj != 0) {
            w80 = 0x80;
            w60 = 0x60;
            func_02005988(sB, *(uint32_t *)(p + 0x84));
            obj = func_02033094(obj, sB, zero, w80, w60, 4, zero);
            flag = 1;
        }
        func_02056bc0(p + 0x48, obj);
        if (flag) {
            func_020059cc(sB);
        }
    }
}
