/* cflags: -nothumb -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
void func_02080514(P *p) {
    int i;
    for (i = 0; i < 3; i++) {
        p->a = 0x1000; p->b = 0; p++;
        p->a = 0; p->b = 0; p++;
    }
}
