/* cflags: -nothumb */
#include "ffc/types.h"
extern uint8_t DSProt_BSS_ov015[];
extern void func_ov015_021d6768(void);
void func_ov015_021d7604(void) {
    uint32_t v = *(uint32_t*)(DSProt_BSS_ov015 + 0x14);
    uint32_t n = v >> 26;
    uint32_t *p = (uint32_t*)((v << 6) >> 6);
    uint32_t h = 0;
    do {
        uint32_t w = *p++;
        uint32_t t = w >> 24;
        if (t != 0xea && t != 0xeb) {
            h ^= (w >> 17) | (w << 15);
            h += (w >> 28) | (w << 4);
            h ^= (w >> n) | (w << (32 - n));
        }
    } while (--n != 0);
    *(uint32_t*)(DSProt_BSS_ov015 + 0x20) = h;
}
