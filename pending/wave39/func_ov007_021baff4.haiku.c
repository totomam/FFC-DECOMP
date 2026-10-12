#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021bc148(void *a, void *b, void *c, int d, void *e);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov007_021c7870;
extern Pair data_ov007_021c7878;

void func_ov007_021baff4(uint8_t *p) {
    void *r;
    void *a;

    if (*(int32_t *)(p + 0xc0) == 100) {
        *(Pair *)(p + 0xb0) = data_ov007_021c7870;
        return;
    }
    *(p + 0x38b6) = 0;
    a = func_0205681c(0xbc);
    r = a;
    if (a != 0) {
        r = func_ov007_021bc148(a, p, p + 0xd8 + *(int32_t *)(p + 0xc0) * 0x23c, 1, p + 0x38b6);
    }
    func_02056bc0(p + 0x14, r);
    *(Pair *)(p + 0xb0) = data_ov007_021c7878;
}
