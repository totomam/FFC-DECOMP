#include "ffc/types.h"

extern void func_ov001_02171ee0(void);
extern void func_ov001_02171ee4(void);

typedef struct {
    int32_t count;
    int32_t field4;
    int32_t field8;
    void **items;
} DataOv001;

extern DataOv001 data_ov001_02194be8;

void func_ov001_0217268c(void (*cb)(void *))
{
    if (data_ov001_02194be8.field4 > 0) {
        func_ov001_02171ee0();
        for (int32_t i = 0; i < data_ov001_02194be8.count; i++) {
            int32_t *item = (int32_t *)data_ov001_02194be8.items[i];
            if (*item != 0) {
                cb(item);
            }
        }
        func_ov001_02171ee4();
    }
}
