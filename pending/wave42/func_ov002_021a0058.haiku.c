#include "ffc/types.h"

extern uint32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern uint32_t func_ov002_021aa778(const void *object);
extern uint32_t func_ov002_021a1ac4(const void *object);
extern void func_ov002_0219fff8(void *a, uint32_t *b, uint32_t c);

void func_ov002_021a0058(void *p0, uint32_t p1)
{
    uint32_t arr[6];
    int i;
    uint32_t idx, k, j;
    void *obj;

    obj = p0;
    idx = 0;
    i = 0;
    while (i < 6) {
        idx = i;
        arr[i++] = idx;
    }
    k = idx;
    do {
        for (j = 0; j < func_ov002_021a18bc(obj); j++) {
            arr[idx] = func_ov002_021aa778(func_ov002_021a18c4(obj, j));
            idx++;
        }
        obj = (void *)func_ov002_021a1ac4(obj);
        k++;
    } while (k < 2);
    func_ov002_0219fff8(p0, arr, p1);
}
