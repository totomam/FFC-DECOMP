#include "ffc/types.h"

extern int func_ov009_021ad7d8(void *p);
extern void func_02021338(uint32_t x);
extern void func_ov009_021a47ac(void *p, uint8_t v);
extern void func_02036b3c(void *p, uint8_t v);
extern uint32_t func_0201b924(const void *object);
extern void func_0201f1a8(void *obj, uint32_t a, void *b);
extern void *data_020b93b8;

void func_ov010_021c9c1c(uint8_t *p) {
    if (func_ov009_021ad7d8(p)) {
        func_02021338(0xbb);
        func_ov009_021a47ac(p, p[0x278]);
        func_02036b3c(p + 0x220, p[0x278]);
        func_0201f1a8(data_020b93b8, func_0201b924(data_020b93b8), p + 0x220);
    }
}
