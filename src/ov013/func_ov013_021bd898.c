#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov013_021c117c(void *a, void *b, void *c);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov013_021c4238;

void func_ov013_021bd898(void *self)
{
    uint8_t *s = (uint8_t *)self;
    void *node = func_0205681c(0x110);
    if (node != 0) {
        node = func_ov013_021c117c(node, self, s + 0xd0);
    }
    func_02056bc0(s + 0x14, node);
    *(Pair *)(s + 0xb8) = data_ov013_021c4238;
}
