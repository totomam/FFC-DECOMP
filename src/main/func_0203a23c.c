#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_0203982c(void *a, void *b);
extern void func_020397e4(void *a, void *b);
extern uint8_t data_021395dc[];

int func_0203a23c(uint8_t *p) {
    uint32_t v = **(uint32_t **)(p + 0x8c);
    if (v != 0 && v == 1) {
        void *a = func_0205681c(0xb0);
        void *r = a;
        if (r != 0) {
            r = func_0203982c(a, p + 0x90);
        }
        func_020397e4(data_021395dc, r);
        if (*(uint32_t *)(p + 0x90) == 0) {
            *(uint32_t *)(p + 0x88) = 4;
        } else {
            *(uint32_t *)(p + 0x88) = 3;
            return 0;
        }
    }
    return 1;
}
