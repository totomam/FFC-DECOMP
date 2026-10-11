#include "ffc/types.h"

extern void func_ov001_0217ca70(uint32_t a, void *cb, void *ctx);
extern void func_ov001_0217c9fc(void);

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t *w2;
    uint32_t flag;
} Ctx;

int func_ov001_0217ca30(uint32_t a, uint32_t b, uint32_t c, uint32_t *out)
{
    Ctx s;
    s.w0 = b;
    s.w1 = c;
    s.w2 = out;
    s.flag = 0;
    func_ov001_0217ca70(a, (void *)func_ov001_0217c9fc, &s);
    if (s.flag == 0) {
        *out = 0;
    }
    return 0;
}
