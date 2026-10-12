#include "ffc/types.h"

extern void *func_0205681c(uint32_t v);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_020316bc(void *a, uint32_t b, void *c, int d, int e, int f, int g, int h);
extern uint32_t func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *dst, uint32_t v);
extern void func_02031754(void *a, int b, void *c);
extern void func_020059cc(void *object);
extern void *func_02062a30(void *owner);
extern void *func_ov013_021c02dc(void *self, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern int32_t data_ov013_021c45e4[];
extern void *data_0213df18;
extern void *data_020b8e44;
extern uint32_t data_ov013_021c4890[];

void func_ov013_021c0188(uint8_t *self, int n)
{
    void *o = *(void **)(self + 0xe0);
    void **vt = *(void ***)o;
    void *r;
    int m, x, ph, m2, A, B, t7, t2;
    uint32_t idx;
    uint32_t t1[4];
    uint32_t t2b[4];

    ((void (*)(void *))vt[11])(o);

    idx = *(uint32_t *)(self + 0x108);
    *(uint32_t *)(self + 0xfc) = (uint32_t)n + (idx << 3);
    *(int32_t *)(self + 0x100) = 0;

    r = func_0205681c(0x118);
    if (r != 0) {
        int32_t *d = data_ov013_021c45e4;
        x = n / 4;
        t7 = d[22] * x;
        t2 = d[23] * x;
        m = n % 4;
        ph = (m == 3);
        m2 = m - ph;
        A = d[26] + m2 * d[18];
        A = A + t7;
        A = A + d[6];
        B = d[27] + (m - ph) * d[19];
        B = B + t2;
        B = B + d[7];
        r = func_020316bc(r, func_0204f7ec(data_0213df18), self + 0x100, A, B, 0, 0, 0);
    }

    func_02005988(t1, func_020159c8(data_020b8e44, 0xc9));
    func_02031754(r, 1, t1);
    func_020059cc(t1);

    func_02005988(t2b, func_020159c8(data_020b8e44, 0xca));
    func_02031754(r, -2, t2b);
    func_020059cc(t2b);

    {
        void *o2 = func_02062a30(*(void **)(self + 0xe0));
        void *q = func_ov013_021c02dc(self, data_ov013_021c4890[0], data_ov013_021c4890[1]);
        func_02056bc0(self + 0x14, r);
        func_02056bc0(self + 0x14, q);
        func_02056bc0(self + 0x14, o2);
    }
}
