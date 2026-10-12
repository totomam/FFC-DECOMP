#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_020696f0(uint32_t value);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern uint32_t func_0203bb94(void *object, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern void func_02021338(uint32_t id);
extern Pair data_ov004_02159cb0;
extern uint32_t data_ov004_021596c4[16];
extern Pair data_ov004_02159cb8;

typedef struct { uint8_t q[0x94]; Pair pr; uint8_t p[0x204-0x9c]; uint32_t cnt; uint32_t t; uint32_t n; } S;
void func_ov004_02154804(uint8_t *self0) {
    S *self = (S *)self0;
    uint8_t buf[0x44];
    uint32_t n;

    func_020696f0(*(uint32_t *)(self0 + 0xfc));
    if (self->cnt == 0) {
        self->pr = data_ov004_02159cb0;
        return;
    }
    func_02091b10(buf, data_ov004_021596c4[15]);
    n = func_0203bb94(buf, 0, 1, 0);
    self->n = n;
    func_02056bc0(self0 + 0x48, (void *)n);
    self->t = 0x3c;
    self->cnt -= 1;
    func_02021338(0x91);
    self->pr = data_ov004_02159cb8;
}
