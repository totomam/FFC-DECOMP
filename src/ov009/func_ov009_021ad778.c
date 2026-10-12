#include "ffc/types.h"

extern void func_ov009_021ad840(void *p);

int func_ov009_021ad778(uint8_t *self, uint8_t v) {
    uint8_t cur = self[0x27b];
    void *obj;
    void **vt;
    if (cur != v) {
        if (cur == 0) {
            self[0x27b] = 1;
        } else if (cur == 1) {
            self[0x27b] = 0;
        }
        func_ov009_021ad840(self);
        obj = *(void **)(self + 0xd4);
        vt = *(void ***)obj;
        ((void (*)(void *, int, int))vt[14])(obj, self[0x280] + 1, 0);
        obj = *(void **)(self + 0xc0);
        vt = *(void ***)obj;
        ((void (*)(void *, int, int))vt[14])(obj, 0, -0xc0 * self[0x27b]);
        return 1;
    }
    return 0;
}
