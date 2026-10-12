#include "ffc/types.h"

extern void func_020735fc(void *a, void *b, void *c);
extern void func_02073708(void *a);
extern void func_02073674(void *a, void *b);
extern void func_02072638(void *a);
extern uint32_t func_ov000_0215b490(void);
extern void func_ov000_0215c1c8(int a, void *b, void *c);
extern void func_0207259c(void);
extern uint8_t data_020b2558[];
extern uint8_t data_020b2564[];

void func_0207268c(uint8_t *p0)
{
    uint32_t state = *(uint32_t *)(p0 + 0x94);
    switch (state) {
    case 0:
        func_020735fc(*(void **)(p0 + 0x80), data_020b2558, data_020b2564);
        func_02073708(*(void **)(p0 + 0x80));
        func_02073674(*(void **)(p0 + 0x80), *(void **)(p0 + 0x88));
        func_02072638(p0);
        *(uint32_t *)(p0 + 0x94) = 1;
        return;
    case 1:
        if (*(uint8_t *)(*(uint8_t **)(p0 + 0x80) + 0x22) != 0 ||
            *(uint32_t *)(p0 + 0x9c) == 0) {
            *(uint32_t *)(p0 + 0x94) = 3;
            return;
        }
        {
            uint32_t v = func_ov000_0215b490();
            if (*(uint32_t *)(p0 + 0x98) == v) {
                return;
            }
        }
        *(uint32_t *)(p0 + 0x98) = func_ov000_0215b490();
        return;
    case 3:
        *(uint32_t *)(p0 + 0xc) = (*(uint32_t *)(p0 + 0xc) & ~0xffu) | 2;
        return;
    case 2:
        func_ov000_0215c1c8(1, (void *)func_0207259c, *(void **)(p0 + 0x80));
        *(uint8_t *)(*(uint8_t **)(p0 + 0x80) + 0x21) = 1;
        {
            uint8_t v = (uint8_t)func_ov000_0215b490();
            *(uint8_t *)(*(uint8_t **)(p0 + 0x80) + 0x25) = v;
        }
        *(uint32_t *)(p0 + 0xc) = (*(uint32_t *)(p0 + 0xc) & ~0xffu) | 2;
        return;
    }
}
