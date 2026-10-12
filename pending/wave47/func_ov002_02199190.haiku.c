#include "ffc/types.h"

extern void *func_ov002_02198688(void *obj, uint32_t idx);
extern int32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern int32_t func_ov002_021aaa78(uint32_t v);
extern void func_ov002_02195f98(void *obj, uint32_t idx);
extern uint32_t func_ov002_0219688c(void);
extern uint32_t func_ov002_021a1acc(void);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);

int32_t func_ov002_02199190(uint8_t *p)
{
    uint32_t i;
    int32_t sums[2];
    volatile int32_t y;
    volatile int32_t x;
    int32_t j;
    void *obj;

    sums[0] = 0;
    sums[1] = 0;
    for (i = 0; i < 2; i++) {
        obj = func_ov002_02198688(*(void **)(p + 0xc0), i);
        for (j = 0; j < func_ov002_021a18bc(obj); j++) {
            sums[i] += func_ov002_021aaa78(func_ov002_021a18c4(obj, j));
        }
    }

    if (sums[0] != sums[1]) {
        if (sums[0] < sums[1]) {
            return 1;
        }
        return 0;
    }

    func_ov002_02195f98(*(void **)(p + 0xc8), 0);
    x = func_ov002_0219688c();
    func_ov002_02195f98(*(void **)(p + 0xc8), 1);
    y = func_ov002_0219688c();

    if (x == 0 && y == 1) {
        return 0;
    }
    if (x == 1 && y == 0) {
        return 1;
    }

    func_ov002_02198688(*(void **)(p + 0xc0), 0);
    return func_0206c184(func_ov002_021a1acc(), 2);
}
