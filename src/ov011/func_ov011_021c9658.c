#include "ffc/types.h"

extern void func_02069288(void *object);
extern uint8_t func_02036360(const void *object);
extern void func_020692a4(void *object);
extern void func_ov011_021c9818(void *object);

typedef struct { char pad[0x60]; } Ent;
typedef struct VT { char pad[0x28]; void (*f28)(void *); void (*f2c)(void *); } VT;
typedef struct Sub { VT **vt; } Sub;
typedef struct Obj { char pad[0x98]; VT **sub; } Obj;
typedef struct S {
    char p0[0xd8]; void *a[2]; void *b; void *c;
    char p1[0xfc-0xe4-4]; 
} S;

typedef struct T {
    char pad0[0xbc];
    Obj *o1;
    Obj *o2;
    char pad1[0xd8-0xc4];
    void *d8[2];
    char pad2[0xfc-0xe0];
    void *fc[5];
    void *h110[5];
    uint32_t *arr;
    uint32_t count;
    char pad3[0x140-0x12c];
    Ent ents[1];
} T;

void func_ov011_021c9658(T *p)
{
    int i;
    uint32_t k;
    for (i = 0; i < 5; i++) func_02069288(p->fc[i]);
    *(uint8_t *)((char *)p + 0x3c5) = 0;
    *(uint8_t *)((char *)p + 0x3c6) = 4;
    for (k = 0; k < p->count; k = (uint8_t)(k + 1)) {
        uint8_t idx = (uint8_t)p->arr[k];
        if (func_02036360(&p->ents[idx]))
            func_02069288(p->h110[k]);
    }
    for (i = 0; i < 2; i++) func_02069288(p->d8[i]);
    func_020692a4(p->o1);
    (*p->o1->sub)->f2c(p->o1->sub);
    func_02069288(p->o2);
    (*p->o2->sub)->f28(p->o2->sub);
    func_ov011_021c9818(p);
}
