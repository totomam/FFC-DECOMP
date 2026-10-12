#include "ffc/types.h"

extern void func_020735fc(void *a, void *b, void *c);
extern void func_02073708(void *a);
extern void func_02073674(void *a, uint32_t b);
extern void func_02072d18(void *a);
extern uint32_t func_ov000_0215b490(void);
extern uint8_t data_020b2558[];
extern uint8_t data_020b2578[];

void func_02072d50(uint8_t *p) {
    switch (*(uint32_t *)(p + 0x90)) {
    case 0:
        func_020735fc(*(void **)(p + 0x80), data_020b2558, data_020b2578);
        func_02073708(*(void **)(p + 0x80));
        func_02073674(*(void **)(p + 0x80), 0);
        func_02072d18(p);
        *(uint32_t *)(p + 0x90) = 1;
        return;
    case 1:
        if (((uint8_t *)(*(uint32_t *)(p + 0x80)))[0x22] != 0 || *(uint32_t *)(p + 0x9c) == 0) {
            *(uint32_t *)(p + 0x90) = 3;
            return;
        }
        if (*(uint32_t *)(p + 0x98) == func_ov000_0215b490()) {
            return;
        }
        *(uint32_t *)(p + 0x98) = func_ov000_0215b490();
        return;
    case 3:
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
        return;
    case 2:
        ((uint8_t *)(*(uint32_t *)(p + 0x80)))[0x21] = 1;
        ((uint8_t *)(*(uint32_t *)(p + 0x80)))[0x25] = (uint8_t)func_ov000_0215b490();
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
        return;
    }
}
