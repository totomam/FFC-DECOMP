#include "ffc/types.h"

extern int func_ov000_02167f08(void *p, int c);
extern int func_ov000_02167f34(void *p, void *q);

int func_ov000_02167bcc(void *p, void *q, void *r)
{
    if (func_ov000_02167f08(p, 0x3c) && func_ov000_02167f08(p, 0x2f) &&
        func_ov000_02167f34(p, q) && func_ov000_02167f08(p, 0x3a) &&
        func_ov000_02167f34(p, r) && func_ov000_02167f08(p, 0x3e))
        return 1;
    return 0;
}
