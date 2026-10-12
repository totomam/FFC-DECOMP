#include "ffc/types.h"

extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_02005858(void *a, uint32_t b, void *c, uint32_t d, uint32_t e);
typedef struct { uint32_t a, b; } P;
extern void func_0205f52c(void *a, P p);
extern void func_0205f3e0(void *a, uint32_t b);
extern void func_0205f498(void *a);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c7ad0[];
extern void *data_0213df18;
extern P data_ov007_021c78a8;

void func_ov007_021bbab8(void *param_0)
{
    uint8_t *self = (uint8_t *)param_0;
    uint8_t *sub = *(uint8_t **)(self + 0xb8);
    uint32_t local[17];
    uint8_t *inner;

    func_02091b10(local, (uint32_t)data_ov007_021c7ad0, *(uint32_t *)(sub + 0x24));

    inner = (uint8_t *)func_0205681c(0x54);
    if (inner != 0) {
        inner = (uint8_t *)func_02005858(inner, func_0204f7ec(data_0213df18), local, 1, 0);
    }

    *(uint8_t **)(self + 0x138) = inner;

    func_0205f52c(*(void **)(*(uint8_t **)(inner + 0x50) + 0x94), data_ov007_021c78a8);
    func_0205f3e0(*(void **)(*(uint8_t **)(*(uint8_t **)(self + 0x138) + 0x50) + 0x94), 2);
    func_0205f498(*(void **)(*(uint8_t **)(*(uint8_t **)(self + 0x138) + 0x50) + 0x94));
    func_02056bc0(self + 0x48, *(void **)(self + 0x138));
}
