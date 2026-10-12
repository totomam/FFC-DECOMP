#include "ffc/types.h"

extern void func_02015e8c(void *out, uint32_t arg);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void *func_02053290(void *object);
extern void func_02005988(void *dst, void *src);
extern void func_ov002_021c28e0(void *dst, void *src);
extern void func_020095b8(void *dst, void *src);
typedef struct { uint8_t v; } S1;
extern void func_ov002_021c2f84(void *obj, void *ent, S1 v);
extern void func_ov002_021c2904(void *ent);
extern void *func_020059cc(void *object);
extern uint32_t data_020b8e44;

typedef struct {
    uint32_t a;
    void *mar;
    uint32_t index;
    uint8_t flag;
} Lcl;

typedef struct {
    uint8_t raw[0xc];
} Small;

typedef struct {
    uint8_t a[0xc];
    uint32_t f0c;
    uint8_t b[0xc];
    int8_t f1c;
    uint8_t c[3];
} Ent;

void func_ov002_021c2a6c(uint8_t *p, void *r1)
{
    Lcl m;
    Small e2;
    Ent e1;
    volatile uint8_t z;
    Lcl *mp;
    int r4;


    func_02015e8c(&m, data_020b8e44);
    r4 = *((uint8_t *)func_02052d90(m.mar, m.index) + 0xa) != 0;
    mp = &m;
    if (mp->mar != 0) {
        if (mp->flag != 0) {
            func_02052d3c(mp->mar, mp->index);
        }
        func_02052c04(mp->mar);
    }
    func_02053290(mp);
    if (r4) {
        func_02005988(&e2, r1);
        func_ov002_021c28e0(&e1, &e2);
        {
            uint32_t *pa = (uint32_t *)(p + 0xa4);
            uint32_t *pb = (uint32_t *)(p + 0xa8);
            uint32_t a = *pa;
            uint32_t b = *pb;
            if (a < b) {
                Ent *q = (Ent *)(*(uint8_t **)(p + 0xa0) + (a << 5));
                if (q != 0) {
                    func_020095b8(q, &e1);
                    q->f0c = e1.f0c;
                    func_020095b8(q->b, e1.b);
                    q->f1c = e1.f1c;
                }
                *(uint32_t *)(p + 0xa4) = *(uint32_t *)(p + 0xa4) + 1;
            } else {
                S1 s;
                z = 0;
                s.v = z;
                func_ov002_021c2f84(p + 0xa0, &e1, s);
            }
        }
        func_ov002_021c2904(&e1);
        func_020059cc(&e2);
    }
}
