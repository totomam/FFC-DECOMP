#include "ffc/types.h"

extern char data_020b1ec8[];
extern char data_020b1edc[];
extern void func_02054738(void *p);
extern void func_02056858(uint32_t v);
extern void func_02054844(void *p);

typedef struct Obj {
    void *vt0;
    uint8_t pad0[0x14 - 4];
    void *vt14;
    uint8_t pad1[0x24 - 0x18];
    uint32_t f24;
    uint8_t pad2[0x2c - 0x28];
    uint32_t f2c;
    uint8_t pad3[0x238 - 0x30];
    uint32_t f238;
} Obj;

void *func_0206dd24(void *p)
{
    Obj *s = (Obj *)p;
    s->vt0 = data_020b1ec8;
    s->vt14 = data_020b1edc;
    func_02054738((uint8_t *)s + 0x14);
    func_02056858(s->f238);
    func_02056858(s->f24);
    func_02056858(s->f2c);
    func_02054844((uint8_t *)s + 0x14);
    return s;
}
