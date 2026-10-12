#include "ffc/types.h"

extern void func_ov000_02166e7c(void *a);
extern int func_ov001_0217bfbc(void *a, void *n);
extern int func_ov000_02168688(int x);
extern void func_ov000_021652a8(int a, int b, int c, void *d, uint32_t e);
extern void func_ov001_0217c030(void *a, void *n);
extern uint8_t data_ov001_0219104c[];

int func_ov001_0217c0c0(void **a)
{
    uint8_t *n;
    uint32_t next;
    uint8_t *d;
    uint8_t *obj = (uint8_t *)*a;
    func_ov000_02166e7c(a);
    n = *(uint8_t **)(obj + 0x5d8);
    while (n != 0) {
        next = *(uint32_t *)(n + 0x4c);
        d = data_ov001_0219104c;
        if (*(uint32_t *)n != 0x6a) {
            int r = func_ov001_0217bfbc(a, n);
            if (*(uint32_t *)n != 0x6a && r == 0) {
                if (func_ov000_02168688(0) <= *(int32_t *)(n + 0x14)) {
                    goto next_node;
                }
            }
        }
        func_ov000_021652a8(1, 4, 8, d, *(uint32_t *)(n + 0x10));
        func_ov001_0217c030(a, n);
next_node:
        n = (uint8_t *)next;
    }
    return 0;
}
