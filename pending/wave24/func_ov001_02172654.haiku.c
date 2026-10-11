#include "ffc/types.h"

typedef struct {
    int32_t count;
    uint32_t pad[2];
    uint32_t **arr;
} DataTable;

extern DataTable data_ov001_02194be8;
extern void func_ov001_02171ee0(void);
extern void func_ov001_02171ee4(void);

uint32_t *func_ov001_02172654(int32_t idx)
{
    uint32_t *r4;

    func_ov001_02171ee0();
    if (idx < 0 || idx >= data_ov001_02194be8.count) {
        func_ov001_02171ee4();
        return 0;
    }
    r4 = data_ov001_02194be8.arr[idx];
    if (*r4 == 0) {
        r4 = 0;
    }
    func_ov001_02171ee4();
    return r4;
}
