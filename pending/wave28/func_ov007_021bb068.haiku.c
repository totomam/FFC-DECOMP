#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint8_t pad[0xb0]; uint32_t a; uint32_t b; } Obj;

extern uint32_t *data_020b8e44;
extern Pair data_ov007_021c7880;

void func_ov007_021bb068(uint8_t *s)
{
    if (s[0x38b6] != 0) {
        uint32_t idx = *(uint32_t *)(s + 0xc0);
        uint32_t v = *(uint32_t *)(s + (idx * 0x23c) + 0xd8);
        data_020b8e44[2] = v;
        **(uint32_t **)(s + 0xb8) = 1;
        *(uint32_t *)(s + 0xc) = (*(uint32_t *)(s + 0xc) & ~0xffu) | 2;
    } else {
        Pair *d = &data_ov007_021c7880;
        Obj *o = (Obj *)s;
        uint32_t b = d->b;
        uint32_t a = d->a;
        o->b = b;
        o->a = a;
    }
}
