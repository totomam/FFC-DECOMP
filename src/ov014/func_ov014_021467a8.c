/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t func_ov014_02148fa0(void *p);
extern void func_ov014_02149960(void *p);
extern void func_ov014_02146d2c(void *p, uint32_t v);
extern void func_ov014_02146d3c(void *p, uint32_t v, uint32_t c, uint32_t d);
extern void func_020849c4(uint32_t a, uint32_t b, uint32_t c);

#define P32(o) (*(uint32_t *)((uint8_t *)self + (o)))
#define P16(o) (*(uint16_t *)((uint8_t *)self + (o)))
#define CURP (*(uint32_t **)((uint8_t *)self + 0x34))
#define BASE (*(uint8_t **)((uint8_t *)self + 0x58))

int func_ov014_021467a8(void *self, uint32_t arg)
{
    if (P32(0xcc) == P32(0xc8)) {
        return 0;
    }
    if (P16(0x1c) == 0) {
        return 0;
    }

    if (P16(0x1c) == 1) {
        *(uint32_t *)(BASE + P32(0xd0) * 0x14f8) = *CURP;
        *(uint32_t *)(BASE + P32(0xd0) * 0x14f8 + 4) = arg;
        *CURP += func_ov014_02148fa0(BASE + P32(0xd0) * 0x14f8);
    } else if (P16(0x1c) == 2) {
        *(uint32_t *)(BASE + P32(0xd0) * 0x14f8) = *CURP;
        *(uint32_t *)(BASE + P32(0xd0) * 0x14f8 + 4) = arg;
        func_ov014_02149960(BASE + P32(0xd0) * 0x14f8);
        *CURP += 0x28;
    } else if (P16(0x1c) == 3) {
        if (P32(0xa4) == 1) {
            func_ov014_02146d2c(BASE + P32(0xd0) * 0x14f8, *CURP);
            *CURP += 4;
        }
        func_ov014_02146d3c(BASE + P32(0xd0) * 0x14f8, *CURP, 0x80, arg);
        *CURP += 0x80;
    } else {
        func_020849c4(*CURP, arg, 0x200);
        *CURP += 0x200;
    }

    {
        uint32_t d = P32(0xd0) + 1;
        uint32_t h = P16(0x1e);
        P32(0xd0) = d;
        if (d == h) {
            P32(0xd0) = 0;
            P32(0xa4) = 0;
        }
        P32(0xcc) = P32(0xcc) + 1;
    }
    return 1;
}
