#include "ffc/types.h"

typedef struct {
    uint32_t w[4];
} S16;

extern void *func_0205681c(uint32_t size);
extern void *func_02065d14(void *p, void *a, S16 s);

void *func_02066074(void *a, S16 s)
{
    void *r = func_0205681c(0x30);
    if (r != 0) {
        r = func_02065d14(r, a, s);
    }
    return r;
}
