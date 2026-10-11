#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
typedef struct { uint32_t a; uint32_t n; } S;
extern S data_021414f4;

uint32_t func_020872ac(void) {
    S *p;
    uint32_t r;
    uint32_t v;
    func_02088978();
    p = &data_021414f4;
    r = 0;
    v = p->n;
    if (v != 0) {
        p->n = v - 1;
        r = v;
    }
    func_0208898c();
    return r;
}
