#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern void *func_ov003_0214a1c4(void *obj, S s);
extern void func_02056bc0(void *object, void *node);
extern S data_ov003_02179ee4;

void func_ov003_02152648(uint8_t *p) {
    void *n = func_ov003_0214a1c4(p, data_ov003_02179ee4);
    func_02056bc0(*(void **)(p + 0xa0), n);
}
