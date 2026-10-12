#include "ffc/types.h"

extern uint32_t func_0203b708(uint32_t x);
extern void func_02056bc0(void *object, void *node);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern uint32_t func_ov007_021b1df0(void *self, Pair p);
extern void func_02021338(uint32_t x);
extern void func_ov007_021b1330(void *self);
extern uint32_t data_ov007_021c5f64[];

void func_ov007_021b1cd8(void *self_, void *node) {
    uint8_t *self = (uint8_t *)self_;
    uint8_t *n = (uint8_t *)node;
    uint32_t r;

    if (node == *(void **)(self + 0xf8)) {
        *(uint32_t *)(self + 0x108) = 0;
        r = func_0203b708(30);
        func_02056bc0(self + 0x14, (void *)r);
        r = func_ov007_021b1df0(self, *(Pair *)data_ov007_021c5f64);
        func_02056bc0(self + 0x14, (void *)r);
        return;
    }
    if (node == *(void **)(self + 0xf4)) {
        func_02021338(0xcf);
        *(uint32_t *)(*(uint8_t **)(self + 0xbc)) = 2;
        func_ov007_021b1330(self);
        return;
    }
    if (n != 0 &&
        *(uint32_t *)(n + 0x94) == 0xa21b58b6 &&
        *(uint32_t *)(n + 0x98) == 0x50534357 &&
        *(uint32_t *)(n + 0x9c) == 0x5a1bb469) {
        if ((self + *(uint32_t *)(n + 0xa4))[0xfc] != 0xff) {
            r = *(uint32_t *)(n + 0xb8);
            if (r == 1) {
                func_02021338(0xcf);
                *(uint32_t *)(*(uint8_t **)(self + 0xbc)) = 4;
                *(uint32_t *)(*(uint8_t **)(self + 0xc0)) = (self + *(uint32_t *)(n + 0xa4))[0xfc];
                func_ov007_021b1330(self);
                return;
            }
            if (r == 2) {
                func_02021338(0xcf);
                *(uint32_t *)(*(uint8_t **)(self + 0xbc)) = 1;
                *(uint32_t *)(*(uint8_t **)(self + 0xc0)) = (self + *(uint32_t *)(n + 0xa4))[0xfc];
                func_ov007_021b1330(self);
                return;
            }
            func_02021338(0xc7);
            return;
        }
        return;
    }
    func_02021338(0xcf);
}
