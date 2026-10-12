#include "ffc/types.h"

extern void func_0202f670(void);
extern void func_02030ea4(uint32_t p);
extern void func_02056844(uint32_t p);
extern uint32_t data_021394f0[];

void func_0202f62c(void) {
    uint32_t v;
    func_0202f670();
    v = data_021394f0[1];
    if (v != 0) {
        func_02030ea4(v);
        func_02056844(v);
        data_021394f0[1] = 0;
    }
    v = data_021394f0[2];
    if (v != 0) {
        func_02030ea4(v);
        func_02056844(v);
        data_021394f0[2] = 0;
    }
}
