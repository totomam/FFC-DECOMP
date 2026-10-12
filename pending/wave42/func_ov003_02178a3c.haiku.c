#include "ffc/types.h"

extern uint8_t data_0209dea8;
extern void func_0209a76c(uint32_t a, uint32_t b);
extern void func_02054144(uint32_t a);
extern void func_ov003_02178bfc(uint8_t *p, uint32_t i);

typedef void (*vfn_t)(void *);

void func_ov003_02178a3c(uint8_t *p)
{
    uint32_t i = 0;
    uint32_t k;
    void **obj;

    if (p[0xc6] == 0) {
        for (; i < 4; i++) {
            if (p[0x98 + i]) {
                func_ov003_02178bfc(p, i);
                p[0x98 + i] = 0;
            }
        }
        return;
    }
    k = 3;
    func_0209a76c((uint32_t)(data_0209dea8 - 1), k);
    k += 2;
    if (*(int32_t *)(p + 0xa0 + ((k & 2) << 3)) > 0) {
        return;
    }
    if (*(void **)(p + 0xb4) == 0) {
        return;
    }
    func_02054144(i);
    obj = *(void ***)(p + 0xb4);
    if (obj) {
        ((vfn_t)obj[1])(obj);
    }
    *(void **)(p + 0xb4) = 0;
}
