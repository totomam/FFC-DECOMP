#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x64];
    int32_t f64;
    uint8_t pad1[0x10];
    uint32_t f78;
} FfcObj;

extern uint32_t func_02088978(void);
extern uint32_t func_0208898c(uint32_t);
extern void func_02086b38(uint32_t, FfcObj *);
extern void func_02086c78(uint32_t);

uint32_t func_02086ff4(FfcObj *p, uint32_t v)
{
    uint32_t r;

    r = func_02088978();
    if (p->f64 == 1) {
        if (v != 0) {
            p->f78 = v;
            func_02086b38(v, p);
        }
        p->f64 = 0;
        func_02086c78(0);
    }
    return func_0208898c(r);
}
