#include "ffc/types.h"

extern char data_ov007_021c3ca8[];
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov007_021c4330;
extern void func_02056c9c(void *self, uint32_t zero, uint32_t a2);
extern uint32_t func_0203b67c(void);
extern void func_02056bc0(void *object, uint32_t node);

void *func_ov007_021a6038(void *self, uint32_t p1, uint8_t p2)
{
    uint8_t *s = (uint8_t *)self;
    func_02056c9c(self, 0, p2);
    *(void **)s = data_ov007_021c3ca8;
    *(uint32_t *)(s + 0x90) = p1;
    *(uint32_t *)(s + 0xa4) = 1;
    *(uint8_t *)(s + 0xa8) = p2;
    *(uint32_t *)(s + 0xac) = 0;
    *(uint32_t *)(s + 0xb0) = func_0203b67c();
    func_02056bc0(s + 0x48, *(uint32_t *)(s + 0xb0));
    *(Pair *)(s + 0x80) = data_ov007_021c4330;
    return self;
}
