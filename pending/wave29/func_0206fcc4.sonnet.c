/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_0206fe40(void *p);
extern void *func_0205681c(uint32_t size);
extern void func_02055c20(void *p);
extern uint8_t data_020b0a90[];
}
struct O { uint32_t vt; uint32_t a; uint32_t b; uint32_t c;
  O() { b = 0; c = 0x19; vt = (uint32_t)data_020b0a90; }
  static void *operator new(unsigned long n) { return func_0205681c(n); } };
extern "C" void func_0206fcc4(uint8_t *p) {
    func_0206fe40(p);
    if (p[0x4d]) {
        p[0x4d] = 0;
        new O;
        func_02055c20(p + 0x14);
    }
}
