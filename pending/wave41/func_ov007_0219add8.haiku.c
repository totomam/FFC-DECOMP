#include "ffc/types.h"

extern void func_02069694(void *p, uint32_t v, uint32_t n);
extern void func_02069670(void *p, uint32_t a, uint32_t n, uint32_t b);

void func_ov007_0219add8(void *self) {
    uint8_t *p = (uint8_t *)self;
    func_02069694(self, *(uint32_t *)(p + 0xc0), 4);
    func_02069694(self, *(uint32_t *)(p + 0xc4), 2);
    func_02069694(self, *(uint32_t *)(p + 0xc0), 2);
    func_02069694(self, *(uint32_t *)(p + 0xc4), 4);
    func_02069694(self, *(uint32_t *)(p + 0xc8), 4);
    func_02069670(self, *(uint32_t *)(p + 0xc8), 4, *(uint32_t *)(p + 0xc4));
    func_02069694(self, *(uint32_t *)(p + 0xc8), 2);
    func_02069670(self, *(uint32_t *)(p + 0xc8), 2, *(uint32_t *)(p + 0xc0));
}
