#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S8;

extern void func_ov013_021c040c(void *p);
extern void func_ov005_02196144(uint32_t a, uint8_t b);
extern void func_ov013_021c0464(void *p);
extern void func_02069724(S8 *out, void *p);
extern void func_02069828(void *p, S8 s);

int func_ov013_021c03b8(uint8_t *param_1)
{
    S8 s;
    uint32_t *w = (uint32_t *)param_1;
    uint32_t idx = 0x42 << 2;

    if (w[idx / 4] == 0) {
        w[idx / 4] = w[idx / 4 + 1];
    } else {
        w[idx / 4] = w[idx / 4] - 1;
    }

    func_ov013_021c040c(param_1);

    func_ov005_02196144(*(uint32_t *)(param_1 + 0xd4),
                        (uint8_t)(w[idx / 4] + 1));

    func_ov013_021c0464(param_1);

    func_02069724(&s, param_1);
    func_02069828(param_1, s);
    return 1;
}
