#include "ffc/types.h"

typedef struct { uint32_t w, h; } S;
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern void func_02005988(uint32_t *obj, uint32_t v);
extern void *func_02033094(void *a, uint32_t *b, uint32_t c, S d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(uint32_t *object);
extern uint32_t data_020b8e44;

void func_ov001_0218e87c(uint8_t *p)
{
    void *obj;
    int flag; uint32_t zero = 0;

    if (*(uint32_t *)(p + 0x88) != 0) {
        return;
    }
    (*(uint32_t *)(p + 0x88))++;

    if (*(uint32_t *)(p + 0x80) != 0) {
        uint32_t sA[3];
        S sz;
        flag = 0;
        obj = func_0205681c(0xa4);
        if (obj != 0) {
            sz.w = 0x80;
            sz.h = 0x60;
            func_02005988(sA, func_020159c8(data_020b8e44, *(uint32_t *)(p + 0x80)));
            flag = 1;
            obj = func_02033094(obj, sA, zero, sz, 4, zero);
        }
        func_02056bc0(p + 0x48, obj);
        if (flag) {
            func_020059cc(sA);
        }
    } else {
        uint32_t sB[3];
        S sz;
        flag = 0;
        obj = func_0205681c(0xa4);
        if (obj != 0) {
            sz.w = 0x80;
            sz.h = 0x60;
            func_02005988(sB, *(uint32_t *)(p + 0x84));
            flag = 1;
            obj = func_02033094(obj, sB, zero, sz, 4, zero);
        }
        func_02056bc0(p + 0x48, obj);
        if (flag) {
            func_020059cc(sB);
        }
    }
}
