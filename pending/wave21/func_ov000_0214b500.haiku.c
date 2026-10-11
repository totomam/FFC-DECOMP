#include "ffc/types.h"

extern int func_ov000_0214af30(void *p);

int func_ov000_0214b500(void *p)
{
    if (func_ov000_0214af30(p) != 7) {
        return 1;
    }
    if (func_ov000_0214af30(p) != 6) {
        return 1;
    }
    return 0;
}
