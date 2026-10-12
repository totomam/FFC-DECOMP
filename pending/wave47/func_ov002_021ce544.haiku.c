#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t fc;
} Obj;

typedef struct {
    uint8_t *base;
    uint32_t count;
} Arr;

extern uint32_t data_020b8e44;
extern void func_020161cc(void *object, uint32_t x);
extern void *func_02052d90(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021cdd0c(void *a, uint32_t b, uint8_t *c, void *d, void *e);
extern uint8_t *func_ov002_021d2ac4(void *a, uint8_t *b, uint32_t c);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);

void func_ov002_021ce544(void *a, uint32_t p1, uint32_t p2, Arr *p3)
{
    Obj obj;
    uint32_t *t;
    uint8_t *e;
    uint32_t res;
    uint32_t j;
    uint8_t flag;
    uint32_t *rp;
    uint8_t *fp;
    volatile uint32_t pad[2];
    volatile uint32_t *pp;

    rp = &res;
    fp = &flag;
    pp = pad;
    pp[0] = 0;
    pp[1] = 0;
    func_020161cc(&obj, data_020b8e44);
    t = func_02052d90(obj.f4, obj.f8);

    e = p3->base;
    while (e != p3->base + 0x30 * p3->count) {
        *rp = 0;
        if (t[1] > 0) {
            for (j = 0; j < t[1]; j++) {
                *rp = func_ov002_021cdd0c(a, p1, e, (void *)p2,
                                          (uint8_t *)t + *(uint32_t *)((uint8_t *)t + t[2] + j * 4));
                if (*rp == 0) {
                    break;
                }
            }
        }
        if (*rp == 0) {
            *fp = 0;
            e = func_ov002_021d2ac4(p3, e, *fp);
        } else {
            e += 0x30;
        }
    }

    if (obj.f4 != 0) {
        if (obj.fc != 0) {
            func_02052d3c(obj.f4, obj.f8);
        }
        func_02052c04(obj.f4);
    }
    func_02053290(&obj);
}
