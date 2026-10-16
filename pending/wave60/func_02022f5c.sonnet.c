#include "ffc/types.h"
typedef struct { uint32_t x, y; } P;
extern void func_02081e6c(uint32_t a);
void func_02022f5c(uint8_t *p, uint8_t a, P q, uint32_t d) {
    *(uint8_t *)(p + 0x1cc) = a;
    *(P *)(p + 0x1d0) = q;
    *(uint32_t *)(p + 0x1d8) = d;
    func_02081e6c(a);
}
