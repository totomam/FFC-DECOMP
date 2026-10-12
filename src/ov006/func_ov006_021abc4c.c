#include "ffc/types.h"

typedef struct Inner {
    uint32_t f0;
    uint32_t f1;
    void *s;
    uint8_t pad[8];
    void *q;
} Inner;

typedef struct Glob {
    uint32_t a;
    uint16_t h;
    uint16_t pad;
    Inner *p;
} Glob;

extern uint32_t func_0208130c(uint32_t a, uint32_t b);
extern void *func_ov006_021b4624(void *a, uint32_t b);
extern void func_ov006_021abcc0(uint32_t a, uint32_t b);
extern void func_ov006_021af4b8(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov006_021abdcc(uint32_t a, uint32_t b);
extern void func_ov006_021af4a4(void);
extern void func_ov006_021b4690(void *a);
extern void func_ov006_021ac0d0(void);
extern Glob data_ov006_021bc78c;
extern uint16_t data_ov006_021b86ba[];

void func_ov006_021abc4c(void)
{
    int i;
    uint32_t x;
    uint32_t base;

    base = func_0208130c(data_ov006_021bc78c.h, 0x1d);

    func_ov006_021b4624(data_ov006_021bc78c.p->q, 0);
    x = base;
    for (i = 0; i < 5; i++, x++) {
        func_ov006_021abcc0(x, i);
    }
    func_ov006_021af4b8((uint8_t *)data_ov006_021bc78c.p->s + data_ov006_021b86ba[base] * 2, 0, 0x1e, 0x13);
    for (i = 0; i < 5; i++, base++) {
        func_ov006_021abdcc(base, i);
    }
    func_ov006_021af4a4();
    func_ov006_021b4690(data_ov006_021bc78c.p->q);
    func_ov006_021ac0d0();
}
