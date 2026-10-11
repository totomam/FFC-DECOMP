#include "ffc/types.h"

typedef struct {
    uint8_t *data;
    uint32_t count;
    uint32_t cap;
} Arr;

extern void func_020095b8(void *p);
extern void func_0200b618(uint32_t x);

void func_ov003_0216ee28(Arr *a, uint32_t *src)
{
    if (a->count < a->cap) {
        uint32_t *p = (uint32_t *)(a->data + a->count * 16);
        if (p != 0) {
            *p = *src;
            func_020095b8(p + 1);
        }
        a->count++;
    } else {
        uint32_t w;
        ((uint8_t *)&w)[1] = 0;
        func_0200b618(w);
    }
}
