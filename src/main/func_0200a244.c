#include "ffc/types.h"

extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);

void *func_0200a244(void *object)
{
    uint8_t *p = (uint8_t *)object;

    if (*(void **)(p + 4) != 0) {
        if (p[0xc] != 0) {
            func_02052d3c(*(void **)(p + 4), *(void **)(p + 8));
        }
        func_02052c04(*(void **)(p + 4));
    }
    func_02053290(object);
    return object;
}
