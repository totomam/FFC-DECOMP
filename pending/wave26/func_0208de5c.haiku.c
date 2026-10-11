#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
    uint16_t c;
} S6;

typedef struct {
    uint32_t t;
    uint16_t x;
    uint16_t y;
    uint32_t p[2];
} Loc;

extern void func_020849e0(uint32_t v, void *p, uint32_t n);
extern void func_0208dcfc(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, void *p);

void func_0208de5c(void *a, uint32_t b, uint32_t c, uint32_t d, S6 s) {
    Loc loc;
    func_020849e0(0, &loc, 16);
    loc.t = 3;
    loc.x = ((volatile S6 *)&s)->c;
    loc.y = loc.x;
    func_0208dcfc(a, b, c, d, ((volatile S6 *)&s)->a, &loc);
}
