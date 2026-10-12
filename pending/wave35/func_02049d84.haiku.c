#include "ffc/types.h"

extern void func_020213f0(int32_t x);
extern void func_02037538(void);
extern void func_02076248(void *a, uint32_t b);
extern void func_02037544(void);
extern void *func_0205681c(int32_t x);
extern void *func_ov007_0219c47c(void *a, void *b, void *c);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_020b0090[];
extern uint32_t data_020b009c[];

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_02049d84(uint8_t *p)
{
    int32_t v = *(int32_t *)(p + 0xa0);
    if (v != 4 && v != 5 && v != 6) {
        func_020213f0(0x32);
        func_02037538();
        func_02076248(data_020b0090, 0x56444545);
    }
    func_02037544();
    void *n = func_0205681c(0xf0);
    if (n != 0) {
        n = func_ov007_0219c47c(n, p + 0xa0, p + 0xa4);
    }
    func_02056bc0(p + 0x14, n);
    *(Pair *)(p + 0x80) = *(Pair *)data_020b009c;
}
