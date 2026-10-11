#include "ffc/types.h"

extern void func_ov001_02181864(void);

typedef struct {
    uint32_t v[4];
} Blk;

int func_ov001_02180344(uint32_t *self, Blk *src) {
    uint32_t state;

    if (self[5] != 0) {
        self[5] = 0;
        return 0;
    }
    state = self[3];
    self[5] = 0;
    if (state != 4) {
        return 0;
    }
    func_ov001_02181864();
    self[3] = 5;
    if (src != 0) {
        *(Blk *)(self + 10) = *src;
    }
    return 1;
}
