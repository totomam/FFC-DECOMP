/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_0203758c(void *self);
extern "C" void *func_0205681c(uint32_t size);
extern "C" void *func_ov012_021d2654(void *node, void *buf, uint32_t a, uint32_t b, uint32_t c);
extern "C" void *func_ov001_0218dde0(void *self, uint32_t flag);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" uint32_t data_ov001_02194608[2];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

struct V {
 virtual void f0();
 virtual void f1();
 virtual void f2();
 virtual void f3();
 virtual void f4();
 virtual void f5();
 virtual void f6();
 virtual void f7();
 virtual void f8();
 virtual void f9();
 virtual void f10();
 virtual void f11();
 virtual void f12();
 virtual void f13();
 virtual void f14();
 virtual void f15();
 virtual void f16();
 virtual void f17();
 virtual void f18();
 virtual void f19();
 virtual void f20();
 virtual void f21();
 virtual void f22();
 virtual void f23();
 virtual void f24();
 virtual void f25();
};
extern "C" void func_ov001_0218a080(void *self)
{
    uint8_t *p = (uint8_t *)self;
    void *node;
    uint32_t i;

    func_0203758c(self);
    for (i = 0; i < 2; i++) {
        p[i * 0x2d8 + 0x105] = 0;
    }
    ((V *)self)->f25();

    node = func_0205681c(0x88);
    if (node != 0) {
        node = func_ov012_021d2654(node, p + 0x100, p[0x725], 0, p[0xec]);
    }
    func_02056bc0(func_ov001_0218dde0(self, 1), node);
    p[0x725] = 0;
    *(uint32_t *)(p + 0xf0) = 0;
    uint32_t x = data_ov001_02194608[0]; uint32_t y = data_ov001_02194608[1];
    *(uint32_t *)(p + 0xf8) = y;
    *(uint32_t *)(p + 0xf4) = x;
}
