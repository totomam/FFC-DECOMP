#include "ffc/types.h"

extern void *func_020849f4(void *dst, const void *src, uint32_t n);
extern void *data_0213ec90;

typedef struct Ent {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Ent;

typedef struct Hdr {
    uint32_t x0;
    uint32_t x1;
    uint32_t cnt;
    Ent e[1];
} Hdr;

#define FLD(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))

void func_0207a744(uint8_t *a, uint8_t *b) {
    uint32_t r;
    uint32_t i;
    Hdr *h;
    Ent *e;
    func_020849f4(b, a, 0x30);
    r = 0;
    if (FLD(a, 0x18) != 0) {
        r = (uint32_t)b + FLD(a, 0x18);
    }
    FLD(a, 0x98) = r;
    r = 0;
    if (FLD(a, 0x20) != 0) {
        r = (uint32_t)b + FLD(a, 0x20);
    }
    FLD(a, 0x90) = r;
    r = 0;
    if (FLD(a, 0x10) != 0) {
        r = (uint32_t)b + FLD(a, 0x10);
    }
    FLD(a, 0x94) = r;
    i = 0;
    FLD(a, 0x9c) = i;
    if (i < ((Hdr *)FLD(a, 0x90))->cnt) {
        do {
            e = &((Hdr *)FLD(a, 0x90))->e[i];
            if (e->a == 0) {
                r = 0;
            } else {
                r = (uint32_t)b + e->a;
            }
            e->c = r;
            i++;
        } while (i < ((Hdr *)FLD(a, 0x90))->cnt);
    }
    FLD(a, 0x30) = 0;
    data_0213ec90 = a;
}
