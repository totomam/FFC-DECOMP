#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern void func_0201e954(uint32_t a, uint32_t b, void *c);
extern int func_02036cfc(void *p);

int func_ov013_021c012c(int unused, uint32_t b) {
    uint8_t buf[0x18];
    func_0201e954(data_020b93b8, b, buf);
    if (func_02036cfc(buf) == 0) {
        return 1;
    }
    return 0;
}
