#include "ffc/types.h"

extern void *func_02056aec(void *obj);
extern void *func_0205681c(uint32_t size);
extern void *func_02047920(void *heap, uint32_t a, uint16_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);

void func_ov003_021735c8(uint8_t *obj)
{
    void *r4 = func_02056aec(obj);
    void *r1 = func_0205681c(0x88);
    if (r1 != 0) {
        r1 = func_02047920(r1, *(uint32_t *)(obj + 0x88), (uint16_t)*(uint32_t *)(obj + 0x98), 0);
    }
    func_02056bc0(obj + 0x14, r1);
    func_02056bc0(obj + 0x14, r4);
}
