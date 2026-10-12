#include "ffc/types.h"

extern void *func_02077b80(void *list, void *prev);
extern void func_02077b34(void *list, void *node);
extern void func_02078124(void *obj, uint32_t v);
extern void func_0207ae08(void);
extern void func_0207ade0(void *p);

typedef void (*cb_t)(void *, uint32_t, uint32_t, uint32_t);

void func_0207ac18(void *p) {
    uint8_t flag = 0;
    uint8_t *r4 = (uint8_t *)func_02077b80((uint8_t *)p + 4, 0);
    if (r4 == 0) {
        goto done;
    }
    do {
        uint8_t *r5 = (uint8_t *)func_02077b80(r4, 0);
        while (r5 != 0) {
            cb_t cb = *(cb_t *)(r5 + 0xc);
            if (cb != 0) {
                cb(r5 + 0x20, *(uint32_t *)(r5 + 8), *(uint32_t *)(r5 + 0x10), *(uint32_t *)(r5 + 0x14));
                flag = 1;
            }
            r5 = (uint8_t *)func_02077b80(r4, r5);
        }
        func_02077b34((uint8_t *)p + 4, r4);
        r4 = (uint8_t *)func_02077b80((uint8_t *)p + 4, 0);
    } while (r4 != 0);
done:
    func_02078124(*(void **)p, 3);
    if (flag != 0) {
        func_0207ae08();
    }
    func_0207ade0(p);
}
