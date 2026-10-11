#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);

typedef struct {
    uint32_t a;
    uint8_t *p;
} S;

extern S data_ov000_0216e214;

uint8_t func_ov000_0214f964(void)
{
    uint8_t r;
    S *d;
    uint8_t *q;
    func_02088978();
    d = &data_ov000_0216e214;
    r = 0;
    q = d->p;
    if (q != 0) {
        r = q[0x12de];
    }
    func_0208898c();
    return r;
}
