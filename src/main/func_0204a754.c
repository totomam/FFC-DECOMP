#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02037598(void *p);
extern Pair data_020b01e4;

void func_0204a754(void *p) {
    uint8_t *b = (uint8_t *)p;
    func_02037598(p);
    *(uint32_t *)(b + 0xa0) = 10;
    *(Pair *)(b + 0x80) = data_020b01e4;
}
