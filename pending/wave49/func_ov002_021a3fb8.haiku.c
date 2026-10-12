#include "ffc/types.h"

extern void func_ov002_021a3924(void *self);
extern void *func_ov002_02196414(void *object);
extern uint32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021c85f8(void *p);
extern void *func_0203b688(void);
extern void func_ov002_02195fa4(void *x);
extern void func_ov002_02198760(void);
extern void *func_0205681c(uint32_t size);
extern void *func_02055a2c(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203b6fc(void);
extern uint32_t func_0203bd04(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_ov002_021a41ec(void *self);
extern void *func_ov002_021a15d0(void *self);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern uint32_t func_ov002_021aaffc(const void *object);
extern uint32_t func_ov002_021c91b4(uint32_t x);
extern uint32_t func_ov002_0219acac(void *x, uint32_t y);
extern void *func_ov002_021ab340(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_020ab9b8;
extern uint32_t data_020ab938;

void *func_ov002_021a3fb8(uint8_t *self, uint32_t param) {
    uint8_t *r5;
    uint32_t r7;
    void *r6;
    uint32_t idx;
    uint32_t a8, a4, p4;

    func_ov002_021a3924(self);
    r7 = 0;
    r5 = func_ov002_02196414(*(void **)(self + 0xf4));
    if (func_ov002_021a18bc(self) == 0) {
        r7 = 1;
    }
    if (r5[0x30c]) {
        idx = func_ov002_021c85f8(self + 0x144);
        if (((uint32_t *)(r5 + idx * 4))[1] == 1) {
            r7 = 1;
        }
    }
    r6 = func_0203b688();
    if (r7) {
        func_ov002_02195fa4(*(void **)(self + 0xf4));
        func_ov002_02198760();
        r5 = func_0205681c(0x18);
        if (r5 != 0) {
            idx = 1 - func_ov002_021c85f8(self + 0x144);
            ((uint32_t *)r5)[2] = 0;
            ((uint32_t *)r5)[3] = 0x100e5;
            ((uint32_t *)r5)[0] = (uint32_t)&data_020ab9b8;
            ((uint32_t *)r5)[4] = idx;
            r5[0x14] = 0;
            r5[0x15] = 0;
            r5[0x16] = 0;
        }
        a4 = (uint32_t)func_02055a2c(*(uint8_t **)(self + 0xfc) + 0x80, r5);
        func_02056bc0(r6, (void *)a4);
    }
    a8 = func_0203b6fc();
    a4 = func_0203bd04(0x10103, 0, 0, 1);
    func_02056bc0((void *)a8, (void *)a4);
    r5 = func_0205681c(0x1c);
    if (r5 != 0) {
        if (a4 != 0) {
            a4 += 0x14;
        }
        idx = func_ov002_021c85f8(self + 0x144);
        ((uint32_t *)r5)[2] = 0;
        ((uint32_t *)r5)[3] = 0x10102;
        ((uint32_t *)r5)[0] = (uint32_t)&data_020ab938;
        ((uint32_t *)r5)[4] = a4;
        ((uint32_t *)r5)[5] = idx;
        ((uint32_t *)r5)[6] = param;
    }
    a4 = (uint32_t)func_02055a2c(*(uint8_t **)(self + 0xf0), r5);
    func_02056bc0((void *)a8, (void *)a4);
    func_02056bc0(r6, (void *)a8);
    if (r7 == 0) {
        a4 = (uint32_t)func_ov002_021a41ec(self);
        func_02056bc0(r6, (void *)a4);
    }
    a4 = (uint32_t)func_ov002_021a15d0(self);
    func_02056bc0(r6, (void *)a4);
    if (func_ov002_021a18bc(self) == 1) {
        r7 = 0;
        r5 = (uint8_t *)func_ov002_021a18c4(self, r7);
        if (func_ov002_021aaffc(r5) != 0) {
            a4 = func_ov002_021c91b4(r7);
            a8 = func_ov002_0219acac(*(void **)(self + 0xf0), a4);
            func_02056bc0(r6, (void *)a8);
            p4 = func_0203b6fc();
            r7 = func_0203bd04(0x1011a, r7, r7, 1);
            a8 = r7;
            if (r7 != 0) {
                a8 += 0x14;
            }
            a4 = (uint32_t)func_ov002_021ab340((uint32_t)r5, a8, 1);
            func_02056bc0(p4, (void *)a4);
            func_02056bc0(p4, (void *)r7);
            func_02056bc0(r6, p4);
        }
    }
    return r6;
}
