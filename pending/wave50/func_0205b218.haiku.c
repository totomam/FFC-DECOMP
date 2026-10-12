#include "ffc/types.h"

extern uint32_t func_0205816c(void *first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth, uint32_t sixth, uint32_t seventh);
extern void func_0208763c(void);
extern void func_0205b7e8(void *a, void *b, uint32_t c);
extern void func_02087678(void *p);
extern uint8_t data_0213e118[];

typedef struct {
    uint8_t b0;
    uint8_t pad1[3];
    void *p;
    volatile uint8_t f;
    uint8_t pad2[3];
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Loc;

uint32_t func_0205b218(uint8_t *a, uint32_t b, uint32_t c) {
    Loc loc;
    uint32_t r6;

    c = (c + 3) & ~3u;
    r6 = func_0205816c(a + 0x70, c, 0, 0x20, 0, 0, 0);
    loc.a = b;
    loc.b = r6;
    loc.c = c;
    loc.p = data_0213e118;
    loc.f = 1;
    if (loc.f != 0) {
        func_0208763c();
    }
    loc.b0 = 0;
    func_0205b7e8(a + 0xdc, &loc.a, loc.b0);
    if (loc.f != 0) {
        func_02087678(loc.p);
    }
    return r6;
}
