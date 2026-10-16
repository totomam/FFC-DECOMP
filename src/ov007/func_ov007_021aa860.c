#include "ffc/types.h"
extern void *func_0205681c(int n);
extern void *func_ov007_021a9640(void *p, void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
typedef struct { uint32_t a, b; } P;
extern P data_ov007_021c4d50;
void func_ov007_021aa860(uint8_t *self) {
    void *n;
    *(self + 0x8c) = 0;
    n = func_0205681c(0x158);
    if (n != 0) {
        n = func_ov007_021a9640(n, self + 0x8c, *(uint32_t *)(self + 0x88));
    }
    func_02056bc0(self + 0x14, n);
    *(P *)(self + 0x80) = data_ov007_021c4d50;
}
