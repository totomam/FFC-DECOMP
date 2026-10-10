#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_02056c4c(void *p);
extern void func_ov011_021c8af0(void *p);

void func_ov011_021c8de8(uint8_t *p0)
{
    uint8_t *r5 = p0 + 0x14;
    uint8_t flag = r5[0x12];
    uint8_t *r4 = r5 + 0x1c;
    int r5v;

    if (flag != 0) {
        func_0208763c(r4);
    }
    r5v = (*(uint32_t *)(r5 + 0x14) == 0);
    if (flag != 0) {
        func_02087678(r4);
    }
    if (!r5v) {
        func_02056c4c(p0 + 0x14);
    }
    func_ov011_021c8af0(p0);
}
