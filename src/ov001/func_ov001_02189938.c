#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint8_t data_ov001_0219581c[];
extern uint32_t data_ov001_02195798[];

int func_ov001_02189938(void) {
    int r4;
    func_0208763c(data_ov001_0219581c);
    r4 = 1;
    if (data_ov001_02195798[8] != 0) {
        r4 = 0;
    }
    if (r4 != 0) {
        data_ov001_02195798[8] = 1;
    }
    func_02087678(data_ov001_0219581c);
    return r4;
}
