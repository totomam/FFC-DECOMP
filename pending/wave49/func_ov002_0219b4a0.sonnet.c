#include "ffc/types.h"

extern uint32_t func_02005efc(void *object, void *first, ...);
extern void func_020095b8(void *a, void *b);
extern void func_02068ddc(uint32_t a, void *b);
extern void *func_020059cc(void *object);
extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov002_0219b5f4(void *object, uint32_t v);
extern uint32_t func_02064b40(uint32_t a);
extern void func_02021338(uint32_t a);
extern uint32_t data_ov002_021d4bc0[];
extern uint8_t data_ov002_021d3a38[];

typedef struct {
    uint8_t pad0[0x80];
    int32_t f80;
    int32_t f84;
    int32_t f88;
    uint32_t f8c;
    uint32_t f90;
    uint8_t pad1[0x10];
    uint32_t fa4;
} Obj;

void func_ov002_0219b4a0(Obj *p)
{
    int *q = &p->f88;
    int cur = *q;
    uint32_t arr[3];
    uint32_t tmp[3];
    int eq2, i, k, r7, eq, r5, flag, m;
    uint32_t v;
    uint32_t idx;

    if (p->f80 == cur) {
        return;
    }
    r7 = (cur == p->f84);
    for (i = 0; i < 6; i++) {
        cur = *q + ((p->f80 > cur) ? 1 : -1);
        *q = cur;
        if (p->f80 == cur) {
            break;
        }
    }
    eq = 0;
    for (k = 0; k < 3; k++) {
        arr[k] = eq;
    }
    func_02005efc(arr, data_ov002_021d4bc0, p->f88);
    func_020095b8(tmp, arr);
    func_02068ddc(p->f8c, tmp);
    func_020059cc(tmp);
    v = func_0209a76c(31 * p->f88, p->f84);
    func_ov002_0219b5f4(p, v);
    if (p->f88 == p->f84) {
        eq = 1;
    }
    if (r7 != eq) {
        flag = (p->fa4 != 0);
        v = func_02064b40(p->f90);
        idx = v;
        for (i = 0; i < 12; i++) {
            if (v == *(uint32_t *)(data_ov002_021d3a38 + (flag << 2) + (i << 3))) {
                idx = i;
                break;
            }
        }
        eq2 = (p->f88 == p->f84);
        if (0x577 & (1u << idx)) {
            m = eq2 ? 10 : 8;
        } else {
            m = eq2 ? 11 : 9;
        }
        {
            typedef void (*VFn)(void *, uint32_t, uint32_t);
            void *obj = (void *)p->f90;
            uint32_t val = *(uint32_t *)(data_ov002_021d3a38 + (flag << 2) + (m << 3));
            ((VFn)((void **)(*(void **)obj))[14])(obj, val, 0);
        }
        if (eq2) {
            func_02021338(0x44f);
        }
    }
    func_020059cc(arr);
}
