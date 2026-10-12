#include "ffc/types.h"

typedef struct { uint32_t w[4]; } Blk16;

extern int32_t func_ov001_021822f8(void **x, int32_t *y);
extern void *func_ov000_021653d4(void);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern void func_ov001_0217fc84(void *p);
extern void func_ov001_0217fd14(void *a, void *b);
extern void func_ov001_02181758(void *a, void *b);

int32_t func_ov001_021802d0(uint8_t *this, void *x, int32_t y, const Blk16 *z) {
    uint32_t loc[8];
    void *p;

    func_ov001_021822f8(&x, &y);
    if (y > 0) {
        p = func_ov000_021653d4();
        *(void **)(this + 0x38) = p;
        if (p == 0) {
            return 1;
        }
        func_02090380(p, x, y);
        *(int32_t *)(this + 0x3c) = y;
    }
    if (z != 0) {
        *(Blk16 *)(this + 0x28) = *z;
    }
    func_ov001_0217fc84(loc);
    func_ov001_0217fd14(this + 0x68, loc);
    func_ov001_02181758(this, loc);
    *(uint32_t *)(this + 0xc) = 0;
    return 0;
}
