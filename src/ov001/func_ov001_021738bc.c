#include "ffc/types.h"

extern int func_ov001_02173694(void *p);
extern int func_ov001_02173634(void *p);

int func_ov001_021738bc(void *p) {
    void *q = *(void **)((uint8_t *)p + 0x164);
    if (q == 0) {
        return 0;
    }
    if (*(uint32_t *)((uint8_t *)q + 0xc) != 0) {
        return func_ov001_02173694(p);
    }
    return func_ov001_02173634(p);
}
