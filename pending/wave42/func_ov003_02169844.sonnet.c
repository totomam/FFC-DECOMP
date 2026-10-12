#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t z);
extern uint32_t func_020424e0(uint32_t a);
extern void *func_ov003_02146494(void);
extern uint32_t func_ov003_021464f4(uint32_t a);
extern uint32_t func_ov003_0214649c(uint32_t a);
extern void func_ov003_02153e10(uint32_t *out, uint32_t v);
extern uint32_t func_020817c8(int32_t first, int32_t second);
typedef struct { uint32_t a; uint32_t b; } S2;
extern void func_ov003_02156574(uint32_t a, S2 s, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t func_ov003_0214d454(uint32_t a);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov003_0217af8c[];
extern uint32_t data_ov003_0217b254[];

uint32_t *func_ov003_02169844(uint32_t *self, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint32_t r4;
    uint32_t r1b;
    void *g;
    struct { uint32_t pad[7]; S2 arr; uint32_t x; } L;

    func_02056c9c(self, 0);
    self[0] = (uint32_t)data_ov003_0217af8c;
    self[34] = b;
    self[35] = c;
    self[36] = d;
    self[37] = e;

    r4 = func_020424e0(b);
    g = func_ov003_02146494();
    uint32_t *gp = (uint32_t *)((char *)g + 0xb0);
    uint32_t gv = *gp;
    if (gv != 0) {
        uint32_t r6 = func_ov003_021464f4(r4);
        uint32_t r1 = func_ov003_0214649c(r4);
        uint32_t r7;

        func_ov003_02153e10(&L.x, r1);
        r7 = 1u << 12;
        func_020817c8(L.x, r7);
        L.arr.a = 0;
        L.arr.b = 0;
        S2 t = L.arr; func_ov003_02156574(r6, t, 1, L.x, r7);
    }

    r1b = func_ov003_0214d454(r4);
    func_02056bc0(&self[5], (void *)r1b);

    *(S2 *)&self[32] = *(S2 *)data_ov003_0217b254;
    return self;
}
