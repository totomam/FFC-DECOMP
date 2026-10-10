#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a902c(void *obj, void *arg);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c49e0;

void func_ov007_021a9408(uint8_t *p) {
    void *node = func_0205681c(0xd8);
    if (node != 0) {
        node = func_ov007_021a902c(node, p + 0x88);
    }
    func_02056bc0(p + 0x14, node);
    *(Pair *)(p + 0x80) = data_ov007_021c49e0;
}
