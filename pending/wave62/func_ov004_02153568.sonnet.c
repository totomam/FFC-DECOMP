#include "ffc/types.h"
extern void func_0206da88(void *a, uint16_t b);
extern int func_ov004_02153514(void);
extern void func_ov004_02153598(void *a, int b, int c);
void func_ov004_02153568(uint8_t *self, int idx) {
    void *p = *(void **)(self + 0x290);
    if (p != 0) {
        func_0206da88(p, (uint16_t)(idx + 1));
        return;
    }
    func_ov004_02153598(self, idx, func_ov004_02153514());
}
