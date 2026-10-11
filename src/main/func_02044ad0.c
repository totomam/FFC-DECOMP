#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern void func_02042b18(uint32_t a, uint32_t b);
extern S data_020afb30;

void func_02044ad0(uint8_t *p) {
    func_02042b18(*(uint32_t *)(p + 0x88), 0);
    *(uint32_t *)(p + 0x8c) = 0;
    *(S *)(p + 0x80) = data_020afb30;
}
