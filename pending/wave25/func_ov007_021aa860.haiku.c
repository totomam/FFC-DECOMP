#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a9640(void *a, void *b, uint32_t c);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov007_021c4d50;

void func_ov007_021aa860(uint8_t *p)
{
    void *r;
    uint32_t a;
    uint32_t b;

    *(p + 0x8c) = 0;
    r = func_0205681c(0x158);
    if (r != 0) {
        r = func_ov007_021a9640(r, p + 0x8c, *(uint32_t *)(p + 0x88));
    }
    func_02056bc0(p + 0x14, r);
    a = data_ov007_021c4d50.a;
    b = data_ov007_021c4d50.b;
    *(uint32_t *)(p + 0x80) = a;
    *(uint32_t *)(p + 0x84) = b;
}
