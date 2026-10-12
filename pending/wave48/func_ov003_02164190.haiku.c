#include "ffc/types.h"

extern uint32_t func_ov003_021481c0(void *p);
extern void *func_ov003_0214649c(void *p);
extern void *func_ov003_02153470(void *p);
extern void *func_ov003_021464f4(void *a, uint32_t b);
extern void *func_ov003_02155b40(void *p);
extern void func_0201d014(void *a, uint32_t b, void *c);
extern uint32_t func_02036bfc(void *p);
extern void *func_02036c0c(void *p);
extern int32_t func_020816d4(int32_t x);
extern void func_02036c18(void *p, uint32_t v);
extern void func_02036c80(void *p, uint32_t v);
extern void func_02036ca8(void *p, void *q);
extern void func_02036c94(void *p, uint32_t v);
extern void func_02036c28(void *p, uint32_t v);
extern void func_02036c38(void *p, uint32_t v);
extern void func_0201cff8(void *a, uint32_t b, void *c);
extern void func_ov003_02148254(void *a, uint32_t b);
extern void *data_020b93b8;

struct Blk {
    uint32_t f0;
    uint16_t f4;
    uint16_t p6;
    uint32_t f8;
    uint8_t f12;
};

void func_ov003_02164190(void *a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    struct Blk *blk = (struct Blk *)&a2;
    uint8_t o1[16];
    uint8_t o2[16];
    uint32_t eid;
    int32_t dx;
    int32_t dy;
    int32_t ret;
    uint32_t *p;
    int ok;

    if (a4 != 0) {
        eid = (uint16_t)func_ov003_021481c0((void *)a4);
        if (eid != 0) {
            ok = 0;
            if (a0 != 0 && a2 == *(uint32_t *)func_ov003_02153470(func_ov003_0214649c(a0))) {
                if (func_ov003_021464f4(a0, eid) != 0) {
                    p = (uint32_t *)func_ov003_02155b40(func_ov003_021464f4(a0, eid));
                    dx = (int32_t)(p[3] - a2);
                    dy = (int32_t)(p[2] - a1);
                    ok = 1;
                }
            }
            if (!ok) {
                func_0201d014(*(void **)data_020b93b8, eid, o2);
                if (func_02036bfc(o2) == a2) {
                    p = (uint32_t *)func_02036c0c(o2);
                    dx = (int32_t)(p[1] - a2);
                    dy = (int32_t)(p[0] - a1);
                    ok = 1;
                }
            }
            if (ok) {
                ret = func_020816d4(dx);
                blk->f4 = (uint16_t)ret;
            }
        }
    }

    eid = (uint16_t)func_ov003_021481c0((void *)a1);
    if (eid != 0) {
        func_0201d014(*(void **)data_020b93b8, eid, o1);
        func_02036c18(o1, 1);
        func_02036c80(o1, a2);
        func_02036ca8(o1, &a1);
        func_02036c94(o1, blk->f4);
        func_02036c28(o1, blk->f12);
        func_02036c38(o1, 1);
        func_0201cff8(*(void **)data_020b93b8, eid, o1);
        if (a0 != 0) {
            func_ov003_02148254(a0, eid);
        }
    }
}
