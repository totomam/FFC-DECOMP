/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t DSProt_BSS_ov016;
extern void func_ov016_02145b8c(void);

#define ROR(x, n) ((((x) >> (n)) | ((x) << ((32 - (n)) & 31))))

void func_ov016_02146278(void)
{
    uint32_t ip = DSProt_BSS_ov016;
    uint32_t cnt = ip >> 26;
    uint32_t *p = (uint32_t *)(ip & 0x03FFFFFF);
    uint32_t r3 = 0;
    uint32_t r2;
    uint32_t r4;

    do {
        r2 = *p;
        r4 = r2 >> 24;
        if (r4 != 0xEA && r4 != 0xEB) {
            r3 ^= ROR(r2, 17);
            r3 += ROR(r2, 28);
            r3 ^= ROR(r2, cnt);
        }
        p++;
    } while (--cnt != 0);

    DSProt_BSS_ov016 = r3;
}
