#include "ffc/types.h"

extern uint8_t data_021414f4[];
extern uint8_t data_02141514[];
extern uint8_t data_021415e0[];
extern uint8_t data_02fe0000[];
extern uint8_t data_02141660[];
extern uint8_t data_02141510[];
extern uint8_t data_02141520[];
extern uint8_t data_02141768[];
extern void func_0208727c(void);
extern uint32_t func_02087260(uint32_t value);
extern void func_02086dcc(void *a, void *fn, uint32_t b, void *c, uint32_t d, uint32_t e);

void func_02086ce8(void) {
    volatile int32_t n = 0xa00;
    uint32_t r3;
    uint32_t r2;

    if (*(uint32_t *)(data_021414f4 + 0xc) != 0) {
        return;
    }
    *(uint32_t *)(data_021414f4 + 0xc) = 1;
    *(uint8_t **)(data_021414f4 + 0x8) = data_02141514;
    *(uint32_t *)(data_021415e0 + 0x70) = 0x10;
    *(uint32_t *)(data_021415e0 + 0x6c) = 0;
    *(uint32_t *)(data_021415e0 + 0x64) = 1;
    *(uint32_t *)(data_021415e0 + 0x68) = 0;
    *(uint32_t *)(data_021415e0 + 0x74) = 0;
    *(uint8_t **)(data_021414f4 + 0x24) = data_021415e0;
    *(uint8_t **)(data_021414f4 + 0x20) = data_021415e0;

    if (n > 0) {
        r3 = (uint32_t)(data_02fe0000 + (0xfe << 6)) - 0x800 - n;
    } else {
        r3 = 0x2fe0560 - n;
    }
    r2 = (uint32_t)(data_02fe0000 + (0xfe << 6)) - 0x800;
    *(uint32_t *)(data_02141660 + 0x14) = r2;
    *(uint32_t *)(data_02141660 + 0x10) = r3;
    *(uint32_t *)(data_02141660 + 0x18) = 0;
    *(uint32_t *)(r2 - 8) = 0xfddb597d;
    **(uint32_t **)(data_02141660 + 0x10) = 0x7bf9dd5b;
    *(uint32_t *)(data_02141660 + 0x20) = 0;
    *(uint32_t *)(data_02141660 + 0x1c) = 0;
    *(uint16_t *)(data_021414f4 + 0x1c) = 0;
    *(uint16_t *)(data_021414f4 + 0x1e) = 0;
    *(uint8_t **)0x2ffffa0 = data_02141510;
    func_02087260(0);
    func_02086dcc(data_02141520, (void *)func_0208727c, 0, data_02141768, 0x1f, 0xc8);
    *(uint32_t *)(data_02141520 + 0x70) = 0x20;
    *(uint32_t *)(data_02141520 + 0x64) = 1;
}
