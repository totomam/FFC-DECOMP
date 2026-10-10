#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern void *func_ov003_0214a204(void *obj, S s);
extern void func_02056bc0(void *object, void *node);
extern S data_ov003_02179f1c;

void func_ov003_02153080(uint8_t *p) {
    void *n = func_ov003_0214a204(p, data_ov003_02179f1c);
    func_02056bc0(*(void **)(p + 0xc0), n);
}
