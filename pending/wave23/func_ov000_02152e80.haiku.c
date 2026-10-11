#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t *p;
} S;

extern S data_ov000_0216e280;
extern int32_t func_02087460(void);

void func_ov000_02152e80(int32_t a) {
    if (data_ov000_0216e280.p == 0) {
        return;
    }
    if (a < 0x10C0) {
        return;
    }
    if (a > 0xffff) {
        return;
    }
    if (func_02087460() == 0) {
        return;
    }
    data_ov000_0216e280.p[3] = a;
}
