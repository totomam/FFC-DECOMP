#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
} Arg;

typedef void (*Cb)(void *);

typedef struct {
    uint8_t head[0xc];
    uint8_t sub[0x28];
    Cb cb;
    void *arg;
    uint32_t pad;
} Obj;

extern void func_0207cb40(uint32_t x, uint32_t y);
extern void func_02088fa0(void *object);
extern void func_02088708(void *object);
extern void func_0207c96c(void *object);
extern void func_02088fac(void *object, int a, int b, int c);
extern void func_0207c9a4(void *object);

void func_0207cabc(Arg s) {
    Obj o;
    func_0207cb40(s.a, 1);
    func_02088fa0(&o);
    func_02088708(o.sub);
    o.cb = func_0207c9a4;
    o.arg = &s;
    func_0207c96c(&o);
    func_02088fac(&o, 1, 0, 1);
}
