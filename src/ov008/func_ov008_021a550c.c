#include "ffc/types.h"

extern uint32_t func_ov008_021a2090(void *obj);
extern void func_02021338(uint32_t id);
extern uint32_t func_020655dc(void *obj, uint32_t a, uint32_t b);
extern uint32_t func_020655b8(void *obj);
extern void func_02056bc0(void *object, void *node);

typedef struct VT {
    char pad[0x38];
    void (*m38)(void *self, int a, int b);
} VT;

void func_ov008_021a550c(uint8_t *self) {
    void *obj = *(void **)(self + 0x94);
    if (func_ov008_021a2090(obj) != 0) {
        func_02021338(0xbc);
        void *o = *(void **)(self + 0x98);
        ((VT *)*(void **)o)->m38(o, 3, 1);
        o = *(void **)(self + 0x98);
        uint32_t r4 = func_020655dc(o, 2, 0);
        o = *(void **)(self + 0x98);
        uint32_t r1 = func_020655b8(o);
        uint8_t *q = self + 0x14;
        func_02056bc0(q, (void *)r1);
        func_02056bc0(q, (void *)r4);
    }
}
