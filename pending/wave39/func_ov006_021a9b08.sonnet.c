#include "ffc/types.h"

typedef struct E { uint8_t pad[0x26]; uint16_t a; } E;
typedef struct E2 { uint8_t pad[0x28]; uint8_t b; } E2;
typedef struct O { uint8_t pad[4]; uint16_t v; } O;
typedef struct C {
    E *e;
    uint8_t pad[0xc];
    O *o[5];
    O *q[5];
    uint8_t pad2[0x42-0x38];
    uint16_t t[7];
    uint8_t pad3[1];
    uint8_t n;
} C;
typedef struct G { uint32_t pad; C *c; } G;
extern G data_ov006_021bc778;

void func_ov006_021a9b08(int32_t a, int32_t b) {
    if (a >= data_ov006_021bc778.c->n) return;
    {
        O *obj = data_ov006_021bc778.c->o[b];
        uint32_t off = 0x2a * a;
        uint32_t k = ((E2 *)((uint8_t *)data_ov006_021bc778.c->e + off))->b;
        obj->v = (obj->v & 0xfffffc00) | data_ov006_021bc778.c->t[k];
        obj = data_ov006_021bc778.c->q[b];
        k = ((E *)((uint8_t *)data_ov006_021bc778.c->e + off))->a;
        obj->v = (obj->v & 0xfffffc00) | *(uint16_t *)((uint8_t *)data_ov006_021bc778.c + 2 * k + 0x48);
    }
}
