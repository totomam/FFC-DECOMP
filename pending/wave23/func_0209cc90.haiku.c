#include "ffc/types.h"

void func_0209cc90(void) {
    void (**p)(void);
    for (p = (void (**)(void))0x020a7b3cU; p != 0 && *p != 0; p++) {
        (*p)();
    }
}
