#include "ffc/types.h"

extern void func_02056b74(void *p);

void *func_02056d7c(void *p) {
    func_02056b74((uint8_t *)p + 0x48);
    func_02056b74((uint8_t *)p + 0x14);
    return p;
}
