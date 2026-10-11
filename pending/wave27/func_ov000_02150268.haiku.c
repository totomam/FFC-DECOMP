#include "ffc/types.h"

extern void *func_ov000_0214fa54(void *a);
extern void func_02088978(void);
extern void func_0208898c(void);

uint8_t *func_ov000_02150268(uint16_t *out)
{
    uint8_t *ret = 0;
    uint16_t v = 0;
    uint8_t *p;
    int idx = 0x12de;

    p = (uint8_t *)func_ov000_0214fa54(out);
    func_02088978();
    if (p != 0 && p[idx] == 9 && p[idx - 1] == 0) {
        ret = p + idx + 0xe;
        v = *(uint16_t *)(p + idx + 0xc);
    }
    func_0208898c();
    if (out != 0) {
        *out = v;
    }
    return ret;
}
