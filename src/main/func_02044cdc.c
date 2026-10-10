#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_0203f650(void *a, void *b, void *c);
extern void func_02056bc0(void *object, void *node);
extern Pair data_020afb70;

void func_02044cdc(uint8_t *self) {
    void *node = func_0205681c(0x1c4);
    if (node) {
        node = func_0203f650(node, *(void **)(self + 0x88), self + 0xf0);
    }
    func_02056bc0(self + 0x14, node);
    *(Pair *)(self + 0x80) = data_020afb70;
}
