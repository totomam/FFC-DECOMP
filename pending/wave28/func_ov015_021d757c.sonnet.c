/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t DSProt_BSS_ov015;
extern uint32_t g_packed_ov015;

void func_ov015_021d757c(void) {
    uint32_t packed = g_packed_ov015;
    uint32_t n = packed >> 26;
    uint32_t *p = (uint32_t *)((packed << 6) >> 6);
    uint32_t h = 0;
    do {
        uint32_t v = *p;
        uint32_t t = v >> 24;
        if (t != 0xea && t != 0xeb) {
            h ^= (v >> 17) | (v << 15);
            h += (v >> 28) | (v << 4);
            h ^= (v >> n) | (v << (32 - n));
        }
        n--;
        p++;
    } while (n != 0);
    DSProt_BSS_ov015 = h;
}
