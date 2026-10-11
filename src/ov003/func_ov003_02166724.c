#include "ffc/types.h"

extern uint16_t func_ov003_021481c0(uint16_t x);
extern void *func_020424e0(void *p);
extern uint32_t func_ov003_021464f4(void *p, uint16_t v);
extern void func_ov003_02156938(void);

void func_ov003_02166724(uint8_t *p) {
    uint16_t v;
    *(uint16_t *)(p + 0x18) = func_ov003_021481c0(*(uint16_t *)(p + 0x18));
    v = *(uint16_t *)(p + 0x18);
    if (v != 0) {
        void *r = func_020424e0(*(void **)(p + 0x14));
        if (func_ov003_021464f4(r, v) != 0) {
            func_ov003_02156938();
        }
    }
}
