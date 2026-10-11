#include "ffc/types.h"

extern void func_0202df18(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_0202dfd0(void *p, uint32_t a, uint32_t b, uint32_t c);

typedef struct Obj {
    uint8_t pad[0x58];
    uint32_t f58;
    uint32_t f5c;
    uint8_t f60;
} Obj;

void *func_0202dec4(Obj *s)
{
    s->f60 = 0;
    s->f58 = 0;
    s->f5c = 0;
    func_0202df18(s, 0, 0xc2b40000u, 0);
    func_0202dfd0(s, 0, 0, 0);
    return s;
}
