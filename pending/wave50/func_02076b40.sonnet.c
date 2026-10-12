#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern void func_02071e0c(uint32_t v);
extern S data_020b28b4;
extern S data_020b28bc;

void func_02076b40(uint8_t *p)
{
    uint32_t state = *(uint32_t *)(p + 0x94);
    if (state != 0) {
        if (state != 1) {
            return;
        }
        func_02071e0c(*(uint32_t *)(*(uint32_t *)(p + 0x80) + 0x80));
        {
            void **vt = *(void ***)p;
            ((void (*)(void *))vt[6])(p);
        }
        *(uint8_t *)(p + 0x98) = 1;
        *(uint8_t *)(p + 0x99) = 1;
        *(S *)(p + 0x88) = data_020b28b4;
    } else {
        *(S *)(p + 0x88) = data_020b28bc;
    }
}
