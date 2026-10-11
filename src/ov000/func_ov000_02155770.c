#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint8_t *buf;
} OvData;

extern void func_02084b2c(void *dst, int val, uint32_t size);
extern void func_02084ca4(void *dst, void *src, uint32_t size);
extern OvData data_ov000_0216e294;

void func_ov000_02155770(int32_t *p)
{
    if (data_ov000_0216e294.buf == 0) {
        func_02084b2c(p, 0, 0x1c4);
    }
    func_02084ca4(data_ov000_0216e294.buf + 0x1008, p, 0x1c4);
    if (*p < 20000 || *p >= 30000) {
        *p = 0x5206;
    }
    if (*p >= 20100) {
        *p = -*p;
    }
}
