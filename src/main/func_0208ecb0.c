#include "ffc/types.h"

extern void func_02086998(uint32_t x);
extern void func_0208898c(uint32_t x);

void func_0208ecb0(uint32_t a, uint32_t *p) {
    if (p[0] == 0) {
        func_02086998(a);
    }
    func_0208898c(p[1]);
}
