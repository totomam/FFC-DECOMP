#include "ffc/types.h"

extern void *func_020548b4(void *object, uint32_t first, uint32_t second);
extern void func_02087620(void *object);
extern uint32_t func_0205681c(uint32_t x);
extern uint32_t func_020730d4(uint32_t a, uint32_t b, uint32_t c);
extern void func_020735fc(uint32_t a, void *b, void *c);
extern void func_02084b2c(void *dst, uint32_t val, uint32_t size);
extern char data_020b2658[];
extern char data_020b266c[];
extern char data_020b267c[];
extern char data_020b268c[];

void *func_020748f0(void *obj, uint32_t a, uint32_t b) {
    uint32_t off;
    uint32_t v;
    uint32_t i;
    uint32_t j;

    func_020548b4(obj, 0, 0);
    *(uint32_t *)((uint8_t *)obj + 0x20) = a;
    *(char **)((uint8_t *)obj + 0x0) = data_020b2658;
    *(char **)((uint8_t *)obj + 0x14) = data_020b266c;
    off = 0x4238;
    *(uint32_t *)((uint8_t *)obj + 0x24) = b;
    *(uint32_t *)((uint8_t *)obj + 0x28) = 0;
    *(uint32_t *)((uint8_t *)obj + 0x2c) = 0;
    func_02087620((uint8_t *)obj + off);
    *(uint32_t *)((uint8_t *)obj + off + 0x18) = 0;
    *(uint32_t *)((uint8_t *)obj + off + 0x1c) = 0;
    *(uint32_t *)((uint8_t *)obj + off + 0x24) = 0;
    *(uint32_t *)((uint8_t *)obj + off + 0x2c) = 0;
    *(uint32_t *)((uint8_t *)obj + off + 0x34) = 0;

    v = func_0205681c(0x1ac);
    if (v != 0) {
        v = func_020730d4(v, *(uint32_t *)((uint8_t *)obj + 0x20), *(uint32_t *)((uint8_t *)obj + 0x24));
    }
    *(uint32_t *)((uint8_t *)obj + 0x2c) = v;
    func_020735fc(v, data_020b267c, data_020b268c);

    for (i = 0; i < 32; i++) {
        for (j = 0; j < 2; j++) {
            *(uint32_t *)((uint8_t *)obj + 0x30 + i * 4 + j * 0x80) = 0;
        }
        *(uint32_t *)((uint8_t *)obj + 0x4138 + i * 4) = 0;
        *(uint32_t *)((uint8_t *)obj + 0x41b8 + i * 4) = 0;
    }

    func_02084b2c((uint8_t *)obj + 0x130, 0, 0x4008);
    func_02084b2c((uint8_t *)obj + 0x4274, 0, 0x80);
    return obj;
}
