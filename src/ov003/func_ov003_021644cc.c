#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern char data_ov003_0217a914;

typedef struct {
    uint8_t a;
    uint8_t pad0[3];
    uint16_t b;
    uint16_t pad1;
    uint32_t c;
} S12;

typedef struct {
    void *vt;
    uint8_t pad[0x7c];
    uint32_t f80;
    uint16_t f84;
    uint16_t f86;
    uint16_t f88;
    uint8_t f8a;
    uint8_t pad8b;
    uint32_t f8c;
    uint32_t f90;
    uint32_t f94;
} Ctx;

void *func_ov003_021644cc(Ctx *p, uint32_t a, uint16_t b, uint16_t c, S12 s, uint32_t q, uint32_t e) {
    func_02056c9c(p, 0);
    p->vt = (void *)&data_ov003_0217a914;
    p->f80 = a;
    p->f84 = b;
    p->f86 = c;
    p->f88 = s.b;
    p->f8a = s.a;
    p->f8c = q;
    p->f90 = s.c;
    p->f94 = e;
    return p;
}
