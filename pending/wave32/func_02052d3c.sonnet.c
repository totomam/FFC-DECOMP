/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_0208763c(void *p);
extern "C" void func_02056858(uint32_t v);
extern "C" void func_02087678(void *p);
extern "C" void func_02052d3c(uint8_t *self, uint32_t idx);

struct Irq {
    uint16_t prev; uint32_t pad[2];
    Irq() { prev = *(volatile uint16_t *)0x4000208; *(volatile uint16_t *)0x4000208 = 0; }
    ~Irq() { uint16_t d = *(volatile uint16_t *)0x4000208; *(volatile uint16_t *)0x4000208 = (prev != 0); }
};

extern "C" void func_02052d3c(uint8_t *self, uint32_t idx)
{
    int32_t v;
    uint8_t *sub;
    {
        Irq irq;
        uint32_t *cnt = *(uint32_t **)(self + 0x1c);
        cnt[idx] = cnt[idx] - 1;
        v = (*(uint32_t **)(self + 0x1c))[idx];
    }
    if (v > 0) {
        return;
    }
    sub = self + 0x20;
    func_0208763c(sub);
    if (((uint32_t *)*(uint32_t **)(self + 0x1c))[idx] == 0) {
        func_02056858(((uint32_t *)*(uint32_t **)(self + 0x18))[idx]);
    }
    func_02087678(sub);
}
