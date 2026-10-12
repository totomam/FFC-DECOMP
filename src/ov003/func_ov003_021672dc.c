#include "ffc/types.h"

extern void *func_020424e0(void *);
extern void *func_ov003_02146248(void *);
extern void *func_ov003_02146318(void *);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *);

void func_ov003_021672dc(uint8_t *p) {
    void *r;
    if (*(p + 0x84)) {
        r = func_ov003_02146248(func_020424e0(*(void **)(p + 0x80)));
    } else {
        r = func_ov003_02146318(func_020424e0(*(void **)(p + 0x80)));
    }
    func_02056bc0(p + 0x14, r);
    func_02056bc0(p + 0x14, func_02056aec(p));
}
