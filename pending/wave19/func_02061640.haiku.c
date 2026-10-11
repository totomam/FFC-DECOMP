#include "ffc/types.h"

extern void *func_02061504(void *object, uint32_t value);
extern void *func_02061568(const void *object);
extern char data_020b1498[];

void *func_02061640(void *object, uint32_t value) {
    uint32_t *p = (uint32_t *)object;
    uint32_t *q;
    uint32_t v = 1;
    func_02061504(object, value);
    *(void **)object = data_020b1498;
    q = (uint32_t *)func_02061568(object);
    if (q[1] & 1) {
        v = 1;
    } else {
        v = 0;
    }
    p[9] = v;
    return object;
}
