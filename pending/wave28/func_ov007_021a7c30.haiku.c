#include "ffc/types.h"

extern void *func_0206cd68(void *a);
extern void *func_0206d774(void *a);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021a7c30(uint8_t *p) {
    if (*(int32_t *)(p + 0xf0) == 1) {
        func_02056bc0(p + 0x14, func_0206cd68(*(void **)(p + 0xc8)));
    } else {
        void *r4 = func_0206cd68(*(void **)(p + 0xc8));
        void *r0 = func_0206d774(*(void **)(p + 0xc8));
        uint8_t *q = p + 0x14;
        func_02056bc0(q, r0);
        func_02056bc0(q, r4);
    }
}
