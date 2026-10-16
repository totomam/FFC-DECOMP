/* cflags: -nothumb */
#include "ffc/types.h"
extern uint32_t DSProt_BSS_ov016;
void func_ov016_02146278(void) {
    uint32_t *p = (uint32_t*)(DSProt_BSS_ov016 & 0x3ffffff);
    uint32_t n = DSProt_BSS_ov016 >> 26;
    uint32_t h = 0;
    do {
        uint32_t v = *p++;
        uint32_t t = v >> 24;
        if (t != 0xea && t != 0xeb) {
            h ^= (v >> 15) | (v << 17);
            h += (v >> 28) | (v << 4);
            h ^= (v >> n) | (v << (32 - n));
        }
    } while (--n != 0);
}
