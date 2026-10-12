#include "ffc/types.h"

extern void func_ov003_0214b758(void *self, int flag);
extern void func_ov003_0214b784(void *self, int flag);
extern void *func_02056830(uint32_t size);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_0214b59c(void *mem, void *self, int kind, uint32_t a, uint32_t b, uint32_t c, void *buf);
extern void func_02056bc0(void *object, void *node);

void func_ov003_0214b7a0(void *self, uint32_t mode, uint32_t a, uint32_t b, uint32_t c, uint8_t d, uint8_t e, uint32_t g)
{
    void *p;

    if (mode <= 1) {
        func_ov003_0214b758(self, 0);
        func_ov003_0214b784(self, 0);
        *(void **)((uint8_t *)self + 0x400) = func_02056830(0x800);
        p = func_0205681c(0xa0);
        if (p != 0) {
            p = func_ov003_0214b59c(p, self, 1, a, b, c, *(void **)((uint8_t *)self + 0x400));
        }
        *(void **)((uint8_t *)self + 0x3f8) = p;
        func_02056bc0(*(void **)((uint8_t *)self + 0x3f0), p);
    }
    if (mode == 0 || mode == 2) {
        func_ov003_0214b758(self, 1);
        func_ov003_0214b784(self, 1);
        *(void **)((uint8_t *)self + 0x404) = func_02056830(0x800);
        p = func_0205681c(0xa0);
        if (p != 0) {
            p = func_ov003_0214b59c(p, self, 2, d, e, g, *(void **)((uint8_t *)self + 0x404));
        }
        *(void **)((uint8_t *)self + 0x3fc) = p;
        func_02056bc0(*(void **)((uint8_t *)self + 0x3f0), p);
    }
}
