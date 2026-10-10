#include "ffc/types.h"

extern void func_ov001_021867e4(void *p);
extern void func_ov001_02186d68(void *p);

void func_ov001_021867f8(void *p) {
    func_ov001_021867e4(p);
    func_ov001_02186d68((uint8_t *)p + 0x60);
}
