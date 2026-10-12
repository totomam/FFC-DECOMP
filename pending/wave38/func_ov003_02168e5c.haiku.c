#include "ffc/types.h"

extern void func_02005988(void *obj, void *data);
extern void func_02018c48(void *dst, void *src);
extern void func_020059cc(void *object);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02092878(void *a, void *b);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern uint8_t data_ov003_0217b22c[];
extern uint8_t data_ov003_021d4e88[];

void *func_ov003_02168e5c(uint32_t idx)
{
    uint32_t sub[4];
    uint32_t frame[3];
    uint32_t *f;
    uint32_t *s;
    uint8_t *m;
    uint32_t *tbl;
    uint8_t *q;
    void *data;

    f = frame;
    func_02005988(f, data_ov003_0217b22c);
    s = sub;
    func_02018c48(s, f);
    func_020059cc(f);

    m = (uint8_t *)func_02052d90((void *)s[1], s[2]);
    tbl = (uint32_t *)(m + *(uint32_t *)(m + 8));
    q = m + tbl[idx];
    data = data_ov003_021d4e88;
    func_02092878(data, q + *(uint32_t *)(q + 4));

    if (s[1] != 0) {
        if (((uint8_t *)s)[12]) {
            func_02052d3c((void *)s[1], s[2]);
        }
        func_02052c04((void *)s[1]);
    }
    func_02053290(s);
    return data;
}
