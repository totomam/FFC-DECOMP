#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_02069320(void *object, uint32_t value);

typedef struct {
    uint8_t pad[0xcc];
    void *slots[5];
} Obj;

void func_ov010_021c8da0(void *self, uint32_t base)
{
    Obj *p = (Obj *)self;
    func_02069320(p->slots[(uint32_t)(func_0209a76c(base + 0, 5) >> 32)], 0);
    func_02069320(p->slots[(uint32_t)(func_0209a76c(base + 1, 5) >> 32)], 1024);
    func_02069320(p->slots[(uint32_t)(func_0209a76c(base + 2, 5) >> 32)], 0);
    func_02069320(p->slots[(uint32_t)(func_0209a76c(base + 3, 5) >> 32)], 0);
    func_02069320(p->slots[(uint32_t)(func_0209a76c(base + 4, 5) >> 32)], 2048);
}
