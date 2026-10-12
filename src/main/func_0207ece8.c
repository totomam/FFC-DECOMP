#include "ffc/types.h"

extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_02084ca4(uint32_t a, void *b, uint32_t c);
extern int func_02087460(void);
extern void func_0208f404(void *a, uint32_t b, uint32_t c, void *d, uint32_t e);
extern int func_02083c88(int x);
extern void func_02083ec0(void *a, uint32_t b, uint32_t c, void *d, uint32_t e);
extern uint32_t data_021412e0[];

int func_0207ece8(uint32_t *a, uint32_t b, uint32_t c, int d)
{
    uint32_t buf1[5];
    uint32_t buf2[16];
    int tok;
    uint32_t i;

    func_02084b2c(buf1, 0, 20);
    func_02084ca4(data_021412e0[6], buf2, data_021412e0[7]);

    if (d == 0 && func_02087460()) {
        func_0208f404(buf1, b, c, buf2, data_021412e0[7]);
    } else {
        tok = 0;
        if (d) {
            tok = func_02083c88(1);
        }
        func_02083ec0(buf1, b, c, buf2, data_021412e0[7]);
        if (d) {
            func_02083c88(tok);
        }
    }

    for (i = 0; i < 0x14; i += 4) {
        if (*(uint32_t *)((uint8_t *)buf1 + i) != *(uint32_t *)((uint8_t *)a + i)) {
            break;
        }
    }
    return i == 0x14;
}
