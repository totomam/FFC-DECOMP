#include "ffc/types.h"

typedef void (*MFn)(uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

typedef struct {
    uint32_t ptr;
    int32_t adj;
} PMF;

typedef struct {
    uint8_t pad[0x84];
    uint8_t *base;
    PMF pm;
    uint32_t f90;
    uint32_t f94;
    uint32_t f98;
    uint32_t f9c;
    uint32_t fa0;
    uint32_t fa4;
    uint32_t fa8;
    uint32_t fc;
} Self;

void func_ov003_0216a2fc(Self *s) {
    PMF *pm = &s->pm;
    int32_t adj = pm->adj;
    uint8_t *base = s->base;
    int32_t off = adj >> 1;
    MFn fn;
    if (adj & 1) {
        uint8_t *vtbl = *(uint8_t **)(base + off);
        fn = *(MFn *)(vtbl + pm->ptr);
    } else {
        fn = (MFn)pm->ptr;
    }
    fn(base + off, s->f90, s->f94, s->f98, s->f9c, s->fa0, s->fa4, s->fa8);
    s->fc = (s->fc & ~0xffu) | 2;
}
