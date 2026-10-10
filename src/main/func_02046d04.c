#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern void func_0201c210(uint32_t a, uint32_t b, uint32_t c);

int func_02046d04(uint32_t *a, uint32_t *b) {
    func_0201c210(data_020b93b8, *a, *b + 1);
    return 0;
}
