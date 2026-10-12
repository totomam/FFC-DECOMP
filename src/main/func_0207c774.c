#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t func_0207aa88(uint32_t a, void *b, uint32_t c, uint32_t d);
extern void func_0207ab2c(Pair *buf);
extern uint32_t func_0207e990(void *object, Pair v);
extern uint32_t func_0207ab74(void);
extern uint32_t func_0207ab84(void);
extern uint32_t func_0207ab94(void);
extern uint32_t func_0207e9c0(void *object, uint32_t a, uint32_t b);
extern uint32_t func_0207ea18(void *object, uint32_t a, uint32_t b);
extern uint32_t func_0207aa48(uint32_t a);

uint32_t func_0207c774(void *p, uint32_t a1)
{
    Pair buf;
    uint32_t r4, r6, r7, r0;

    if (func_0207aa88(a1, (uint8_t *)p + 0xb0, 0x40, 0) != 0x40) {
        return 0;
    }
    func_0207ab2c(&buf);
    if (func_0207e990((uint8_t *)p + 0x64, buf) != 0) {
        goto done;
    }
    r7 = func_0207ab74();
    if (r7 == 0) {
        return 0;
    }
    r4 = func_0207ab84();
    r6 = func_0207ab94();
    if (r4 == 0) {
        return 0;
    }
    if (r6 == 0) {
        return 0;
    }
    r7 = func_0207e9c0((uint8_t *)p + 0x64, r7, 1);
    r0 = func_0207ea18((uint8_t *)p + 0x64, r4, r6);
    if (r7 == 0) {
        return 0;
    }
    if (r0 == 0) {
        return 0;
    }
done:
    r0 = func_0207aa48(a1);
    *(uint32_t *)((uint8_t *)p + 0xac) = r0;
    return 1;
}
