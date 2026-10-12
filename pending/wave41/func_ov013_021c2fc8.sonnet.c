#include "ffc/types.h"

extern void func_ov013_021c2a2c(void);
extern void func_02021338(int code);
extern void *func_0205681c(int size);
extern void *func_ov013_021c2224(void *a, void *b, void *c, void *d);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint32_t flag : 1;
    uint32_t kind : 7;
} NodeBits;

void func_ov013_021c2fc8(void *param_a, void *param_b)
{
    uint8_t *self = (uint8_t *)param_a;
    uint8_t *node = (uint8_t *)param_b;
    uint32_t v;
    void *res;

    if (param_b == *(void **)(self + 0x128)) {
        **(uint32_t **)(self + 0xf8) = 1;
        func_ov013_021c2a2c();
        return;
    }

    if (((NodeBits *)(node + 0xac))->flag == 0) {
        v = (uint32_t)(*(uint8_t *)(node + 0xac) << 24) >> 25;
    } else {
        v = *(uint32_t *)(node + 0xb0);
    }

    if (v != 0) {
        func_02021338(0xcf);
        res = func_0205681c(0xf4);
        if (res != 0) {
            res = func_ov013_021c2224(res, self, *(void **)(self + 0xf4), node);
        }
        func_02056bc0(self + 0x14, res);
    } else {
        func_02021338(0xc7);
    }
}
