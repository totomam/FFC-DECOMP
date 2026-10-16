/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint8_t b; } B;
extern void func_02009888(void *a, uint32_t b, B c);
extern void func_02056844(uint32_t a);
void *func_0200958c(uint32_t *p) {
    if (p[0] != 0) {
        B v;
        v.b = 0;
        func_02009888(p, p[1], v);
        func_02056844(p[0]);
    }
    return p;
}
