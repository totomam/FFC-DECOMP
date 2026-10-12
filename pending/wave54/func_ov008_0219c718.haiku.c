#include "ffc/types.h"

extern void *func_0205681c(void);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_020316bc(void *a, uint32_t b, void *c, int32_t d, int32_t e, int32_t f, int32_t g, int32_t h);
extern void *func_020159c8(void *object, uint32_t id);
extern void func_02005988(void *dst, void *src);
extern void func_02031754(void *a, uint32_t b, void *c);
extern void func_020059cc(void *object);
extern void *func_02062a30(void *owner);
extern void *func_ov008_0219c86c(void *owner, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);

extern int32_t data_ov008_021a7cbc[];
extern void *data_0213df18;
extern void *data_020b8e44;
extern uint32_t data_ov008_021a7eb4[];

void func_ov008_0219c718(uint8_t *p, int32_t x)
{
    void *tmp;
    void *r4;
    void *r6;
    uint32_t s1[3];
    uint32_t s2[3];
    int32_t q;
    int32_t m;
    int32_t f;
    int32_t X;
    int32_t Y;
    uint32_t t;

    ((void (*)(void *))(*(void ***)*(void **)(p + 0xe4))[0x2c / 4])(*(void **)(p + 0xe4));

    *(int32_t *)(p + 0xfc) = x + ((int32_t)p[0x105] << 3);
    *(int32_t *)(p + 0x100) = 0;

    tmp = func_0205681c();
    if (tmp != 0) {
        q = x / 4;
        m = x % 4;
        f = (m == 3);
        X = data_ov008_021a7cbc[6] + (m - f) * data_ov008_021a7cbc[16]
            + q * data_ov008_021a7cbc[18] + data_ov008_021a7cbc[20];
        Y = data_ov008_021a7cbc[7] + (m - f) * data_ov008_021a7cbc[17]
            + q * data_ov008_021a7cbc[19] + data_ov008_021a7cbc[21];
        t = func_0204f7ec(data_0213df18);
        tmp = func_020316bc(tmp, t, p + 0x100, X, Y, 0, 0, 0);
    }

    r4 = func_020159c8(data_020b8e44, 0xc9);
    func_02005988(s1, r4);
    func_02031754(tmp, 1, s1);
    func_020059cc(s1);

    r4 = func_020159c8(data_020b8e44, 0xca);
    func_02005988(s2, r4);
    func_02031754(tmp, (uint32_t)-2, s2);
    func_020059cc(s2);

    r4 = func_02062a30(*(void **)(p + 0xe4));
    r6 = func_ov008_0219c86c(p, data_ov008_021a7eb4[0], data_ov008_021a7eb4[1]);
    func_02056bc0(p + 0x14, tmp);
    func_02056bc0(p + 0x14, r6);
    func_02056bc0(p + 0x14, r4);
}
