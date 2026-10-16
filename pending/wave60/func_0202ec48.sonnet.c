/* cflags: -lang c++ -noO4,p -O4 */
#include "ffc/types.h"
extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
extern "C" void func_0202ec48(uint8_t *p, uint32_t v);
struct G { int a, b; ~G() {} };
extern "C" void func_0202ec48(uint8_t *p, uint32_t v) {
    G g;
    g.a = 0; g.b = 0;
    func_0208763c(p + 0x4d0);
    *(uint32_t *)(p + 0x47c) = v;
    func_02087678(p + 0x4d0);
}
