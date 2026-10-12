#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t *func_020696e8(const void *object);
extern void func_ov007_021b672c(void *a);
extern void func_ov007_021b61f4(void *a, int v);
extern int func_020692e8(void *p);
extern void func_ov007_021b6574(void *a);
extern void func_020692f0(void *p);
extern int func_020692e0(void *p);
extern void func_02069300(void *p);

void func_ov007_021b68e8(void *param_0)
{
    uint8_t *a = (uint8_t *)param_0;
    uint8_t *p;
    uint8_t *q;
    uint8_t flag;
    int r4;
    uint32_t *o;

    p = a + 0x14;
    flag = p[0x12];
    q = p + 0x1c;
    if (flag != 0) {
        func_0208763c(q);
    }
    r4 = (*(uint32_t *)(p + 0x14)) == 0;
    if (flag != 0) {
        func_02087678(q);
    }
    if (r4 == 0) {
        return;
    }
    o = func_020696e8(a);
    if (o[1] & (o[1] ^ o[2]) & 2) {
        if (a[0x12c] != 0) {
            func_ov007_021b672c(a);
            func_ov007_021b61f4(a, 1);
            return;
        }
        if (func_020692e8(*(void **)(a + 0xbc))) {
            func_ov007_021b6574(a);
            return;
        }
        func_020692f0(*(void **)(a + 0xbc));
        return;
    }
    o = func_020696e8(a);
    if (o[1] & (o[1] ^ o[2]) & 8) {
        if (func_020692e0(*(void **)(a + 0xc0))) {
            if (func_020692e8(*(void **)(a + 0xc0))) {
                func_02069300(*(void **)(a + 0xc0));
            } else {
                func_020692f0(*(void **)(a + 0xc0));
            }
        }
    }
}
