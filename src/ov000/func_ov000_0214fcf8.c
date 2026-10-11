#include "ffc/types.h"

extern void *func_02088978(void);
extern void *func_ov000_0214fa54(void *p);
extern void func_0208898c(void *p);

uint32_t func_ov000_0214fcf8(void)
{
    void *obj = func_02088978();
    uint8_t *p = (uint8_t *)func_ov000_0214fa54(obj);
    uint32_t r5 = 0;

    if (p == 0) {
        func_0208898c(obj);
        return 0;
    }
    {
        uint32_t *q = *(uint32_t **)(p + 0x12c4);
        if (q != 0 && *(uint32_t *)(p + 0x12c8) > 0xc) {
            r5 = *q;
        }
    }
    func_0208898c(obj);
    return r5;
}
