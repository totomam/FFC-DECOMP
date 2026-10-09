#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
extern void func_02037598(uint8_t *p);
extern Pair data_020afbf8;

void func_02045a1c(uint8_t *p) {
    func_02037598(p);
    *(Pair *)(p + 0x80) = data_020afbf8;
}
