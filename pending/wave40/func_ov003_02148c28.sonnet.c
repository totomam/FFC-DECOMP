#include "ffc/types.h"

extern uint8_t *func_ov003_02146494(void *self);
extern void *func_ov003_021464f4(void *self);
extern int32_t func_ov003_0214649c(void *self);
extern uint8_t *func_02052d90(const void *mar, uint32_t index);
extern void *func_ov003_02155b40(void *obj);
extern void func_ov003_0214dbc8(void *self, uint8_t *m, uint8_t flag);

void func_ov003_02148c28(void *self) {
    uint8_t *s = (uint8_t *)self;
    uint8_t *a = func_ov003_02146494(self);
    void *obj;
    uint8_t *q;
    uint8_t *m;
    uint8_t *r4 = 0;
    uint32_t off;

    if (*(uint32_t *)(a + 0xb0) == 0) {
        return;
    }
    obj = func_ov003_021464f4(self);
    if (obj == 0) {
        return;
    }
    if (func_ov003_0214649c(self) == 0) {
        return;
    }
    q = (uint8_t *)(uintptr_t)func_ov003_0214649c(self);
    m = func_02052d90(*(void **)(q + 0xe4), *(uint32_t *)(q + 0xe8));
    off = *(uint32_t *)(m + 0x8c);
    if (off != 0) {
        r4 = m + off;
    }
    if (r4 == 0) {
        return;
    }
    obj = func_ov003_02155b40(obj);
    *(uint8_t *)(s + 0x3ec) = 1;
    if (*(int32_t *)(obj + 0xc) > *(int32_t *)(r4 + 4)) {
        *(uint8_t *)(s + 0x3ec) = 0;
    }
    func_ov003_0214dbc8(self, r4, *(uint8_t *)(s + 0x3ec));
}
