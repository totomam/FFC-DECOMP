/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern uint8_t data_ov003_0217a048[];
extern uint8_t *func_ov003_02155b40(void *p);
extern void func_ov003_02157b6c(void *p, int a, int b, int c, int d, int e, int f, int g);
extern void func_ov003_0215b1b0(void *p, int a, int b);
extern void func_02056844(void *p);
void *func_ov003_0215b6ec(uint8_t *self) {
    uint16_t s; int k = 1; int u;
    *(void **)self = data_ov003_0217a048;
    s = *(uint16_t *)(self + 0x52);
    if (s == 0 || s == 3) {
        uint16_t v = *(uint16_t *)(func_ov003_02155b40(*(void **)(self + 0x4c)) + 0x12);
        if (v == *(uint16_t *)(self + 0x56))
            func_ov003_02157b6c(*(void **)(self + 0x4c), k, 1, k << 12, 0, 0, 0, u);
        func_ov003_0215b1b0(*(void **)(self + 0x4c), *(uint16_t *)(self + 0x54), 0);
    }
    func_02056844(self);
    return self;
}
