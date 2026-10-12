#include "ffc/types.h"

typedef struct { uint32_t a, b; } P;
extern void func_02056c9c(void *o, uint32_t x);
extern void func_02087620(void *o);
extern void func_ov007_021a26b0(void *o, void *c);
extern void func_020095b8(void *dst, void *src);
extern void *func_020059cc(void *o);
extern char data_020ae6d4[];
extern char data_ov007_021c3d98[];
extern char data_ov007_021c3db4[];
extern uint32_t data_ov007_021c418c[];
extern uint32_t data_ov007_021c4194[];

uint8_t *func_ov007_021a30ec(uint8_t *p, uint32_t a, uint32_t b, uint8_t *c)
{
    uint8_t local[12];
    uint32_t *q;
    uint32_t *s;
    uint32_t z1, z2, t1, t2, v0, v1;
    char *vt1, *vt2;

    func_02056c9c(p, 0);
    q = (uint32_t *)(p + 0x80);
    *(char **)q = data_020ae6d4;
    z1 = 0;
    q[1] = z1;
    q[2] = z1;
    q[3] = z1;
    s = q + 4;
    z2 = 0;
    s[0] = z2;
    s[1] = z2;
    s[2] = z2;
    func_02087620(q + 7);
    vt1 = data_ov007_021c3d98;
    vt2 = data_ov007_021c3db4;
    *(char **)p = vt1;
    *(char **)(p + 0x80) = vt2;
    *(uint32_t *)(p + 0xc8) = a;
    *(uint32_t *)(p + 0xcc) = b;
    *(uint8_t **)(p + 0xd0) = c;
    *(uint32_t *)(p + 0xd4) = *(uint32_t *)(c + 0xa4);
    t2 = *(uint32_t *)(c + 0xac);
    t1 = *(uint32_t *)(c + 0xa8);
    *(uint32_t *)(p + 0xd8) = t1;
    *(uint32_t *)(p + 0xdc) = t2;
    func_ov007_021a26b0(local, c);
    func_020095b8(p + 0xe0, local);
    func_020059cc(local);
    {
        P u = *(P *)data_ov007_021c418c;
        *(P *)(p + 0xb8) = u;
    }
    {
        P u = *(P *)data_ov007_021c4194;
        *(P *)(p + 0xc0) = u;
    }
    return p;
}
