#include "ffc/types.h"

typedef struct { int32_t v[5]; } Blk5;

extern void func_ov004_0214f388(int32_t a);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern int32_t func_02081210(int32_t a, int32_t b);
extern void func_0206c1a0(Blk5 *out, int32_t v);
extern void func_ov004_0214e654(int32_t a, int32_t b, int32_t c);
extern uint32_t data_ov004_02158b04[];

void func_ov004_0214a264(int32_t *p) {
    int32_t r4;
    int32_t r6;
    int32_t r7;
    int32_t arg[2];
    int32_t sel[2];
    int32_t *q;
    Blk5 vec1;
    Blk5 vec2;

    p[0x26] = p[0x26] - (int32_t)data_ov004_02158b04[2];
    func_ov004_0214f388(p[0x22]);
    sel[0] = (int32_t)func_020817c8(p[0x26], 0x3000);
    sel[1] = 0;
    q = &sel[1];
    if (sel[0] > 0) {
        q = &sel[0];
    }
    r4 = *q;
    r7 = 0x2000;
    r6 = func_02081210(r4, r7);
    func_0206c1a0(&vec1, p[0x23]);
    r6 = (int32_t)func_020817c8(r4, vec1.v[0]) - r6;
    r7 = func_02081210(r4, r7);
    func_0206c1a0(&vec2, p[0x23]);
    arg[0] = ((int32_t)func_020817c8(r4, vec2.v[0]) - r7) >> 12;
    arg[1] = r6 >> 12;
    func_ov004_0214e654(p[0x22], arg[0], arg[1]);
    if (p[0x26] <= 0) {
        p[3] = (p[3] & ~0xff) | 2;
    }
}
