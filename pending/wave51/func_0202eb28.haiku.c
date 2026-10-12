#include "ffc/types.h"

extern void *func_02056830(uint32_t size);
extern void func_02056858(void *p);
extern void func_0202e570(void *a);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void func_02092924(void *buf, uint32_t x);
extern void func_0202f9e4(void *a, uint32_t b, void *c, uint32_t d, void *e, uint32_t f, uint32_t g);
extern uint8_t data_020add5c[];
extern uint8_t data_020add44[];
extern uint8_t data_020add64[];
extern uint8_t data_020add34[];

void func_0202eb28(void *a, uint32_t b, uint32_t c) {
    uint32_t n;
    uint8_t *src;
    uint8_t *dst;
    uint8_t buf[128];
    void *p;
    void *tag;

    p = func_02056830(0x200);
    func_0202e570(a);
    if (c != 0) {
        tag = data_020add5c;
    } else {
        tag = data_020add44;
    }
    func_02091b10(p, (uint32_t)data_020add64, b, tag);
    src = data_020add34;
    dst = buf;
    n = 15;
    do {
        *dst = *src;
        src++;
        dst++;
        n--;
    } while (n != 0);
    func_02092924(buf, b);
    func_0202f9e4(a, b, p, *(uint32_t *)((uint8_t *)a + 0x9c), data_020add34, 0, 0);
    if (p != 0) {
        func_02056858(p);
    }
}
