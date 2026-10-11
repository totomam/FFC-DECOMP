#include "ffc/types.h"

extern int func_02087460(void);
extern int func_0208d304(void);

int func_0208d2e8(void) {
    int r = 2;
    if (func_02087460()) {
        r = func_0208d304() ? 1 : 0;
    }
    return r;
}
