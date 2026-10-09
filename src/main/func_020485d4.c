#include "ffc/types.h"

typedef struct { uint32_t x, y; } Pair;
extern void func_02042b18(void *p, int32_t x);
extern Pair data_020afcf8;

void func_020485d4(uint8_t *a) {
    func_02042b18(*(void **)(a + 0x88), 0);
    *(Pair *)(a + 0x80) = data_020afcf8;
}
