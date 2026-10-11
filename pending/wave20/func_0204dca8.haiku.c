#include "ffc/types.h"

extern void *data_02139d6c;

int func_0204dca8(void) {
    int n;
    void *p;
    p = data_02139d6c;
    n = 0;
    while (p != 0) {
        n++;
        p = *(void **)((char *)p + 0x20);
    }
    return n;
}
