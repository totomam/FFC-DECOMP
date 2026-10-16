/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern uint8_t data_020b93e0[];
extern void func_0208763c(void);
extern void func_02007c2c(void *);
extern void func_02087678(void *);
}
struct G {
    void *p; uint8_t f;
    G(void *x) : p(x), f(1) { if (f) func_0208763c(); }
    ~G() { if (f) func_02087678(p); }
};
extern "C" void func_02021380(void *a) {
    G g(data_020b93e0);
    func_02007c2c(a);
}
