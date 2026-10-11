#include "ffc/types.h"

extern int func_ov000_02168784(uint32_t a, uint32_t *b);

int func_ov001_021735c8(uint32_t *self, uint32_t arg)
{
    uint32_t buf[6];

    buf[0] = 3;
    buf[2] = arg;
    func_ov000_02168784(self[0], buf);
    self[4] = 1;
    if (self[3] == 1) {
        self[5] = 1;
    }
    return 1;
}
