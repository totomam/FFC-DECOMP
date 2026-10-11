#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov003_02169704(void *p, void *a, uint32_t v);
extern void func_ov003_02169814(void *p, void *a, uint32_t v);

void func_ov003_02174588(void *a, int b, uint32_t c) {
    if (b) {
        void *p = func_0205681c(0x88);
        if (p) {
            func_ov003_02169704(p, a, c);
        }
    } else {
        void *p = func_0205681c(0x1c);
        if (p) {
            func_ov003_02169814(p, a, c);
        }
    }
}
