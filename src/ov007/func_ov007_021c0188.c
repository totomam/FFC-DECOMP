#include "ffc/types.h"

extern void func_ov000_021651d4(void *p);

int func_ov007_021c0188(void *a, void *b) {
    void *c;
    if (a == 0 || b == 0 || (c = *(void **)((uint8_t *)b + 0x20)) == 0 ||
        (c = *(void **)((uint8_t *)c + 0x24)) == 0) {
        return 3;
    }
    func_ov000_021651d4(c);
    return 0;
}
