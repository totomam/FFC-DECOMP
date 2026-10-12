#include "ffc/types.h"

typedef struct {
    int32_t count;
    uint32_t f4;
    uint32_t f8;
    void **items;
} DataObj;

extern void func_ov001_02172610(void);
extern void func_ov001_0217268c(void (*fn)(void));
extern void func_ov000_021653f4(void *p);
extern DataObj data_ov001_02194be8;

void func_ov001_021727d8(void)
{
    int32_t i;

    if (data_ov001_02194be8.items == 0) {
        return;
    }
    func_ov001_0217268c(func_ov001_02172610);
    for (i = 0; i < data_ov001_02194be8.count; i++) {
        func_ov000_021653f4(data_ov001_02194be8.items[i]);
    }
    func_ov000_021653f4(data_ov001_02194be8.items);
    data_ov001_02194be8.items = 0;
    data_ov001_02194be8.count = 0;
    data_ov001_02194be8.f4 = 0;
}
