#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a2378(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov007_021c4378;
extern Pair data_ov007_021c4380;
extern Pair data_ov007_021c4388;
extern Pair data_ov007_021c4390;
extern Pair data_ov007_021c4398;

void func_ov007_021a65fc(void *self)
{
    uint8_t *p = (uint8_t *)self;

    switch (*(uint32_t *)(p + 0x94)) {
    default:
        *(Pair *)(p + 0x80) = data_ov007_021c4378;
        return;
    case 0: {
        void *r = func_0205681c(0x90);
        if (r) {
            r = func_ov007_021a2378(r, *(void **)(p + 0x88));
        }
        func_02056bc0(p + 0x14, r);
        *(Pair *)(p + 0x80) = data_ov007_021c4380;
        return;
    }
    case 1:
        *(Pair *)(p + 0x80) = data_ov007_021c4388;
        return;
    case 2:
        *(Pair *)(p + 0x80) = data_ov007_021c4390;
        return;
    case 3:
        *(Pair *)(p + 0x80) = data_ov007_021c4398;
        return;
    }
}
