#include "ffc/types.h"

extern void func_02060bf4(void *p);
extern void func_02060e88(void *p, int v);
extern void func_02060ea4(void *p, int v);
extern uint32_t func_0204f7ec(const void *object);
extern void func_ov003_02148fac(void *p, int v);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern char data_ov003_0217ba88[];
extern void *data_0213df18[];

void *func_ov003_02176abc(void *self) {
    uint8_t *s = (uint8_t *)self;
    *(void **)s = data_ov003_0217ba88;
    if (*(int *)(s + 0x98) == 6) {
        func_02060bf4(*(void **)(*(uint8_t **)(s + 0xa8) + 0x1c));
    } else if (*(int *)(s + 0x98) == 7) {
        func_02060bf4(*(void **)(*(uint8_t **)(s + 0xa8) + 0x1c));
        func_02060e88(*(void **)(*(uint8_t **)(s + 0xa8) + 0x24), 2);
        func_02060ea4(*(void **)(*(uint8_t **)(s + 0xa8) + 0x24), 0x10);
        if (*(uint8_t **)(s + 0xa8) == (uint8_t *)func_0204f7ec(data_0213df18[0])) {
            uint8_t *q = *(uint8_t **)(*(uint8_t **)(s + 0x80) + 0x188);
            *(uint32_t *)(q + 0xc) &= ~(uint32_t)0xff;
        }
    }
    func_ov003_02148fac(*(void **)(s + 0x80), 0);
    func_02056db0(s);
    func_02056844(s);
    return s;
}
