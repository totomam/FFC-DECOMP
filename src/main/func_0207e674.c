#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02087024(void *p);
extern void func_0208898c(uint32_t x);

typedef struct {
    uint32_t pad[5];
    uint32_t flags;
} Obj;

uint32_t func_0207e674(Obj *p)
{
    uint32_t t = func_02088978();
    uint32_t b;
    uint32_t r7;

    if (*(volatile uint32_t *)&p->flags & 8) {
        b = 1;
    } else {
        b = 0;
    }
    r7 = 1;
    if (b) {
        r7 = 0;
    }
    if (r7) {
        uint32_t f = p->flags;
        if (!(f & 0x10)) {
            p->flags = f | 8;
        } else {
            uint32_t u;
            p->flags = f | 0x40;
            u = func_02088978();
            if (p->flags & 0x40) {
                do {
                    func_02087024(&p->pad[3]);
                } while (p->flags & 0x40);
            }
            func_0208898c(u);
        }
    }
    func_0208898c(t);
    return r7;
}
