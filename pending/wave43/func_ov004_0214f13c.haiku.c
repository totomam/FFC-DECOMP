#include "ffc/types.h"

extern int func_01fff010(void *p, int a, int b);
extern void func_01fff0f4(uint32_t *out, void *p, int a, int b, uint32_t c, uint32_t d);
extern void func_ov004_0214f780(uint8_t *a);
extern uint32_t data_ov004_02159448[];

int func_ov004_0214f13c(uint8_t *a)
{
    int ret = 0;
    int i;
    uint32_t out;

    for (i = 0; i < 2; i++) {
        int *pj = (int *)(a + 0x100);
        int j;
        if (*pj <= 0) {
            continue;
        }
        for (j = 0; j < *pj; j++) {
            int k;
            for (k = 0; k < *(int *)(a + 0xfc); k++) {
                void *p = *(void **)(a + i * 4 + 0xa0);
                if (p != 0 && func_01fff010(p, k, j) == 0) {
                    ret = 1;
                    func_01fff0f4(&out, *(void **)(a + i * 4 + 0xa0), k, j,
                                  data_ov004_02159448[12], 0);
                }
            }
        }
    }
    func_ov004_0214f780(a);
    return ret;
}
