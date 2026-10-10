#include "ffc/types.h"

extern void func_0209d02c(void *p, uint32_t a, uint32_t b, void (*f)(void));
extern void *func_ov002_021c8e40(void *object);
extern void *func_ov002_021c9130(void *object);

void *func_ov002_021c8f10(uint8_t *p) {
    func_0209d02c(p + 0x38, 3, 0x8, (void (*)(void))func_ov002_021c9130);
    func_ov002_021c8e40(p);
    return p;
}
