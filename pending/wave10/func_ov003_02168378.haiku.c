#include "ffc/types.h"

extern void func_020424e0(void *p);
extern void *func_ov003_0214d964(void);
extern void *func_ov003_0214d9a0(void);
extern void *func_02056aec(void *p);
extern void func_02056bc0(void *object, void *node);

void func_ov003_02168378(uint8_t *self) {
    uint8_t *q;
    void *n;
    void *m;
    func_020424e0(*(void **)(self + 0x80));
    if (*(self + 0x84) != 0) {
        n = func_ov003_0214d964();
    } else {
        n = func_ov003_0214d9a0();
    }
    m = func_02056aec(self);
    q = self + 0x14;
    func_02056bc0(q, n);
    func_02056bc0(q, m);
}
