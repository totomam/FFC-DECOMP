#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a19b0(void *obj, void *arg);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c287c;

void func_ov007_02199fac(uint8_t *p) {
    void *node = func_0205681c(0x9c);
    if (node != 0) {
        node = func_ov007_021a19b0(node, p + 0x94);
    }
    func_02056bc0(p + 0x14, node);
    *(Pair *)(p + 0x80) = data_ov007_021c287c;
}
