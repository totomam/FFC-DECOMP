#include "ffc/types.h"

extern uintptr_t func_02069734(const void *object);
extern void *func_020696e8(const void *object);
extern void func_020692f0(uint32_t value);

typedef struct {
    uint32_t pad;
    uint32_t a;
    uint32_t b;
} ov013_s;

void func_ov013_021c0cc4(void *object) {
    if (func_02069734(object) != 0) {
        return;
    }
    {
        ov013_s *s = (ov013_s *)func_020696e8(object);
        uint32_t a = s->a;
        uint32_t b = s->b;
        uint32_t m = a & (a ^ b);
        if ((m & 0xf0) == 0) {
            return;
        }
    }
    func_020692f0(*(uint32_t *)((uint8_t *)object + 0xc4));
}
