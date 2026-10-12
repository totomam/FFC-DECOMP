#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021bd7b0(void *a, void *b, void *c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c63a8;
extern Pair data_ov007_021c63b0;

void func_ov007_021b3c94(uint8_t *p)
{
    if (*(uint32_t *)(p + 0xc4) == 1) {
        *(p + 0xcc) = 0;
        void *r = func_0205681c(0x1d8);
        if (r != 0) {
            r = func_ov007_021bd7b0(r, p, p + 0xcc, *(uint32_t *)(p + 0xb8));
        }
        func_02056bc0(p + 0x14, r);
        *(Pair *)(p + 0xb0) = data_ov007_021c63a8;
        return;
    }
    *(Pair *)(p + 0xb0) = data_ov007_021c63b0;
}
