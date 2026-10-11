#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02052024(void *object);
extern void func_0205210c(void *object, Pair p);
extern uint8_t data_020b04c8[];

void *func_02052064(void *self, uint32_t a, uint32_t b, uint32_t c) {
    Pair q;
    *(uint8_t **)self = data_020b04c8;
    func_02052024(self);
    q = *(Pair *)&a;
    func_0205210c(self, q);
    return self;
}
