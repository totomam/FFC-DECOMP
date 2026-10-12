#include "ffc/types.h"

extern int func_ov000_0215999c(int idx);
extern int func_ov000_02154ed0(void *p);
extern void func_ov000_02155478(void *p, int v);
extern int func_ov000_02154e78(void *p);
extern void func_ov000_02154f04(void *p);
extern int func_ov000_02154e58(void *p);
extern void func_ov000_02154f48(void *p, int v);
extern void func_ov000_02159d30(void *a, int j, int i);
extern uint8_t data_ov000_0217004c[];

int func_ov000_02159dd8(uint8_t *a, int n, int m)
{
    int result = -1;
    int i;
    for (i = 0; i < n; i++) {
        int r7 = func_ov000_0215999c(i);
        if (r7 != 0) {
            int j;
            if (r7 == m) {
                result = i;
            }
            for (j = i + 1; j < n; j++) {
                if (r7 == func_ov000_0215999c(j)) {
                    if (func_ov000_02154ed0(a + i * 12) == 2) {
                        if (func_ov000_02154ed0(a + j * 12) == 3) {
                            func_ov000_02155478(a + i * 12, r7);
                        }
                    }
                    if (func_ov000_02154e78(a + j * 12)) {
                        func_ov000_02154f04(a + i * 12);
                        if (func_ov000_02154e58(
                                *(uint8_t **)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x18) + i * 12)) {
                            func_ov000_02154f48(
                                *(uint8_t **)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x18) + i * 12, 1);
                        }
                    }
                    func_ov000_02159d30(a, j, i);
                    *(uint8_t *)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 0x1d) = 1;
                }
            }
        }
    }
    return result;
}
