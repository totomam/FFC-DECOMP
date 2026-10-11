#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S8;

extern void func_ov007_021ba704(void *p);
extern void func_02069724(S8 *out, void *p);
extern void func_02069828(void *p, S8 s);

void func_ov007_021ba8b8(void *self)
{
    uint8_t *p = (uint8_t *)self;
    S8 s;
    uint8_t v = p[0x144];

    if (v == p[0x145]) {
        p[0x144] = 0;
    } else {
        p[0x144] = v + 1;
    }

    func_ov007_021ba704(self);
    func_02069724(&s, self);
    func_02069828(self, s);
}
