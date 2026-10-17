#include "ffc/types.h"
/* From pokediamond NitroSDK/OS_irqHandler.c (OS_WaitIrq), matched by tools/xmatch.py.
   HW_DTCM is a link-time symbol (SDK_AUTOLOAD_DTCM_START) there; data_02fe0000 here. */
#pragma thumb off
typedef unsigned long u32;
typedef volatile unsigned long vu32;
extern char data_02fe0000[];
extern char data_02fe0544[]; /* OSi_IrqThreadQueue */
extern u32 func_02088978(void); /* OS_DisableInterrupts */
extern u32 func_0208898c(u32); /* OS_RestoreInterrupts */
extern void func_02087024(void *); /* OS_SleepThread */
#define HW_INTR_CHECK_BUF ((u32)data_02fe0000 + 0x3fc0 + 0x38)

void func_0208641c(int clear, u32 irqFlags)
{
    u32 lastIntrMode = func_02088978();
    if (clear)
    {
        *(vu32 *)HW_INTR_CHECK_BUF &= ~irqFlags;
    }
    (void)func_0208898c(lastIntrMode);

    while (!(irqFlags & *(u32 *)HW_INTR_CHECK_BUF))
    {
        func_02087024(data_02fe0544);
    }
}
