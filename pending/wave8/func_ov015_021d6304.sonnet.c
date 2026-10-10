/* cflags: -nothumb */
#include "ffc/types.h"
extern uint32_t DSProt_BSS_ov015;
extern uint32_t func_ov015_021d6768(void);
uint32_t func_ov015_021d6304(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3)
{
    uint32_t *p = (uint32_t *)(a0 & 0xffffff);
    uint32_t n = a1 & 0x3f;
    uint32_t acc = 0;
    uint32_t v;
    do {
        v = *p;
        if ((v >> 24) != 0xea && (v >> 24) != 0xeb) {
            acc ^= (v >> 17) | (v << 15);
            acc += (v >> 28) | (v << 4);
            acc ^= (v >> n) | (v << (32 - n));
        }
        n--;
        p++;
    } while (n != 0);
    if (n == 0) {
        return acc;
    }
    return func_ov015_021d6768();
}
