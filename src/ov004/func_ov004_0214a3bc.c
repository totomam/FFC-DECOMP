#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02021338(uint32_t x);
extern void func_ov004_02151454(uint32_t a, uint32_t b);
extern Pair data_ov004_02158c94;

void func_ov004_0214a3bc(uint8_t *p) {
    uint32_t old;

    func_02021338(0x82);
    func_ov004_02151454(*(uint32_t *)(p + 0x88), *(uint32_t *)(p + 0x90));
    old = *(uint32_t *)(p + 0x98);
    *(uint32_t *)(p + 0x98) = *(uint32_t *)(p + 0x98) + 1;
    if (old >= 0x1e) {
        *(Pair *)(p + 0x80) = data_ov004_02158c94;
    }
}
