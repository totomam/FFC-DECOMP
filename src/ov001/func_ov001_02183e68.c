#include "ffc/types.h"

extern void *data_ov001_021926dc;
extern void func_ov001_02183f48(void *p);
extern void func_ov001_02183e98(void *p);
extern void func_ov001_02184d80(void *p);
extern void func_ov001_021835e0(void);

void func_ov001_02183e68(uint8_t *p)
{
    if (p == 0) {
        p = (uint8_t *)data_ov001_021926dc;
    }
    if (*(uint32_t *)(p + 0xc4) != 0) {
        func_ov001_02183f48(p);
    }
    func_ov001_02183e98(p);
    func_ov001_02184d80(p);
    func_ov001_021835e0();
}
