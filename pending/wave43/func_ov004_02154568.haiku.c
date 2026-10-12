#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov004_0214d934(void *obj, uint8_t *a, uint32_t p2, uint32_t p3,
    uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3, uint32_t s4, uint32_t s5,
    uint32_t s6, uint32_t s7, uint32_t s8, uint32_t s9, uint32_t s10, uint32_t s11,
    uint32_t s12);
extern void func_02056bc0(void *object, void *node);

void func_ov004_02154568(uint8_t *a) {
    void *r4;

    r4 = func_0205681c(0x198);
    if (r4 != 0) {
        r4 = func_ov004_0214d934(r4, a,
            *(uint32_t *)(a + 0x218),
            *(uint32_t *)(a + 0xb4),
            *(uint32_t *)(a + 0xc0),
            *(uint32_t *)(a + 0xa8),
            *(uint8_t *)(a + 0xc8),
            *(uint32_t *)(a + 0xb8),
            *(uint32_t *)(a + 0xc4),
            *(uint32_t *)(a + 0xac),
            *(uint8_t *)(a + 0xc9),
            *(uint8_t *)(a + 0xca),
            *(uint8_t *)(a + 0xcc),
            *(uint32_t *)(a + 0xd0),
            *(uint32_t *)(a + 0xd4),
            *(uint32_t *)(a + 0xd8),
            *(uint32_t *)(a + 0x380));
    }
    if ((int8_t)*(uint32_t *)((uint8_t *)r4 + 0xc) == 0) {
        typedef struct Obj { void (**vt)(void *); } Obj;
        void *self = r4;
        ((Obj *)self)->vt[2](self);
    }
    *(void **)(a + 0xe4) = r4;
    func_02056bc0(*(void **)(a + 0x214), r4);
}
