#include "ffc/types.h"

extern void func_02042c64(void *a, uint32_t b, uint32_t c);
extern void func_020424e0(void *a);
extern uint32_t func_ov003_0214d454(void);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_020afd10;

void func_020486f8(void *self)
{
    uint8_t *p = (uint8_t *)self;

    func_02042c64(*(void **)(p + 0x88), 0, 0);
    func_020424e0(*(void **)(p + 0x88));
    func_02056bc0(p + 0x14, (void *)func_ov003_0214d454());
    *(Pair *)(p + 0x80) = data_020afd10;
}
