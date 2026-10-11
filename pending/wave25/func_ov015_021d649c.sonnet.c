/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_ov015_021d779c(void);
extern void func_ov015_021d67d8(void);
extern void func_ov015_021d5670(void);
extern void func_ov015_021d5bb0(void);
extern void func_ov015_021d627c(void);
extern void func_ov015_021d6304(void);
extern void func_ov015_021d638c(void);
extern void func_ov015_021d6414(void);
extern uint32_t DSProt_BSS_ov015[];
extern uint32_t data_ov015_021d799c[];
extern void func_ov015_021d649c(void);

void func_ov015_021d649c(void)
{
    uint32_t *p;

    func_ov015_021d779c();
    func_ov015_021d67d8();
    func_ov015_021d5670();
    func_ov015_021d5bb0();

    p = (uint32_t *)((uint32_t)func_ov015_021d649c - 0x3200);
    p[0] = 0xe12fff1e;
}
