#include "ffc/types.h"

extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void func_02056db0(void *a);
extern void func_02056844(void *a);

void *func_ov004_02146ec0(void *self) {
    uint8_t *q = (uint8_t *)self + 0x94;
    if (*(void **)(q + 4) != 0) {
        if (q[0xc] != 0) {
            func_02052d3c(*(void **)(q + 4), *(uint32_t *)(q + 8));
        }
        func_02052c04(*(void **)(q + 4));
    }
    func_02053290(q);
    func_02056db0(self);
    func_02056844(self);
    return self;
}
