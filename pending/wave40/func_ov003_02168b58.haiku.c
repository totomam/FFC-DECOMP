#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} DataPair;

extern void func_ov003_02168890(void *self);
extern void func_ov003_0216898c(void *self);
extern void *func_02056aec(void *self);
extern void *func_0203efc8(void *obj, DataPair v);
extern void *func_020424e0(void *obj);
extern void *func_ov003_0214c1f0(void *a, void *b, uint16_t c, void *d, void *e);
extern void func_02056bc0(void *object, void *node);
extern DataPair data_ov003_0217b224;

void func_ov003_02168b58(void *self)
{
    void *r4;
    void *r6;
    void *r0;

    func_ov003_02168890(self);
    func_ov003_0216898c(self);
    r4 = func_02056aec(self);
    r6 = func_0203efc8(*(void **)((uint8_t *)self + 0xa4), data_ov003_0217b224);
    r0 = func_020424e0(*(void **)((uint8_t *)self + 0x80));
    r0 = func_ov003_0214c1f0(r0, *(void **)((uint8_t *)self + 0x98), *(uint16_t *)((uint8_t *)self + 0x9c), *(void **)((uint8_t *)self + 0xa0), *(void **)((uint8_t *)self + 0x88));
    self = (uint8_t *)self + 0x14;
    func_02056bc0(self, r0);
    func_02056bc0(self, r6);
    func_02056bc0(self, r4);
}
