#include "ffc/types.h"

extern int func_ov002_02198d08(int a, int b);
extern int func_ov002_0219c5a8(int h);
extern int func_ov002_0219c5b8(int h, int idx);
extern void func_ov002_021b0c60(int obj, int v);
extern void func_ov002_021b0ca0(int obj, int v);
extern void func_ov002_021b0cb0(int obj, int v);

void func_ov002_0219f200(int *self)
{
    uint32_t i;
    int j;
    int h;
    int obj;
    int zero = 0;

    for (i = 0; i < 2; i++) {
        h = func_ov002_02198d08(self[0x2f], i);
        j = 0;
        if (func_ov002_0219c5a8(h) > 0) {
            do {
                obj = func_ov002_0219c5b8(h, j);
                func_ov002_021b0c60(obj, zero);
                func_ov002_021b0ca0(obj, 2);
                func_ov002_021b0cb0(obj, 3);
                j++;
            } while (j < func_ov002_0219c5a8(h));
        }
    }
}
