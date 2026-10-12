#include "ffc/types.h"

extern uint32_t *func_ov003_02153470(uint32_t x);

void func_ov003_0215e190(uint8_t *a)
{
    uint32_t **it;
    uint32_t **end;
    uint32_t v;

    if (*(a + 0xd0)) {
        return;
    }
    v = *(uint32_t *)(*(uint8_t **)(a + 0xa8) + 0x9c);
    v = *func_ov003_02153470(v);
    it = *(uint32_t ***)(a + 0xc4);
    end = (uint32_t **)((uint8_t *)it + *(uint32_t *)(a + 0xc8) * 4);
    if (it == end) {
        return;
    }
    do {
        ((void (*)(void *, uint32_t))(((void **)*(*it))[1]))(*it, v);
        it++;
    } while (it != (uint32_t **)((uint8_t *)*(uint32_t ***)(a + 0xc4) + *(uint32_t *)(a + 0xc8) * 4));
}
