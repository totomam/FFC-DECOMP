/* cflags: -nothumb */
#include "ffc/types.h"
extern uint32_t DSProt_BSS_ov015[];
void func_ov015_021d757c(void) {
    uint32_t *p = (uint32_t*)(DSProt_BSS_ov015[5] & 0x3ffffff);
    uint32_t n = DSProt_BSS_ov015[5] >> 26;
    uint32_t h = 0;
    do {
        uint32_t w = *p++;
        uint32_t t = w >> 24;
        if (t != 0xea && t != 0xeb) {
            h ^= (w >> 15) | (w << 17);
            h += (w >> 28) | (w << 4);
            h ^= (w >> n) | (w << (32 - n));
        }
    } while (--n != 0);
}
