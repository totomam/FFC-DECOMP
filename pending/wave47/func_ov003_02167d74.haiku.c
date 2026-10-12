#include "ffc/types.h"

extern void *data_020b93b8;
extern uint32_t func_0201c9ac(void *obj, int id);
extern int32_t func_0201c1f0(void *obj, int32_t a, int32_t b);
extern void func_0201e954(void *obj, int idx, void *out);
extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036cfc(const void *object);
extern uint32_t func_02036ce0(const void *object);
extern void func_02084b2c(void *dst, int val, uint32_t n);
extern void func_0201e92c(void *obj, int idx, void *in);
extern void func_0201e9e4(void *obj);

void func_ov003_02167d74(int32_t *p)
{
    uint8_t obj[0x18];
    int32_t x[2];
    int32_t *pn;
    int32_t n;
    uint32_t i;

    x[0] = func_0201c9ac(data_020b93b8, 0x1b);
    x[1] = func_0201c1f0(data_020b93b8, p[6], p[7]);
    if (x[0] < x[1]) {
        pn = &x[0];
    } else {
        pn = &x[1];
    }
    n = *pn;
    if (n > 0) {
        do {
            for (i = 0; i < 0x40; i++) {
                func_0201e954(data_020b93b8, i, obj);
                if (func_02036cd8(obj) && func_02036cfc(obj) && func_02036ce0(obj) == 2) {
                    func_02084b2c(obj, 0, 0x18);
                    func_0201e92c(data_020b93b8, i, obj);
                    break;
                }
            }
            n--;
        } while (n > 0);
    }
    func_0201e9e4(data_020b93b8);
}
