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
extern void **data_020b93b8;

typedef struct { int32_t x; int32_t y; uint16_t h; uint16_t pad; void *p; uint8_t b; } S;

void func_ov003_02164190(void *a0, void *a1, uint32_t a2, S s) {
    uint8_t o1[16];
    uint8_t o2[16];
    uint32_t eid;
    int32_t dx;
    int32_t dy;
    uint32_t *p;
    int ok;

    if (s.p != 0) {
        eid = (uint16_t)func_ov003_021481c0(s.p);
        if (eid != 0) {
            ok = 0;
            if (a0 != 0 && a2 == *(uint32_t *)func_ov003_02153470(func_ov003_0214649c(a0))) {
                if (func_ov003_021464f4(a0, eid) != 0) {
                    p = (uint32_t *)func_ov003_02155b40(func_ov003_021464f4(a0, eid));
                    dx = (int32_t)(p[3] - s.y);
                    dy = (int32_t)(p[2] - s.x);
                    ok = 1;
                }
            }
            if (!ok) {
                func_0201d014(*data_020b93b8, eid, o2);
                if (func_02036bfc(o2) == a2) {
                    p = (uint32_t *)func_02036c0c(o2);
                    dx = (int32_t)(p[1] - s.y);
                    dy = (int32_t)(p[0] - s.x);
                    ok = 1;
                }
            }
            if (ok) {
                s.h = (uint16_t)func_020816d4(dx);
            }
        }
    }

    eid = (uint16_t)func_ov003_021481c0(a1);
    if (eid != 0) {
        func_0201d014(*data_020b93b8, eid, o1);
        func_02036c18(o1, 1);
        func_02036c80(o1, a2);
        func_02036ca8(o1, &s);
        func_02036c94(o1, s.h);
        func_02036c28(o1, s.b);
        func_02036c38(o1, 1);
        func_0201cff8(*data_020b93b8, eid, o1);
        if (a0 != 0) {
            func_ov003_02148254(a0, eid);
        }
    }
}
