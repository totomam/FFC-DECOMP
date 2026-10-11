#include "ffc/types.h"

extern void *func_0204de80(void *a);
extern void *func_0204dc5c(void *a, void *b);
extern void func_0204b098(uint32_t v);
extern void func_0204bb90(void *a, void *b);

void func_0204bb40(void *a, void *b) {
    void *x = func_0204de80(a);
    void *y = func_0204dc5c(x, b);
    if (y != 0) {
        *(uint32_t *)((uint8_t *)y + 0x14) = 0;
    }
    func_0204b098(*(uint32_t *)((uint8_t *)b + 0x2c));
    func_0204bb90(x, b);
}
