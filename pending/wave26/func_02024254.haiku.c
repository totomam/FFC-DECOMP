#include "ffc/types.h"

extern void func_02080a6c(void *a, void *b);
extern void func_0208067c(void *a, void *b, void *c);

void func_02024254(uint8_t *p) {
    uint8_t buf[0x30];
    func_02080a6c(p + 0x60, p + 0xa0);
    if (*(void **)(p + 0xd0)) {
        func_02080a6c(*(void **)(p + 0xd0), buf);
        func_0208067c(p + 0xa0, buf, p + 0xa0);
    }
}
