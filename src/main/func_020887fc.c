#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint8_t pad[0x20];
    uint32_t f24;
} Obj;

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t h);
extern void func_020886e0(Obj *p);

void func_020887fc(Obj *p)
{
    uint32_t h = func_02088978();
    p->f24 = 1;
    if (p->f0 == 0) {
        func_0208898c(h);
        return;
    }
    func_020886e0(p);
    p->f0 = 0;
    func_0208898c(h);
}
