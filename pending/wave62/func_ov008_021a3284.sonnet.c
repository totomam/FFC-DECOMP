#include "ffc/types.h"
extern int func_ov008_021a3c78(uint8_t *p);
extern void func_02021338(int a);
extern void func_ov008_021a3a84(uint8_t *p);
static inline int setf(uint8_t *p, int i, uint8_t v) {
    uint8_t *q = p + 0x100;
    if (q[i] == v) return 0;
    q[i] = v;
    return 1;
}
void func_ov008_021a3284(uint8_t *p, int i, uint8_t v) {
    if (!setf(p, i, v)) return;
    if (v != 0) {
        *(int *)(p + 0x120) += func_ov008_021a3c78(p);
        p[0x124]++;
        func_02021338(0xbf);
    } else {
        *(int *)(p + 0x120) -= func_ov008_021a3c78(p);
        p[0x124]--;
        func_02021338(0xc0);
    }
    func_ov008_021a3a84(p);
}
