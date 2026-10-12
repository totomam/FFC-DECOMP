#include "ffc/types.h"

extern int32_t func_02024a80(uint8_t *a, void *b, void *c);
extern void func_02080a40(void *p);
extern void func_02080d08(void *a, void *b, void *c);
extern void func_02024010(uint8_t *a, void *b, int32_t c);
extern void func_02080a6c(void *a, void *b);
extern void func_02080894(void *a, void *b, void *c);

int32_t func_02024abc(uint8_t *a, void *b, void *c) {
    uint8_t tb0[0xc];
    uint8_t t70[0x40];
    uint8_t t30[0x40];
    uint8_t t0[0x30];

    if (func_02024a80(a, b, tb0)) {
        func_02080a40(t70);
        if (*(void **)(a + 0xd0) != 0) {
            func_02080d08(*(void **)(a + 0xd0), t70, t70);
        }
        func_02024010(a, t30, 1);
        func_02080d08(t30, t70, t70);
        func_02080a6c(t70, t0);
        func_02080894(tb0, t0, c);
        return 1;
    }
    return 0;
}
