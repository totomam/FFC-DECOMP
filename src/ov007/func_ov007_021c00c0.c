#include "ffc/types.h"

extern int func_ov000_02165160(void);
extern void *func_ov000_021653d4(uint32_t size);
extern void *func_020903cc(void *object, int v, uint32_t n);

int func_ov007_021c00c0(void **out)
{
    void *p;

    if (*(uint32_t *)0x0217098c != 1) {
        return 1;
    }
    if (func_ov000_02165160() != 0) {
        return 2;
    }
    p = func_ov000_021653d4(0x4c);
    if (p == 0) {
        return 3;
    }
    func_020903cc(p, 0, 0x4c);
    *out = p;
    return 0;
}
