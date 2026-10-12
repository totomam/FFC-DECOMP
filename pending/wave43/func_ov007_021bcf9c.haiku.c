#include "ffc/types.h"

extern uint32_t func_02091b10(void *object, void *first, ...);
extern uint32_t func_020741a0(void *a, void *b, void *c, void *d, void *e, void *f, void *g);
extern void func_ov007_021bca2c(void);
extern char data_ov007_021c81e4[];
extern char data_ov007_021c8230[];
extern char data_ov007_021c8288[];
extern char data_ov007_021c82e0[];
extern char data_ov007_021c8348[];
extern void *data_ov007_021c7b34[];
extern char data_ov007_021c81cc[];
extern char data_ov007_021c15d4[];

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint8_t f8;
    uint8_t f9;
    uint8_t fa;
    uint8_t fb;
} Obj;

typedef struct {
    void *p0;
    void *p4;
    uint32_t p8;
    uint32_t pc;
    uint32_t p10;
    uint32_t p14;
    uint32_t p18;
    uint32_t p1c;
    uint32_t p20;
} Q;

void func_ov007_021bcf9c(uint8_t *self)
{
    Obj *o = *(Obj **)(self + 0x1DC);
    Q *q;

    if (o->f8 == 0 && o->f9 == 0) {
        func_02091b10(self + 0x1E0, data_ov007_021c81e4, o->w0, o->w1, (uint32_t)o->fa, (uint32_t)o->fb);
    } else if (o->f8 == 0) {
        func_02091b10(self + 0x1E0, data_ov007_021c8230, o->w0, o->w1, (uint32_t)o->fa, (uint32_t)o->fb, (uint32_t)o->f9);
    } else if (o->f9 == 0) {
        func_02091b10(self + 0x1E0, data_ov007_021c8288, o->w0, o->w1, (uint32_t)o->fa, (uint32_t)o->fb, (uint32_t)o->f8);
    } else {
        func_02091b10(self + 0x1E0, data_ov007_021c82e0, o->w0, o->w1, (uint32_t)o->fa, (uint32_t)o->fb, (uint32_t)o->f8, (uint32_t)o->f9);
    }

    ((Q *)*(void **)(self + 0x2E0))->p0 = self + 0x1E0;
    ((Q *)*(void **)(self + 0x2E0))->p4 = data_ov007_021c8348;
    ((Q *)*(void **)(self + 0x2E0))->p8 = 0;
    ((Q *)*(void **)(self + 0x2E0))->pc = 24;
    ((Q *)*(void **)(self + 0x2E0))->p10 = 0;
    ((Q *)*(void **)(self + 0x2E0))->p14 = 0;
    ((Q *)*(void **)(self + 0x2E0))->p18 = 0;
    ((Q *)*(void **)(self + 0x2E0))->p1c = 0;
    ((Q *)*(void **)(self + 0x2E0))->p20 = 1;
    q = *(Q **)(self + 0x2E0);

    func_020741a0(*(void **)(self + 0xB0), data_ov007_021c81cc, data_ov007_021c15d4,
                  data_ov007_021c7b34[1], q, (void *)func_ov007_021bca2c, self);
}
