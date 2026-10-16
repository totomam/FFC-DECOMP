/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern int func_0204b1bc(void *p);
int func_0204b320(uint8_t *p)
{
    if (*(int *)(p + 4) != 0) return 0;
    return func_0204b1bc(p + 0x30);
}
