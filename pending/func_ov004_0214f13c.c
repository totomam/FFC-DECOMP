#include "ffc/types.h"

typedef struct { uint32_t a; } S;
typedef struct { uint8_t pad[0xa0]; void *obj[2]; uint8_t pad2[0x54]; int nk; int nj; } A;
extern int func_01fff010(void *p, int a, int b);
extern void func_01fff0f4(uint32_t *out, void *p, int a, int b, S c, int d);
extern void func_ov004_0214f780(A *a);
extern S data_ov004_02159448[];

int func_ov004_0214f13c(A *a)
{
    int ret = 0;
    int i;
    uint32_t out;

    for (i = 0; i < 2; i++) {
        int j;
        for (j = 0; j < a->nj; j++) {
            int k;
            for (k = 0; k < a->nk; k++) {
                if (a->obj[i] != 0 && func_01fff010(a->obj[i], k, j) == 0) {
                    ret = 1;
                    func_01fff0f4(&out, a->obj[i], k, j, data_ov004_02159448[12], 0);
                }
            }
        }
    }
    func_ov004_0214f780(a);
    return ret;
}
