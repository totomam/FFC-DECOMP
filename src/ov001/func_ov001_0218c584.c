#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_0200d13c(void *p);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov001_0219486c[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov001_0218c584(uint8_t *self) {
    Pair *src;
    void *node = func_0205681c(0x80);
    if (node != 0) {
        node = func_0200d13c(node);
    }
    func_02056bc0(self + 0x48, node);
    src = (Pair *)data_ov001_0219486c;
    *(Pair *)(self + 0xb0) = *src;
}
