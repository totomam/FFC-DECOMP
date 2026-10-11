/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t DSProt_BSS_ov015;
extern uint32_t DSProt_cfg[];
extern void func_ov015_021d6768(void);

static inline uint32_t ror32(uint32_t w, uint32_t n)
{
    n &= 31;
    return (w >> n) | (w << ((32 - n) & 31));
}

uint32_t func_ov015_021d7604(void)
{
    uint32_t v = DSProt_cfg[5];
    uint32_t n = v >> 26;
    uint32_t *p = (uint32_t *)(v & 0x03ffffff);
    uint32_t r3 = 0;
    uint32_t w;
    uint32_t top;

    do {
        w = *p;
        top = w >> 24;
        if (top != 0xea && top != 0xeb) {
            r3 ^= ror32(w, 17);
            r3 += ror32(w, 28);
            r3 ^= ror32(w, n);
        }
        n--;
        p++;
    } while (n != 0);

    DSProt_BSS_ov015 = r3;
    return r3;
}
