#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;

extern void *func_02052d90(void *mar, uint32_t index);
extern int func_0201bf6c(void *a, uint16_t b);
extern void *func_0205681c(uint32_t size);
extern void *func_02047920(void *node, uint32_t a, uint16_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov003_0217b7f8;
extern Pair data_ov003_0217b800;
extern void *data_020b93b8;

void func_ov003_02173504(uint8_t *p)
{
    uint32_t v = *(uint32_t *)(p + 0x9c);
    uint32_t idx;
    uint8_t *mar;
    uint8_t *e;
    uint32_t sel;
    void *n;

    if (v == 0xFFFFFFFEu) {
        *(Pair *)(p + 0x80) = data_ov003_0217b7f8;
        return;
    }

    idx = ((uint32_t *)*(uint32_t **)(p + 0xa4))[v];
    mar = func_02052d90(*(void **)(p + 0xb0), *(uint32_t *)(p + 0xb4));
    e = mar + *(uint32_t *)(mar + 0x1c) + idx * 12;

    if (func_0201bf6c(data_020b93b8, *(uint16_t *)(e + 8)) == 0) {
        sel = *(uint16_t *)(e + 4);
    } else {
        sel = *(uint16_t *)(e + 6);
    }

    n = func_0205681c(0x88);
    if (n != 0) {
        n = func_02047920(n, *(uint32_t *)(p + 0x88), (uint16_t)sel, 0);
    }
    func_02056bc0(p + 0x14, n);

    mar = func_02052d90(*(void **)(p + 0xb0), *(uint32_t *)(p + 0xb4));
    *(uint32_t *)(p + 0x94) = *(uint16_t *)(mar + 8);
    v = *(uint32_t *)(p + 0x9c);
    *(uint32_t *)(p + 0xa0) = v >> 2;

    *(Pair *)(p + 0x80) = data_ov003_0217b800;
}
