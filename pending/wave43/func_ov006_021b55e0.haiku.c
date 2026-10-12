#include "ffc/types.h"

extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern uint32_t func_ov006_021b3ed4(uint8_t idx, void *p, uint32_t sz);
extern uint32_t func_ov006_021b3eb8(uint8_t idx);
extern uint32_t func_ov006_021b5048(void);
extern void func_ov006_021b50c8(uint32_t a, void *p);
extern void func_ov006_021b50bc(uint32_t a, void *p);
extern void *data_ov006_021bc884;
extern uint8_t data_ov006_021b8ad4[];

typedef struct Ent {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t pad0c[0x10];
    uint8_t f1c;
    uint8_t pad1d[0x13];
    uint8_t f30;
    uint8_t pad31[3];
    uint32_t f34;
    uint8_t f38;
    uint8_t pad39[3];
    uint32_t f3c;
} Ent;

void func_ov006_021b55e0(void)
{
    int i;
    uint8_t v;
    uint32_t off;

    data_ov006_021bc884 = func_ov006_021b49e4(0x80, 4);
    for (i = 0; i < 2; i++) {
        off = i << 6;
        v = data_ov006_021b8ad4[i];
        ((Ent *)((uint8_t *)data_ov006_021bc884 + off))->f34 = v;
        ((Ent *)((uint8_t *)data_ov006_021bc884 + off))->f3c =
            (uint32_t)func_ov006_021b49e4(v * 0x14, 4);
        ((Ent *)((uint8_t *)data_ov006_021bc884 + off))->f0 =
            func_ov006_021b3ed4(v, ((Ent *)((uint8_t *)data_ov006_021bc884 + off))->f3c, 0x14);
        ((Ent *)((uint8_t *)data_ov006_021bc884 + off))->f4 = func_ov006_021b3eb8(v);
        ((Ent *)((uint8_t *)data_ov006_021bc884 + off))->f8 = func_ov006_021b5048();
        ((Ent *)((uint8_t *)data_ov006_021bc884 + off))->f1c = 0;
        ((Ent *)((uint8_t *)data_ov006_021bc884 + off))->f30 = 0xff;
        func_ov006_021b50c8(((Ent *)((uint8_t *)data_ov006_021bc884 + off))->f8,
            ((Ent *)((uint8_t *)data_ov006_021bc884 + off))->pad0c);
        func_ov006_021b50bc(((Ent *)((uint8_t *)data_ov006_021bc884 + off))->f8,
            &((Ent *)((uint8_t *)data_ov006_021bc884 + off))->pad0c[0x14]);
        ((Ent *)((uint8_t *)data_ov006_021bc884 + off))->f38 = 1;
    }
}
