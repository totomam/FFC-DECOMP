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
extern uint32_t data_0213df18;
extern uint32_t data_ov003_02179ac8[];

void func_ov003_0214f604(uint8_t *a0, uint32_t a1)
{
    uint8_t local[0x44];
    uint8_t *obj;
    void *p;
    uint32_t *pair;
    uint32_t idx;

    obj = a0;
    idx = a1;
    pair = data_ov003_02179ac8 + idx * 2;
    func_02091b10(local, (uint32_t)data_ov003_02179af0, idx);
    p = func_0205681c(0x54);
    if (p != 0) {
        p = func_02005858(p, func_0204f7ec(&data_0213df18), local, 1, 0);
    }
    *(void **)(obj + 0x80 + idx * 4) = p;
    func_0205f52c(*(uint32_t *)(*(uint8_t **)(*(uint8_t **)(obj + 0x80 + idx * 4) + 0x50) + 0x94),
                  pair[0], pair[1]);
    func_0205f3e0(*(uint32_t *)(*(uint8_t **)(*(uint8_t **)(obj + 0x80 + idx * 4) + 0x50) + 0x94), 2);
    func_0205f498(*(uint32_t *)(*(uint8_t **)(*(uint8_t **)(obj + 0x80 + idx * 4) + 0x50) + 0x94));
    func_02056bc0(obj + 0x48, *(void **)(obj + 0x80 + idx * 4));
    func_0205f2f0(*(uint32_t *)(*(uint8_t **)(*(uint8_t **)(obj + 0x80 + idx * 4) + 0x50) + 0x94), 1);
}
