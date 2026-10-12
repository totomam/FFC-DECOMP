#include "ffc/types.h"

extern int func_ov002_0219c594(void *p);
extern int func_ov002_0219c5d8(void *p, int idx);

int func_ov002_0219c6ac(void *p) {
    if (!func_ov002_0219c594(p)) {
        return 7;
    }
    if (func_ov002_0219c5d8(p, 0) || func_ov002_0219c5d8(p, 1) || func_ov002_0219c5d8(p, 2)) {
        return 0;
    }
    if (func_ov002_0219c5d8(p, 3) || func_ov002_0219c5d8(p, 4) || func_ov002_0219c5d8(p, 5)) {
        return 3;
    }
    return 7;
}
