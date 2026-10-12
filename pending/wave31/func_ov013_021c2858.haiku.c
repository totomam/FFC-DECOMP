#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t func_0206cb98(uint32_t v);
extern void func_02056c4c(uint32_t v);
extern void func_ov013_021c2af0(uint32_t v);
extern uint32_t func_02056aec(void *obj);
extern void func_ov013_021c29e0(uint32_t v);
extern uint32_t func_0205f8e0(void);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov013_021c4e84;

void func_ov013_021c2858(void *p)
{
    uint8_t *b = (uint8_t *)p;
    uint32_t n;
    uint32_t t;
    uint8_t *q;

    if (func_0206cb98(*(uint32_t *)(b + 0xcc))) {
        *(Pair *)(b + 0xb8) = data_ov013_021c4e84;
        return;
    }

    func_02056c4c(*(uint32_t *)(b + 0xec));
    func_ov013_021c2af0(*(uint32_t *)(b + 0xc8));
    n = func_02056aec(p);
    func_ov013_021c29e0(*(uint32_t *)(b + 0xc8));
    t = func_0205f8e0();
    q = b + 0x14;
    func_02056bc0(q, (void *)t);
    func_02056bc0(q, (void *)n);
}
