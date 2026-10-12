#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint8_t f8;
    uint8_t pad9[7];
    uint32_t f10;
    uint8_t pad14[0x20];
    uint32_t f34;
} Obj;

extern uint32_t func_ov000_02147768(Obj *p);
extern uint64_t func_020882cc(void);
extern void func_ov000_02146904(Obj *p, int x);
extern uint32_t func_02088978(void);
extern void func_02087024(int x);
extern void func_0208898c(uint32_t x);
extern uint8_t data_ov000_0216bc60[];

int func_ov000_02147884(Obj *p)
{
    uint32_t r7;
    uint32_t i;
    uint32_t r6;
    uint64_t v;

    r7 = func_ov000_02147768(p);
    i = 0;
    do {
        p->f34 = r7;
        p->f8 = 2;
        v = func_020882cc();
        p->f10 = ((uint32_t)(v >> 32) << 16) | ((uint32_t)v >> 16);
        func_ov000_02146904(p, 2);
        r6 = func_02088978();
        if (p->f8 == 2 && *(uint32_t *)(data_ov000_0216bc60 + 0x50) != 0) {
            p->f4 = 1;
            func_02087024(0);
        }
        func_0208898c(r6);
        if (p->f8 == 4) {
            return 0;
        }
        if (*(uint32_t *)(data_ov000_0216bc60 + 0x50) == 0) {
            break;
        }
        i++;
    } while (i < 3);
    return 1;
}
