/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_ov015_021d6688(void);
extern void func_ov015_021d65c4(void);
extern void func_ov015_021d6768(void);
extern uint8_t DSProt_BSS_ov015[];

void func_ov015_021d67d8(void)
{
    if ((uint8_t *)DSProt_BSS_ov015 + 4 != 0) {
        func_ov015_021d6688();
        func_ov015_021d65c4();
        func_ov015_021d6768();
    }
}
