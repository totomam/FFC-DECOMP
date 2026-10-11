#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a7960(void *p);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c288c;

void func_ov007_0219a094(uint8_t *obj) {
    void *n = func_0205681c(0x16c);
    if (n) {
        n = func_ov007_021a7960(n);
    }
    func_02056bc0(obj + 0x14, n);
    *(Pair *)(obj + 0x80) = data_ov007_021c288c;
}
