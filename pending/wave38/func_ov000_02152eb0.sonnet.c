#include "ffc/types.h"

extern void *func_02084b2c(void *dst, int c, uint32_t n);
extern int func_ov000_02152514(void *p);
extern void func_ov000_02159014(int a, uint32_t b);
extern void func_ov000_0215917c(void);
extern void func_ov000_021591a8(void);
extern char data_ov000_0216e280[];

typedef struct {
    uint32_t w0;
    uint16_t h4;
    uint16_t h6;
    uint16_t h8;
    uint16_t ha;
    uint32_t wc;
    uint8_t b10;
} Obj;

typedef struct {
    void (*f0)(void);
    void (*f4)(void);
    uint8_t b8;
    uint8_t b9;
    uint32_t wc;
    uint8_t b10;
} Loc;

void func_ov000_02152eb0(void)
{
    Loc loc;
    char *d = data_ov000_0216e280;
    Obj *o = *(Obj **)(d + 4);

    if (o != 0) {
        if (o->h4 != 1) {
            return;
        }
        func_02084b2c(&loc, 0, 0x14);
        o = *(Obj **)(d + 4);
        loc.b8 = (uint8_t)o->h8;
        loc.b9 = (uint8_t)o->ha;
        loc.wc = o->wc;
        loc.f0 = func_ov000_0215917c;
        loc.f4 = func_ov000_021591a8;
        loc.b10 = o->b10;
        o->h4 = 2;
        if (func_ov000_02152514(&loc) != 0) {
            return;
        }
        func_ov000_02159014(9, 0xffff3be9);
        return;
    } else {
        func_ov000_02159014(9, 0xffff3be9);
    }
}
