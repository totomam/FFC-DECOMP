#include "ffc/types.h"

extern void func_ov009_021a3370(void *a, uint32_t b, uint32_t c);
extern void func_ov009_021a3150(void *a, void *b, uint32_t c);
extern uint32_t data_ov011_021ca14c[];
extern uint8_t data_ov011_021cb448[];

void func_ov011_021c5b98(uint8_t *p) {
    if (*(void **)(p + 0xf0)) {
        uint32_t idx = p[0x117];
        func_ov009_021a3370(*(void **)(p + 0xf0), *(uint32_t *)(p + 0x100 + idx * 4), 0);
        idx = p[0x117];
        func_ov009_021a3150(*(void **)(p + 0xf0), data_ov011_021cb448, data_ov011_021ca14c[idx]);
    }
}
