#include "ffc/types.h"

extern void *func_02088978(void);
extern void *func_ov000_0214fa54(void *p);
extern void func_0208898c(void *p);
extern void func_02084b2c(void *p, int x);

void func_ov000_0214fcbc(void)
{
    void *a = func_02088978();
    uint8_t *b = (uint8_t *)func_ov000_0214fa54(a);
    if (b == 0) {
        func_0208898c(a);
        return;
    }
    {
        void *q = *(void **)(b + 0x12c4);
        if (q != 0) {
            int32_t n = *(int32_t *)(b + 0x12c8);
            if (n > 0) {
                func_02084b2c(q, 0);
            }
        }
    }
    func_0208898c(a);
}
