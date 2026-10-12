#include "ffc/types.h"

extern void *func_0203b688(void);
extern void *func_020424e0(void *a);
extern void *func_ov003_0214de88(void *x, uint32_t b);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_0216674c(void *mem, void *a, uint16_t x2, uint16_t x3, uint32_t f6, uint32_t ca, uint16_t x4, uint32_t f1c);
extern void func_02056bc0(void *object, void *node);
extern void *func_02021610(void *x, uint32_t b);
extern uint32_t func_ov003_0214dea8(void *x, uint32_t b, uint32_t c);
extern void *func_ov003_02166918(void *mem, void *a, uint16_t x2, uint16_t x3);

void *func_ov003_0216c268(void *a, void *node)
{
    uint8_t *n = (uint8_t *)node;
    void *obj = func_0203b688();
    uint32_t off = *(uint32_t *)(n + 8);
    uint8_t *sub = n + off;
    uint32_t w0 = *(uint32_t *)sub;
    uint32_t w1 = *(uint32_t *)(sub + 4);
    uint32_t f6 = 1;
    uint32_t idx = 0;
    uint32_t f1c;
    uint32_t ca;
    void *child;
    uint32_t item;
    void *res;
    uint16_t type = *(uint16_t *)n;

    if (type != 0x7b && type != 0x7c) {
        f6 = 0;
    }
    if (type == 0x78 || type == 0x79 || type == 0x7c) {
        idx = 1;
    } else if (type == 0x7a) {
        idx = 2;
    }
    f1c = 1;
    if (type != 0x78 && type != 0x7a) {
        f1c = 0;
    }

    if (*(uint32_t *)(n + 4) <= idx + 2) {
        ca = 0x1000;
    } else {
        ca = *(uint32_t *)(sub + 8 + idx * 4);
    }

    if (*(uint32_t *)(n + 4) > idx + 3 && *(uint32_t *)(sub + 0xc + idx * 4) != 0) {
        child = 0;
    } else {
        child = func_ov003_0214de88(func_020424e0(a), w1);
    }

    if (*(uint32_t *)(n + 4) > idx + 4) {
        item = *(uint32_t *)(sub + 0x10 + idx * 4);
    } else {
        item = 0;
    }

    res = func_0205681c(0x90);
    if (res != 0) {
        res = func_ov003_0216674c(res, a, (uint16_t)w0, (uint16_t)w1, f6, ca, (uint16_t)item, f1c);
    }
    func_02056bc0(obj, res);

    if (child != 0) {
        res = func_02021610(child, 0);
        func_02056bc0(obj, res);
    }

    if (*(uint16_t *)n != 0x79 && *(uint16_t *)n != 0x7c && *(uint16_t *)n != 0x7a) {
        uint16_t k = (uint16_t)func_ov003_0214dea8(func_020424e0(a), w1, f6);
        res = func_0205681c(0x1c);
        if (res != 0) {
            res = func_ov003_02166918(res, a, (uint16_t)w0, k);
        }
        func_02056bc0(obj, res);
    }

    return obj;
}
