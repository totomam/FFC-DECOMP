/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern int func_ov001_02181e1c(int a, uint32_t **b);
void func_ov001_02180298(int a, uint32_t **b) {
    if (func_ov001_02181e1c(a, b) != 0) return;
    (*b)[3] = 0;
    (*b)[4] = 1;
}
