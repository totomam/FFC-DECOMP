#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02177eb0(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);

void func_ov003_02178044(uint8_t *p) {
    void *node = func_0205681c(0x9c);
    if (node) {
        node = func_ov003_02177eb0(node,
                                   *(uint32_t *)(p + 0x8c),
                                   *(uint32_t *)(p + 0x9c),
                                   *(uint32_t *)(p + 0x94),
                                   *(uint32_t *)(p + 0x98));
    }
    func_02056bc0(*(void **)(p + 0xa0), node);
}
