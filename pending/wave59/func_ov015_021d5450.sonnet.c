/* cflags: -nothumb */
#include "ffc/types.h"
extern uint32_t DSProt_BSS_ov015;
void func_ov015_021d5450(void) {
    uint32_t *p = (uint32_t *)(DSProt_BSS_ov015 & 0x3ffffff);
    uint32_t n = DSProt_BSS_ov015 >> 26;
    uint32_t h = 0;
    do {
        uint32_t v = *p++;
        if ((v >> 24) != 0xea && (v >> 24) != 0xeb) {
            h ^= (v >> 17) | (v << 15);
            h += (v >> 28) | (v << 4);
            h ^= (v >> n) | (v << (32 - n));
        }
    } while (--n != 0);
}
