#include "ffc/types.h"

typedef struct { uint32_t a, b; } P;
extern void *func_0205681c(uint32_t size);
extern void *func_ov011_021c6600(void *p, int flag, void *arg);
extern void func_02056bc0(void *object, void *node);
extern P data_ov011_021cbde4;

void func_ov011_021c9edc(uint8_t *self)
{
    void *node = func_0205681c(0x90);
    if (node != 0) {
        node = func_ov011_021c6600(node, 1, self + 0x94);
    }
    func_02056bc0(self + 0x14, node);
    {
        *(P *)(self + 0x80) = data_ov011_021cbde4;
    }
}
