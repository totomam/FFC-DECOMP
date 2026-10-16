#include "ffc/types.h"
extern void func_ov010_021c9260(void *a, void *b, void *c);
extern void func_ov009_0219bc64(void *a, void *b, int c);
extern void *func_02035fd0(void *object);
extern uint32_t data_020ae644;
extern uint32_t data_020ae654;
typedef struct { uint16_t h[17]; } H;
typedef struct { uint32_t vt, a, b; } T;
typedef struct { uint32_t v, vt; } P;
typedef struct { P p[4]; uint32_t v4; T t; H h; uint32_t x, y, z; } S;
void func_ov010_021c92bc(uint8_t *obj, uint32_t *p) {
    S s;
    int i;
    T *t;
    func_ov010_021c9260(obj, *(void **)(obj + 0x10c), p);
    for (i = 0; i < 0; i++);
    s.p[0].v = p[0]; s.p[0].vt = (uint32_t)&data_020ae644;
    s.p[1].v = p[2]; s.p[1].vt = (uint32_t)&data_020ae644;
    s.p[2].v = p[4]; s.p[2].vt = (uint32_t)&data_020ae644;
    s.p[3].v = p[6]; s.p[3].vt = (uint32_t)&data_020ae644;
    s.v4 = p[8];
    t = &s.t;
    t->vt = (uint32_t)&data_020ae644;
    t->a = p[10];
    t->vt = (uint32_t)&data_020ae654;
    t->b = p[11];
    s.h = *(H *)&p[12];
    s.x = p[21]; s.y = p[22]; s.z = p[23];
    func_ov009_0219bc64(*(void **)(obj + 0xe8), &s, 0);
    func_02035fd0(&s);
}
