#include "ffc/types.h"

extern void *func_ov003_02168848(void *p, int a, int b, int c, int d, int e, int f);
extern void *data_ov003_0217a9a4;

void *func_ov003_02168a48(void *p, int a, int b, int c, int d) {
    func_ov003_02168848(p, a, b, c, 0, 0x19, d);
    *(void **)p = &data_ov003_0217a9a4;
    return p;
}
