#include "ffc/types.h"

extern void func_02090380(void *destination, const void *source, uint32_t length);

void func_ov001_021750d4(uint8_t *self, const void *src, int32_t n)
{
    int32_t len;
    int32_t cur;
    int32_t end;
    if (n == 0) {
        return;
    }
    cur = *(int32_t *)(self + 0x148);
    if (cur >= 10) {
        return;
    }
    len = 10 - cur;
    if (len >= n) {
        len = n;
    }
    func_02090380(self + 0x13c + cur, src, len);
    end = *(int32_t *)(self + 0x148) + len;
    *(int32_t *)(self + 0x148) = end;
    {
        uint8_t *p = self + end;
        p[0x13c] = 0;
    }
}
