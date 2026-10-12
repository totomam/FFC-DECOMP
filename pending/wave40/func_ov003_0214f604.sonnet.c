#include "ffc/types.h"

extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_02005858(void *obj, uint32_t a, void *node, uint32_t b, uint32_t c);
extern void func_0205f52c(uint32_t obj, uint32_t a, uint32_t b);
extern void func_0205f3e0(uint32_t obj, uint32_t value);
extern void func_0205f498(uint32_t obj);
extern void func_02056bc0(void *object, void *node);
extern void func_0205f2f0(uint32_t obj, uint32_t value);
extern uint8_t data_ov003_02179af0[];
extern void *data_0213df18;
extern uint32_t data_ov003_02179ac8[];

typedef struct { uint32_t a, b; } P;
extern P data_ov003_02179ac8p[];

void func_ov003_0214f604(uint8_t *a0, uint32_t a1)
{
    uint8_t local[0x44];
    void *p;
    void **slot;

    func_02091b10(local, (uint32_t)data_ov003_02179af0, a1);
    p = func_0205681c(0x54);
    if (p != 0) {
        p = func_02005858(p, func_0204f7ec(data_0213df18), local, 1, 0);
    }
    slot = (void **)(a0 + 0x80);
    slot[a1] = p;
    func_0205f52c(*(uint32_t *)(*(uint8_t **)((uint8_t *)slot[a1] + 0x50) + 0x94),
                  ((P *)data_ov003_02179ac8)[a1].a, ((P *)data_ov003_02179ac8)[a1].b);
    func_0205f3e0(*(uint32_t *)(*(uint8_t **)((uint8_t *)slot[a1] + 0x50) + 0x94), 2);
    func_0205f498(*(uint32_t *)(*(uint8_t **)((uint8_t *)slot[a1] + 0x50) + 0x94));
    func_02056bc0(a0 + 0x48, slot[a1]);
    func_0205f2f0(*(uint32_t *)(*(uint8_t **)((uint8_t *)slot[a1] + 0x50) + 0x94), 1);
}
