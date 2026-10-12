#include "ffc/types.h"

extern void *func_ov000_021653e4(void *p, uint32_t size);
extern void *func_ov000_021653d4(uint32_t size);
extern void func_ov000_021653f4(void *p);

typedef struct {
    int32_t count;
    int32_t unk[2];
    int32_t **arr;
} GlobalData;

extern GlobalData data_ov001_02194be8;

int32_t func_ov001_021722a0(void) {
    int32_t i;
    int32_t n;
    int32_t newn;
    int32_t j;
    int32_t **arr;
    int32_t *p;

    for (i = 0; i < data_ov001_02194be8.count; i++) {
        if (*data_ov001_02194be8.arr[i] == 0) {
            return i;
        }
    }

    n = data_ov001_02194be8.count;
    newn = n + 4;
    arr = func_ov000_021653e4(data_ov001_02194be8.arr, newn * 4);
    if (arr == 0) {
        return -1;
    }
    data_ov001_02194be8.arr = arr;

    for (j = n; j < newn; j++) {
        data_ov001_02194be8.arr[j] = func_ov000_021653d4(0x1d4);
        p = data_ov001_02194be8.arr[j];
        if (p == 0) {
            for (j--; j >= n; j--) {
                func_ov000_021653f4(data_ov001_02194be8.arr[j]);
            }
            return -1;
        }
        *p = 0;
    }
    data_ov001_02194be8.count = newn;
    return n;
}
