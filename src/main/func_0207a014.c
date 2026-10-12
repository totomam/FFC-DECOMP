#include "ffc/types.h"

extern void func_02077b34(void *a, void *b);
extern void func_02079e98(void *a, void *b);
extern void func_02079ed0(void *a);
extern uint8_t data_0213e258[];

void func_0207a014(uint8_t *p, uint8_t v) {
    void *r4 = *(void **)(p + 4);
    if (r4 != 0) {
        func_02077b34(r4, p);
        *(void **)(p + 4) = 0;
    }
    func_02077b34(data_0213e258, p);
    p[0x3d] = v;
    if (r4 != 0) {
        func_02079e98(r4, p);
    }
    func_02079ed0(p);
}
