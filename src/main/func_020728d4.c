#include "ffc/types.h"

extern void func_020735fc(void *obj, void *a, void *b);
extern void func_02073708(void *obj);
extern void func_02073674(void *obj, uint32_t v);
extern void func_02072878(uint8_t *p);
extern uint32_t func_ov000_0215b490(void);
extern void func_ov000_0215c1c8(uint32_t a, void (*fn)(void), void *obj);
extern uint8_t data_020b2558;
extern uint8_t data_020b2570;
extern void func_0207259c(void);

void func_020728d4(uint8_t *p) {
    switch (*(uint32_t *)(p + 0xa0)) {
    case 0:
        func_020735fc(*(void **)(p + 0x80), &data_020b2558, &data_020b2570);
        func_02073708(*(void **)(p + 0x80));
        func_02073674(*(void **)(p + 0x80), 0);
        func_02072878(p);
        *(uint32_t *)(p + 0xa0) = 1;
        return;
    case 1:
        if (*(uint8_t *)(*(uint8_t **)(p + 0x80) + 0x22) != 0 || *(void **)(p + 0xa8) == 0) {
            *(uint32_t *)(p + 0xa0) = 3;
            return;
        }
        if (*(uint32_t *)(p + 0xa4) == func_ov000_0215b490())
            return;
        *(uint32_t *)(p + 0xa4) = func_ov000_0215b490();
        return;
    case 3:
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
        return;
    case 2:
        func_ov000_0215c1c8(1, func_0207259c, *(void **)(p + 0x80));
        *(uint8_t *)(*(uint8_t **)(p + 0x80) + 0x21) = 1;
        *(uint8_t *)(*(uint8_t **)(p + 0x80) + 0x25) = (uint8_t)func_ov000_0215b490();
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
        return;
    default:
        return;
    }
}
