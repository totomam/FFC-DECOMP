/* cflags: -lang c++ */
#include "ffc/types.h"
struct B { uint8_t v; B(uint8_t x):v(x){} };

extern "C" uint32_t func_0205816c(void *first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth, uint32_t sixth, uint32_t seventh);
extern "C" void func_0208763c(void);
extern "C" void func_0205b7e8(void *a, void *b, B c);
extern "C" void func_02087678(void *p);
extern "C" uint8_t data_0213e118[];

typedef struct {
    void *p;
    volatile uint8_t f;
    uint8_t pad2[3];
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Loc;

extern "C" uint32_t func_0205b218(uint8_t *a, uint32_t b, uint32_t c) {
    volatile uint8_t bv;
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
    bv = 0;

    func_0205b7e8(a + 0xdc, (void*)&loc.a, B(bv));
    if (loc.f != 0) {
        func_02087678((void*)loc.p);
    }
    return r6;
}
