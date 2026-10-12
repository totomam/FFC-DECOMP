#include "ffc/types.h"

extern void *func_020548b4(void *object, uint32_t first, uint32_t second);
extern void func_02087620(void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_0204e604(void *a, void *b, void *c);
extern uint8_t data_020b0378[];
extern uint8_t data_020b038c[];
extern uint8_t data_0209e97c[];
extern uint8_t data_0209ea0c[];
extern uint8_t data_0213df10[];

void *func_0204f494(void *p)
{
    uint8_t *s = (uint8_t *)p;
    uint32_t i;
    void *r;

    func_020548b4(p, 0, 1);
    *(void **)(s + 0x00) = data_020b0378;
    *(void **)(s + 0x14) = data_020b038c;
    for (i = 0; i < 4; i++) {
        *(uint32_t *)(s + 0x64 + i * 4) = 0;
    }
    func_02087620(s + 0x7c);
    *(uint32_t *)(s + 0x94) = 0;
    *(uint16_t *)(s + 0x5c) = *(uint16_t *)0x04000304;
    *(uint32_t *)(s + 0x74) = 0;
    *(uint8_t *)(s + 0x78) = 0;
    for (i = 0; i < 10; i++) {
        *(uint8_t *)(s + 0x28 + i) = 0;
    }
    for (i = 0; i < 10; i++) {
        *(uint8_t *)(s + 0x34 + i * 4) = 0;
    }
    r = func_0205681c(0xb4);
    if (r != 0) {
        r = func_0204e604(r, p, data_0209e97c);
    }
    *(void **)(s + 0x20) = r;
    r = func_0205681c(0xb4);
    if (r != 0) {
        r = func_0204e604(r, p, data_0209ea0c);
    }
    *(void **)(s + 0x24) = r;
    *(void **)(data_0213df10 + 0x10) = *(void **)(s + 0x20);
    return p;
}
