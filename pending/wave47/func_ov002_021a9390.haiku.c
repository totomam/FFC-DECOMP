#include "ffc/types.h"

extern uint32_t func_ov002_021a1af0(void *obj);
extern uint32_t func_ov002_021a16d4(const void *object);
extern uint32_t func_ov002_02195fa4(uint32_t x);
extern uint32_t func_ov002_02198700(uint32_t x, uint32_t y);
extern uint32_t func_ov002_021aa820(uint32_t x);
extern void func_ov002_021aa954(uint32_t x, uint32_t y);
extern uint32_t func_ov002_0219fff8(void *obj, uint32_t *arr, uint32_t n, uint32_t z, uint32_t w);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov002_021c9298(uint32_t i);
extern uint32_t func_02055a2c(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021c91dc(uint32_t i);
extern uint32_t func_ov002_021a464c(void *obj, uint32_t x);

void func_ov002_021a9390(void *obj, uint8_t *p) {

    uint32_t arr[6];
    uint32_t flag = 1;
    uint32_t v;
    int i;

    if (func_ov002_021a1af0(obj)) {
        v = func_ov002_02198700(func_ov002_02195fa4(func_ov002_021a16d4(obj)), *(uint32_t *)(p + 8));
        if (func_ov002_021aa820(v)) {
            flag = 0;
        }
    }
    if (*(uint32_t *)(p + 0x20)) {
        flag = 0;
    }
    v = func_ov002_02198700(func_ov002_02195fa4(func_ov002_021a16d4(obj)), *(uint32_t *)(p + 4));
    if (v) {
        if (*(uint32_t *)(p + 0x2c) != 1) {
            func_ov002_021aa954(v, 1);
        }
    }
    for (i = 0; i < 6; i++) {
        arr[i] = 0;
    }
    {
        uint32_t z;
        v = func_ov002_0219fff8(obj, arr, 0, z, *(uint32_t *)(p + 4));
    }
    func_02056bc0((uint8_t *)obj + 0x14, (void *)v);
    v = func_02055a2c(*(uint32_t *)((uint8_t *)obj + 0xf0), func_ov002_021c9298(0));
    func_02056bc0((uint8_t *)obj + 0x14, (void *)v);
    if (flag) {
        v = func_02055a2c(*(uint32_t *)((uint8_t *)obj + 0xf0), func_ov002_021c91dc(0));
        func_02056bc0((uint8_t *)obj + 0x14, (void *)v);
    }
    v = func_ov002_021a464c(obj, 0);
    func_02056bc0((uint8_t *)obj + 0x14, (void *)v);
}
