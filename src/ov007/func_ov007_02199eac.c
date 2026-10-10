#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_02199640(void *obj, void *arg);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c285c;

void func_ov007_02199eac(uint8_t *p) {
    void *node = func_0205681c(0xd4);
    if (node != 0) {
        node = func_ov007_02199640(node, p + 0x90);
    }
    func_02056bc0(p + 0x14, node);
    *(Pair *)(p + 0x80) = data_ov007_021c285c;
}
