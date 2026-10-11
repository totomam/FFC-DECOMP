#include "ffc/types.h"

typedef struct {
    uint32_t v;
} Word;

extern Word func_0207abbc(uint8_t *p, uint32_t x);
extern void func_0207b684(uint32_t x);
extern void func_0207b818(uint8_t *p, uint32_t x);
extern void func_020078bc(uint8_t *p);

void func_020066a4(uint8_t *self)
{
    Word w;
    int off;
    w = func_0207abbc(self + 0xb4, 0x2800);
    off = 0x31ec;
    *(Word *)(self + off) = w;
    func_0207b684(10);
    func_0207b818(self + (off + 4), 11);
    off -= 0x14;
    func_020078bc(self + off);
}
