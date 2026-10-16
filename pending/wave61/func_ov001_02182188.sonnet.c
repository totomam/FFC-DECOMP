#include "ffc/types.h"
extern void func_ov001_021807e8(void *p);
extern int func_ov001_0217fe8c(void *p);
extern void func_ov001_02181ddc(void *p);
void func_ov001_02182188(uint8_t *p) {
    if (*(int *)(p + 0x18) != 0) return;
    *(int *)(p + 0x18) = 1;
    func_ov001_021807e8(p);
    if (func_ov001_0217fe8c(p) != 0) func_ov001_02181ddc(p);
}
