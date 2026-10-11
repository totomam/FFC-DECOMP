#include "ffc/types.h"

extern void *func_02073b68(void *a, void *b);
extern void *func_ov001_0218dde0(void *self, uint32_t x);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov007_021c60a0;

void func_ov007_021b2a5c(uint8_t *p)
{
    void *node;
    void *obj;
    Pair v;

    node = func_02073b68(*(void **)(p + 0xb8), p + 0xfc);
    obj = func_ov001_0218dde0(p, 0);
    func_02056bc0(obj, node);
    v = data_ov007_021c60a0;
    *(Pair *)(p + 0x3114) = v;
}
