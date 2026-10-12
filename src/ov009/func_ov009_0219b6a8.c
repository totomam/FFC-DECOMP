#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern void *func_02005858(void *a, uint32_t b, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void func_0205f498(uint32_t v);
extern void func_0205f3e0(uint32_t v, uint32_t w);
extern void func_0205f52c(uint32_t v, Pair p);
extern uint8_t data_ov009_021afee0[];
extern uint32_t data_0213df20;

void func_ov009_0219b6a8(uint8_t *self, uint32_t p1)
{
    Pair s;
    uint8_t buf[0x44];
    void *n;

    func_02091b10(buf, (uint32_t)data_ov009_021afee0, p1);
    n = func_0205681c(0x54);
    if (n != 0) {
        n = func_02005858(n, data_0213df20, buf, 1, 0);
    }
    *(void **)(self + 0xb0) = n;
    func_02056bc0(*(void **)(self + 0x16c), n);
    func_0205f498(*(uint32_t *)(*(uint8_t **)(*(uint8_t **)(self + 0xb0) + 0x50) + 0x94));
    func_0205f3e0(*(uint32_t *)(*(uint8_t **)(*(uint8_t **)(self + 0xb0) + 0x50) + 0x94), 1);
    s.a = 0;
    s.b = 0x13;
    func_0205f52c(*(uint32_t *)(*(uint8_t **)(*(uint8_t **)(self + 0xb0) + 0x50) + 0x94), s);
}
