#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t pad;
    uint32_t c;
} Loc;

typedef struct {
    uint32_t pad[3];
    uint32_t c;
} Obj;

extern int func_02092948(void *a, void *b);
extern int func_ov000_021652a8(uint32_t, uint32_t, uint32_t, void *, void *, void *, uint32_t, void *, void *);
extern void *func_021686f4(uint32_t, uint32_t, void *);
extern void *func_ov001_0217281c(void *);
extern int func_ov000_0216888c(void *, void *, void *, uint32_t, uint32_t);
extern void func_ov000_021687e0(void *, void *, void *);
extern void func_ov000_021653f4(uint32_t);
extern Obj *func_ov000_0216876c(void *, int);
extern void func_ov001_02172a64(void);
extern void func_ov001_0217299c(void);
extern uint8_t data_ov001_0218f4ec[];
extern uint8_t data_ov001_0218f544[];
extern uint8_t data_ov001_0218f4f0[];
extern uint8_t data_ov001_0218f474[];
extern uint8_t data_ov001_0218f5ec[];
extern void *data_ov001_02194bf8;

int func_ov001_02172a78(void *a, void *b)
{
    Loc loc;
    int r;
    Obj *p;

    if (a == 0 || b == 0 || func_02092948(a, data_ov001_0218f4ec) == 0) {
        func_ov000_021652a8(8, 4, 1, data_ov001_0218f4f0, data_ov001_0218f544,
                            data_ov001_0218f474, 0x345, a, b);
        return 0;
    }

    if (data_ov001_02194bf8 == 0) {
        data_ov001_02194bf8 = func_021686f4(16, 1, func_ov001_02172a64);
        if (data_ov001_02194bf8 == 0) {
            func_ov000_021652a8(8, 2, 1, data_ov001_0218f5ec, data_ov001_0218f544,
                                data_ov001_0218f474, 0x354, a, b);
            return 0;
        }
    }

    loc.a = (uint32_t)func_ov001_0217281c(a);
    loc.b = (uint32_t)b;
    loc.c = 1;
    r = func_ov000_0216888c(data_ov001_02194bf8, &loc, func_ov001_0217299c, 0, 1);
    if (r == -1) {
        func_ov000_021687e0(data_ov001_02194bf8, &loc, func_ov001_0217299c);
    } else {
        func_ov000_021653f4(loc.a);
        p = func_ov000_0216876c(data_ov001_02194bf8, r);
        p->c++;
    }
    return 1;
}
