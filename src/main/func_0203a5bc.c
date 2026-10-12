#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_0203a1c4(void *obj, uint32_t a, void *b);
extern void func_020397d8(void *data, void *r, void *p);
extern uint8_t data_021395dc;

void func_0203a5bc(uint8_t *p) {
    if (p[0x80] == 0) {
        void *r = func_0205681c(0xf8);
        if (r != 0) {
            r = func_0203a1c4(r, *(uint32_t *)(p + 0x84), p + 0x88);
        }
        func_020397d8(&data_021395dc, r, p);
        p[0x80] = 1;
    } else {
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
    }
}
