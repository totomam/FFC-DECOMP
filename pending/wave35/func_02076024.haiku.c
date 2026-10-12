#include "ffc/types.h"

extern void *data_0213e1f8;
extern uint32_t func_02073898(uint32_t v);
extern void func_02075ca4(uint8_t *p);
extern void func_02075f04(uint8_t *p);
extern void func_02075fb4(uint8_t *p);
extern void func_02074cc8(void *a, uint32_t b, uint32_t c, uint32_t d);

void func_02076024(uint8_t *p) {
    if (data_0213e1f8 == 0 ||
        func_02073898(*(uint32_t *)((uint8_t *)*(void **)((uint8_t *)data_0213e1f8 + 0x40) + 0x2c)) == 0) {
        *(uint32_t *)(p + 0x4c) = 0;
        return;
    }
    if (*(uint32_t *)(p + 0x4c) == 0) {
        func_02075ca4(p);
    }
    func_02075f04(p);
    func_02075fb4(p);
    {
        uint32_t c = *(uint32_t *)(p + 0x58);
        *(uint32_t *)(p + 0x58) = c + 1;
        if ((c & 0xf) == 0) {
            func_02074cc8(*(void **)((uint8_t *)data_0213e1f8 + 0x40), 0, 0, 1);
        }
    }
}
