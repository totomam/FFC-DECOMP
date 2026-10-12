#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_02056c4c(void *p);
extern void func_ov003_021600cc(void *a, int b, int c, int d);

void func_ov003_021601d0(uint8_t *a)
{
    uint8_t *s = *(uint8_t **)(a + 0xd4);
    uint8_t flag = s[0x12];
    uint8_t *r4 = s + 0x1c;
    int r5 = 1;

    if (flag) {
        func_0208763c(r4);
    }
    if (*(int32_t *)(s + 0x14) != 0) {
        r5 = 0;
    }
    if (flag) {
        func_02087678(r4);
    }
    if (r5 != 0) {
        return;
    }
    func_02056c4c(*(void **)(a + 0xd4));
    {
        uint8_t *q = *(uint8_t **)(*(uint8_t **)(a + 0x80) + 0x180);
        if (*(int32_t *)(q + 0xdc) == 1) {
            return;
        }
    }
    func_ov003_021600cc(a, 0, 1, 0);
}
