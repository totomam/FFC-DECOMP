#include "ffc/types.h"
extern int func_ov003_0215b54c(void *);
extern int func_ov003_0214649c(int);
extern void func_ov003_02153e10(uint32_t *, int);
extern void func_ov003_02157b6c(void *, int, int, uint32_t, int, int, int);
extern void func_ov003_0215b4cc(void *);
void func_ov003_021585f8(uint8_t *p) {
    uint32_t w[5];
    if (p[0xaf] == 0 && func_ov003_0215b54c(p) == 0) {
        int r = func_ov003_0214649c(*(int *)(p + 0x108));
        uint32_t *vp = &w[4];
        func_ov003_02153e10(vp, r);
        func_ov003_02157b6c(p, 1, 1, *vp, 0, 0, 0);
    }
    *(int *)(p + 0x324) = 0;
    *(int *)(p + 0x328) = 0;
    *(uint16_t *)(p + 0x320) = 0;
    func_ov003_0215b4cc(p);
}
