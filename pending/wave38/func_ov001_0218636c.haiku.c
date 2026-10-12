#include "ffc/types.h"

extern void *func_ov000_021653d4(uint32_t size);
extern void func_ov000_021653f4(void *p);
extern void *func_ov000_02168a10(uint32_t a, uint32_t b, uint32_t c, void *d, void *e, void *f);
extern void func_ov001_02186350(void);
extern void func_ov001_02186344(void);
extern void func_ov001_0218632c(void);

typedef struct Obj {
    uint32_t a;
    uint16_t b;
    uint16_t pad4;
    uint32_t c;
    uint16_t d;
    uint16_t pad_c;
    uint32_t e;
    uint8_t f;
    uint8_t g;
    uint8_t pad16[2];
    void *h;
    uint32_t i;
    uint32_t pad20;
    uint32_t j;
} Obj;

void *func_ov001_0218636c(uint32_t unused, uint32_t p1, uint16_t p2)
{
    Obj *o = (Obj *)func_ov000_021653d4(0x2c);
    if (!o) {
        return 0;
    }
    o->h = func_ov000_02168a10(8, 8, 4, (void *)func_ov001_02186344, (void *)func_ov001_02186350, (void *)func_ov001_0218632c);
    if (o->h == 0) {
        func_ov000_021653f4(o);
        return 0;
    }
    o->f = 0;
    o->g = 0;
    o->j = 0;
    o->i = 0;
    o->e = 0;
    o->a = p1;
    o->b = p2;
    o->c = 0;
    o->d = 0;
    return o;
}
