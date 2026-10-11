#include "ffc/types.h"

extern int func_ov000_0214af30(int);

int func_ov000_0214b500(int a) {
    if (func_ov000_0214af30(a) != 7) {
        return 1;
    }
    if (func_ov000_0214af30(a) != 6) {
        return 1;
    }
    return 0;
}
