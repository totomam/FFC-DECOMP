#include "ffc/types.h"

extern int func_ov000_0214577c(void *p);
extern int func_ov000_021457a4(void *p);

int func_ov000_02146660(void *a, void *b) {
    if (a != 0 && func_ov000_0214577c(a) == 0 && func_ov000_021457a4(a) == 0 &&
        b != 0 && func_ov000_0214577c(b) == 0 && func_ov000_021457a4(b) == 0) {
        return 1;
    }
    return 0;
}
