/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern int func_ov000_02154f90(int a, int b, int c, void *d);
int func_ov000_02155400(uint8_t *p) {
    int a = *(int *)(p + 0x1c);
    int c = 0;
    int b = 0;
    if (a != 0) {
        b = *(int *)(p + 0x24);
        c = 1;
        c = func_ov000_02154f90(a, b, c, p);
    }
    return c;
}
