#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t pad;
    uint8_t b;
} S;

extern int32_t func_0208cf38(int32_t a, int32_t b, int32_t c, uint32_t d);
extern void func_020849c4(void *dst, void *src, uint32_t n);
extern void func_02087890(void *p, uint32_t n);
extern void func_0208cdd8(uint32_t a, void *b);
extern int32_t func_0208ce30(uint32_t a, uint32_t b, void *c, uint32_t d, uint32_t e, uint16_t f, uint8_t g);
extern uint8_t data_02144040[];

int32_t func_0208e9bc(void *p0, void *p1, uint32_t p2, uint32_t p3, S s) {
    int32_t r;
    if ((r = func_0208cf38(2, 7, 9, p3)) != 0) {
        return r;
    }
    if (p1 == 0) {
        return 6;
    }
    if (p2 > 0x70) {
        return 6;
    }
    func_020849c4(p1, data_02144040, p2);
    func_02087890(data_02144040, p2);
    func_0208cdd8(0x18, p0);
    r = func_0208ce30(0x18, 5, data_02144040, p2, p3, s.a, s.b);
    if (r != 0) {
        return r;
    }
    return 2;
}
