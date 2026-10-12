#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t zero);
extern void func_02087620(void *object);
extern uint32_t data_020ae6d4[];
extern uint32_t data_ov007_021c3e38[];
extern uint32_t data_ov007_021c3e54[];
extern uint32_t data_ov007_021c4208[];

void *func_ov007_021a4888(void *obj, uint32_t a, uint32_t b, uint32_t c) {
    uint32_t *p = (uint32_t *)obj;
    uint32_t zero;
    uint32_t *q;
    uint32_t *r;

    zero = 0;
    func_02056c9c(obj, 0);
    q = p + 0x20;
    *q = (uint32_t)data_020ae6d4;
    q[1] = zero;
    q[2] = zero;
    q[3] = zero;
    q[4] = zero;
    r = q + 4;
    q += 7;
    r[1] = zero;
    r[2] = zero;
    func_02087620(q);
    p[0] = (uint32_t)data_ov007_021c3e38;
    p[0x20] = (uint32_t)data_ov007_021c3e54;
    p[0x32] = a;
    p[0x33] = b;
    p[0x34] = c;
    p[0x47] = zero;
    p[0x48] = zero;
    p[0x49] = zero;
    p[0x4a] = zero;
    p[0x4b] = zero;
    p[0x4c] = zero;
    p[0x35] = 0x401326;
    p[0x36] = 0x2e;
    if (c == 2) {
        p[0x35] = 0x400868;
        p[0x36] = 0x2f;
    }
    p[0x2e] = data_ov007_021c4208[0];
    p[0x2f] = data_ov007_021c4208[1];
    return obj;
}
