/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
extern "C" uint8_t data_020b93bc[];
struct Num { uint64_t v; Num(uint64_t x) : v(x) {} ~Num() {} };
inline uint64_t pass(const Num &a) { return a.v; }
extern "C" uint64_t func_0201b7b0(uint8_t *p);
extern "C" uint64_t func_0201b7b0(uint8_t *p) {
    func_0208763c(data_020b93bc);
    uint64_t n = *(uint64_t *)(p + 0x98);
    uint64_t m = pass(n);
    func_02087678(data_020b93bc);
    return m;
}
