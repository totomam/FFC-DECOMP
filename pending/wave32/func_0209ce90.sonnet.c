/* cflags: -lang c++ -Cpp_exceptions on */
#include "ffc/types.h"
extern "C" void func_0209cce4(void);
extern "C" void func_0209ce90(uint32_t lo, uint32_t hi, uint32_t step, void (*fn)(uint32_t)) {
    try {
        if (hi > lo) {
            do {
                hi = hi - step;
                fn(hi);
            } while (hi > lo);
        }
    } catch (...) {
        func_0209cce4();
    }
}
