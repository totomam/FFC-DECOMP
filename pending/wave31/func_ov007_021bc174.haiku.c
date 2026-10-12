#include "ffc/types.h"

extern void *func_02056aec(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021bb33c(void *mem, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_ov001_0218dde0(void *obj, int flag);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021bc174(void *param0)
{
    uint8_t *p = (uint8_t *)param0;
    void *saved = func_02056aec(param0);
    void *node = func_0205681c(0x148);
    if (node != 0) {
        node = func_ov007_021bb33c(node,
            *(uint32_t *)(p + 0xb0),
            *(uint32_t *)(p + 0xb4),
            *(uint32_t *)(p + 0xb8),
            *(uint32_t *)(p + 0x98));
    }
    void *obj = func_ov001_0218dde0(param0, 1);
    func_02056bc0(obj, node);
    func_02056bc0(obj, saved);
}
