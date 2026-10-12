#include "ffc/types.h"

extern void *func_0203b6fc(void);
extern int func_ov002_021a18bc(const void *object);
extern void *func_ov002_021a1ac4(const void *object);
extern void *func_0203bd04(uint32_t a, uint32_t b, uint32_t c, int d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov002_021a18c4(const void *object, uint32_t index);
extern void *func_ov002_021ab244(void *a, uint32_t b, void *c);

void *func_ov002_021a44bc(void *a)
{
    uint32_t i;
    uint8_t *x;
    void *arr[2];
    void *r6 = func_0203b6fc();
    int j;
    int n = func_ov002_021a18bc(a);

    i = 0;
    x = func_0203bd04(0x100fe, 0, 0, n + func_ov002_021a18bc(func_ov002_021a1ac4(a)), i);
    func_02056bc0(r6, x);
    arr[0] = a;
    arr[1] = func_ov002_021a1ac4(a);
    for (i = 0; i < 2; i++) {
        if (func_ov002_021a18bc(arr[i]) > 0) {
            j = 0;
            do {
                func_02056bc0(r6, func_ov002_021ab244(func_ov002_021a18c4(arr[i], j), 0, x ? x + 0x14 : 0));
                j++;
            } while (j < func_ov002_021a18bc(arr[i]));
        }
    }
    return r6;
}
