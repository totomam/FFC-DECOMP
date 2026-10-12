#include "ffc/types.h"

extern int32_t func_ov000_0215981c(void *p);
extern void func_ov000_021591a8(int32_t a, int32_t b, int32_t c);
extern void func_ov000_02159d14(void);
extern int32_t func_ov000_02154ed0(void *e);
extern int32_t func_ov000_0215a638(void);
extern int32_t func_ov000_021553c4(int32_t v, void *e);
extern int32_t func_ov000_02154ea0(void *e);
extern void func_ov000_02154f24(void *e, int32_t v);
extern int32_t func_ov000_02154e58(void *e);
extern void func_ov000_02154f48(void *e, int32_t v);
extern uint8_t data_ov000_0217004c[];

void func_ov000_0215a3f4(void *p, uint8_t *b)
{
    int32_t j;
    volatile int32_t i;
    int32_t off;
    int32_t v;

    if (func_ov000_0215981c(p) == 0) {
        return;
    }
    v = *(int32_t *)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x5c);
    if (v != 0) {
        func_ov000_021591a8(4, v, 0);
        *(int32_t *)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x5c) = 0;
    }
    if (*(int32_t *)b != 0) {
        func_ov000_02159d14();
        return;
    }
    i = 0;
    while (i < *(int32_t *)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x14)) {
        off = i * 12;
        if (func_ov000_02154ed0(*(uint8_t **)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x18) + off) == 3) {
            for (j = 0; j < *(int32_t *)(b + 4); j++) {
                func_ov000_0215a638();
                if (func_ov000_021553c4(0, *(uint8_t **)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x18) + off) ==
                    *(int32_t *)(*(uint8_t **)(b + 8) + j * 0x1c)) {
                    if (func_ov000_02154ea0(*(uint8_t **)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x18) + off) == 0) {
                        (*(uint8_t **)(data_ov000_0217004c + 0xc))[0x1d] = 1;
                        func_ov000_02154f24(*(uint8_t **)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x18) + i * 12, 1);
                        if (func_ov000_02154e58(*(uint8_t **)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x18) + i * 12)) {
                            func_ov000_02154f48(*(uint8_t **)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x18) + off, 1);
                        }
                    }
                    break;
                }
            }
            if (j == *(int32_t *)(b + 4)) {
                if (func_ov000_02154ea0(*(uint8_t **)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x18) + off) == 1) {
                    (*(uint8_t **)(data_ov000_0217004c + 0xc))[0x1d] = 1;
                    func_ov000_02154f24(*(uint8_t **)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x18) + off, 0);
                }
            }
            if (func_ov000_02154e58(*(uint8_t **)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x18) + off)) {
                func_ov000_02154f48(*(uint8_t **)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x18) + off, 1);
            }
        }
        i = i + 1;
    }
    func_ov000_02159d14();
}
