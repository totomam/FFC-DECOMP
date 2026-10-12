#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S8;

extern uint64_t func_0209a76c(uint32_t, uint32_t);
extern void func_ov005_021987ac(uint8_t *);
extern void func_ov005_02196144(uint32_t, uint8_t);
extern void func_ov005_02198828(uint8_t *);
extern void func_02069724(S8 *, uint8_t *);
extern void func_02069828(uint8_t *, S8);

int func_ov005_021986bc(uint8_t *self)
{
    S8 local;
    uint64_t r;

    r = func_0209a76c(*(uint32_t *)(self + 0xfc) + 1, *(uint32_t *)(self + 0x100) + 1);
    *(uint32_t *)(self + 0xfc) = (uint32_t)(r >> 32);
    func_ov005_021987ac(self);
    if (*(uint32_t *)(self + 0xb8) != 0) {
        func_ov005_02196144(*(uint32_t *)(self + 0xb8), (uint8_t)(*(uint32_t *)(self + 0xfc) + 1));
    }
    func_ov005_02198828(self);
    func_02069724(&local, self);
    func_02069828(self, local);
    return 1;
}
