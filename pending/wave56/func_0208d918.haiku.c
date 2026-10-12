#include "ffc/types.h"

extern int32_t func_0208cf38(int32_t a, int32_t b);
extern int32_t func_02087460(void);
extern int32_t func_0208d304(void);
extern void func_0208d9b8(void *p);
extern void func_0208cdd8(int32_t a, uint32_t b);
extern void func_02087890(void *p, uint32_t n);
extern int32_t func_0208ce30(int32_t a, int32_t b, void *p);

typedef struct {
    void *ptr;
    uint16_t f04;
    uint8_t p1[0x14 - 6];
    uint16_t f14;
    uint8_t p2[0x34 - 0x16];
    uint16_t f34;
    uint16_t f36;
} Obj;

int32_t func_0208d918(uint32_t a, Obj *b) {
    int32_t r;

    r = func_0208cf38(1, 2);
    if (r != 0) {
        return r;
    }
    if (func_02087460() != 0) {
        if (func_0208d304() == 0) {
            return 4;
        }
    }
    if (b == 0) {
        return 6;
    }
    if (b->f04 != 0 && b->ptr == 0) {
        return 6;
    }
    if (b->f34 + (b->f14 ? 0x2a : 0) > 0x200) {
        return 6;
    }
    if (b->f36 + (b->f14 ? 6 : 0) > 0x200) {
        return 6;
    }
    func_0208d9b8(b);
    func_0208cdd8(7, a);
    func_02087890(b, 0x40);
    if (b->f04 != 0) {
        func_02087890(b->ptr, 0x40);
    }
    r = func_0208ce30(7, 1, b);
    if (r != 0) {
        return r;
    }
    return 2;
}
