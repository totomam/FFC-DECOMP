#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
typedef struct { uint8_t pad[0x14]; uint8_t m[4]; uint8_t pad2[0x68]; uint32_t o; uint32_t c; } O;
extern uint32_t func_02056aec(void);
extern uint32_t func_ov003_02149aac(uint32_t o);
extern uint32_t func_ov003_021670a0(uint32_t o, P p, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i, uint32_t j, uint32_t k);
extern void func_02056bc0(void *object, void *node);
extern P data_ov003_0217bc50;
void func_ov003_021772e8(O *self) {
    uint32_t r4 = func_02056aec();
    uint32_t r7 = func_ov003_02149aac(self->o);
    uint32_t r6 = self->c;
    uint32_t t = func_ov003_021670a0(self->o, data_ov003_0217bc50, r6, r6, 0, 0, 0, 0, 2, 0, 0);
    uint32_t u = func_ov003_02149aac(self->o);
    uint8_t *m = self->m;
    func_02056bc0(m, (void *)u);
    func_02056bc0(m, (void *)t);
    func_02056bc0(m, (void *)r7);
    func_02056bc0(m, (void *)r4);
}
