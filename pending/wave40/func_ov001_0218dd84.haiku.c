#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

typedef struct Obj {
    uint8_t pad[0x12];
    uint8_t b12;
    uint8_t b13;
    uint32_t w14;
} Obj;

typedef struct Vt {
    void *slots[8];
} Vt;

typedef struct Self {
    Vt *vt;
    uint32_t pad[0x20];
    uint32_t f84;
    Obj *arr[4];
} Self;

void func_ov001_0218dd84(Self *p)
{
    int i;
    uint8_t f;
    int ok;
    Obj *o;
    char *q;
    Self *s;

    p->f84 = 0;
    ((void (*)(Self *))p->vt->slots[4])(p);
    s = p;
    for (i = 0; i < 4; i++) {
        if (i == 3) {
            continue;
        }
        o = s->arr[i];
        f = o->b12;
        q = (char *)o + 0x1c;
        if (f != 0) {
            func_0208763c(q);
        }
        ok = (o->w14 == 0);
        if (f != 0) {
            func_02087678(q);
        }
        if (!ok) {
            goto end;
        }
    }
    ((void (*)(Self *))s->vt->slots[5])(s);
end:
    ;
}
