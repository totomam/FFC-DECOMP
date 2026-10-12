#include "ffc/types.h"

extern void func_02035f58(void *object);
extern void func_0201f460(const void *object, uint32_t index, void *output);
extern uint32_t func_020363bc(const void *object);
extern void *func_02035fd0(void *object);
extern uint32_t data_020b93b8;

int func_ov009_021a9fc8(void *unused, uint32_t *pa, uint32_t *pb) {
    uint32_t p[2];
    uint32_t v[2];
    uint8_t A[0x60];
    uint8_t B[0x60];
    int i;
    int ret;
    uint32_t val;

    func_02035f58(A);
    func_02035f58(B);
    func_0201f460((const void *)data_020b93b8, *pa, A);
    func_0201f460((const void *)data_020b93b8, *pb, B);
    p[0] = func_020363bc(A);
    p[1] = func_020363bc(B);

    for (i = 0; i < 2; i++) {
        uint8_t t = ((uint8_t *)p[i])[1];
        switch (t) {
            case 1: v[i] = 0; continue;
            case 2: v[i] = 2; continue;
            case 3: v[i] = 1; continue;
            case 4: val = 3; break;
            case 5: val = 4; break;
            default: val = 5; break;
        }
        v[i] = val;
    }

    ret = 1;
    if (v[0] >= v[1]) {
        ret = 0;
    }
    func_02035fd0(B);
    func_02035fd0(A);
    return ret;
}
