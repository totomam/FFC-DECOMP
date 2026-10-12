#include "ffc/types.h"

extern int32_t func_0200c6b8(uint32_t x);
extern void func_0200c7bc(uint32_t x);
extern uint32_t data_020aafdc[2];
extern uint32_t data_020aafe4[2];
extern uint32_t data_020aafec[2];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_0200aff8(uint8_t *p)
{
    if (func_0200c6b8(*(uint32_t *)(p + 0x88)) != 0) {
        if (*(uint32_t *)(p + 0xa4) != 0) {
            *(Pair *)(p + 0x80) = *(Pair *)data_020aafdc;
            return;
        }
        if (*(uint32_t *)(p + 0xa8) != 0) {
            *(Pair *)(p + 0x80) = *(Pair *)data_020aafe4;
            return;
        }
        *(Pair *)(p + 0x80) = *(Pair *)data_020aafec;
        return;
    }
    func_0200c7bc(*(uint32_t *)(p + 0x88));
    *(uint32_t *)(p + 0x9c) = 0;
    *(uint32_t *)(p + 0x158) = 5;
}
