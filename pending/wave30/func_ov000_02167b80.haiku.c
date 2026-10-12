#include "ffc/types.h"

extern int func_ov000_02167f08(void *p, uint32_t id);
extern int func_ov000_02167f34(void *p, uint32_t v);

int func_ov000_02167b80(void *p, uint32_t a, uint32_t b) {
    if (func_ov000_02167f08(p, 0x3c) == 0) goto fail;
    if (func_ov000_02167f34(p, a) == 0) goto fail;
    if (func_ov000_02167f08(p, 0x3a) == 0) goto fail;
    if (func_ov000_02167f34(p, b) == 0) goto fail;
    if (func_ov000_02167f08(p, 0x3e) != 0) goto one;
fail:
    return 0;
one:
    return 1;
}
