#include "ffc/types.h"

extern void *func_020903cc(void *object, int value, int size);

typedef struct {
    uint32_t flag : 1;
} W0;

typedef struct {
    uint8_t lo : 1;
    uint8_t count : 7;
} B0;

typedef struct {
    uint32_t w0;
    uint32_t n;
    uint16_t *ptr;
} Src;

void func_0203649c(uint8_t *p, Src *q) {
    uint32_t i;
    uint32_t flag;
    uint16_t *src;

    func_020903cc(p + 0x30, 0, 0x22);
    for (i = 0; i <= (flag = (((W0 *)q)->flag ? 1 : 0), flag ? q->n : ((B0 *)q)->count); i++) {
        src = flag == 0 ? (uint16_t *)((uint8_t *)q + 2) : q->ptr;
        ((uint16_t *)(p + 0x30))[i] = src[i];
    }
}
