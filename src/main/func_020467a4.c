#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
extern void func_0203758c(uint8_t *p);
extern Pair data_020afc20;

void func_020467a4(uint8_t *p) {
    func_0203758c(p);
    *(Pair *)(p + 0x80) = data_020afc20;
}
