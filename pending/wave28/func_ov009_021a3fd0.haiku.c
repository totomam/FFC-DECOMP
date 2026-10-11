#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint32_t data_ov009_021b080c[];
extern uint32_t data_ov009_021b088c[];
extern uint32_t data_ov009_021b0ab8[];
extern void func_02005988(void *dst, uint32_t v);
extern void func_ov009_021a3e94(void *obj, uint32_t p1, void *ctx, Pair s);
extern void *func_020059cc(void *object);
extern void func_02069320(void *object, uint32_t value);
extern void func_02069328(void *object, uint32_t value);

void *func_ov009_021a3fd0(void *r0, uint32_t r1)
{
    uint32_t tmp[3];

    func_02005988(tmp, data_ov009_021b080c[5]);
    func_ov009_021a3e94(r0, r1, tmp, *(Pair *)&data_ov009_021b088c[14]);
    func_020059cc(tmp);
    *(void **)r0 = data_ov009_021b0ab8;
    func_02069320(r0, 0x200);
    func_02069328(r0, 1);
    return r0;
}
