/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint8_t data_020b93bc;
void func_0201b81c(uint8_t *p);
}
struct Num { uint64_t v; Num(uint64_t x) : v(x) {} ~Num() {} };
inline uint64_t id(const Num &a) { return a.v; }
extern "C" void func_0201b81c(uint8_t *p)
{
    func_0208763c(&data_020b93bc);
    *(uint64_t *)(p + 0xa4) = id(Num(*(uint64_t *)(p + 0x98)));
    func_02087678(&data_020b93bc);
}
