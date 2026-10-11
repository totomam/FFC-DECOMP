#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
extern void *func_0205681c(uint32_t size);
extern void *func_ov005_02195e78(void *a, uint32_t b, S s, uint32_t e, uint32_t f);
extern void func_ov005_02196144(void *obj, uint8_t v);
extern void func_ov005_021961f8(void *obj, uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern S data_ov009_021b083c;

void func_ov009_021a4ab4(uint8_t *p) {
    void *obj = func_0205681c(0xa0);
    if (obj != 0) {
        obj = func_ov005_02195e78(obj, *(uint32_t *)(p + 0xb8), data_ov009_021b083c, 2, 0);
    }
    *(void **)(p + 0x16c) = obj;
    func_ov005_02196144(obj, (uint8_t)(p[0x27d] + 1));
    func_ov005_021961f8(*(void **)(p + 0x16c), 2);
    func_02056bc0(p + 0x48, *(void **)(p + 0x16c));
}
