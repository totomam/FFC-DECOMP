#include "ffc/types.h"

extern int32_t func_0208ea9c(void *a, int32_t b, int32_t c, int32_t d, int32_t e);
extern void func_0206cb44(void *p);
extern void func_0206cf14(void);

typedef struct {
    uint8_t pad0[0xf84];
    uint16_t cnt;
    uint16_t flags;
    uint16_t f88;
    uint8_t pad1[0x30b4 - 0xf8a];
    uint8_t f30b4;
} State;

void func_0206cea0(State *s) {
    uint16_t n = s->cnt;
    if (n <= 0xe) {
        uint16_t *c = &s->cnt;
        do {
            if (s->flags & (1u << (n - 1))) {
                if (func_0208ea9c(func_0206cf14, 0, 0, n, 1) != 2) {
                    func_0206cb44(s);
                }
                return;
            }
            (*c)++;
            n = *c;
        } while (n <= 0xe);
    }
    if (s->f88 == 0xffff) {
        func_0206cb44(s);
    } else {
        s->f30b4 = 1;
    }
}
