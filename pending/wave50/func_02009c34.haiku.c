#include "ffc/types.h"

extern uint32_t func_02021338(uint32_t x);
extern void func_02056c4c(uint32_t x);
extern void *func_0203b95c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_020aaddc[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_02009c34(uint8_t *self, Pair p, uint32_t n)
{
    void *obj;

    func_02021338(0xdd);
    func_02056c4c(*(uint32_t *)(self + 0x9c));
    obj = func_0203b95c(*(void **)(data_020aaddc + 0xc), *(uint32_t *)(self + 0xa0), 0, 1);
    ((void (*)(void *, Pair))(*(void ***)obj)[3])(obj, p);
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)obj)[14])(obj, n + 1, 0);
    ((void (*)(void *))(*(void ***)obj)[10])(obj);
    func_02056bc0(*(void **)(self + 0x9c), obj);
}
