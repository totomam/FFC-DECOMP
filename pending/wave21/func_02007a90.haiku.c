#include "ffc/types.h"

extern int32_t func_02005fd0(void *p);
extern void func_0207ad00(void *p, int32_t x);
extern void func_02005f88(void *p, int32_t x);

void func_02007a90(uint8_t *self, int32_t idx) {
    if (idx >= func_02005fd0(self + 0x48)) {
        return;
    }
    func_0207ad00(*(void **)(self + 4), idx + 1);
    func_02005f88(self + 0x48, idx);
}
