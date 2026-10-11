#include "ffc/types.h"

extern int func_ov000_02158a30(void *buf);
extern int func_ov000_021586b8(void *buf, void *p);

int func_ov000_02158b74(void *p)
{
    uint32_t buf[5];

    if (!func_ov000_02158a30(buf)) {
        return 0;
    }
    if (func_ov000_021586b8(buf, p)) {
        return 1;
    }
    return 0;
}
