#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02005988(void *obj, uint32_t v);
extern void func_ov009_021a3e94(void *self, uint32_t arg, void *tmp, Pair val);
extern void *func_020059cc(void *obj);
extern void func_02069320(void *obj, uint32_t value);
extern void func_02069404(void *obj, uint32_t value);
extern uint32_t data_ov009_021b080c[];
extern uint32_t data_ov009_021b0aec[];

void *func_ov009_021a3f30(void *self, uint32_t arg) {
    uint32_t tmp[3];
    Pair val;

    func_02005988(tmp, data_ov009_021b080c[4]);
    val = *(Pair *)&data_ov009_021b080c[8];
    func_ov009_021a3e94(self, arg, tmp, val);
    func_020059cc(tmp);
    *(void **)self = data_ov009_021b0aec;
    {
        void *sub = *(void **)((uint8_t *)self + 0x98);
        void **vt = *(void ***)sub;
        ((void (*)(void *, uint32_t, uint32_t))vt[14])(sub, 2, 0);
    }
    func_02069320(self, 2);
    func_02069404(self, 4);
    return self;
}
