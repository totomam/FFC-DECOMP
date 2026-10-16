/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern uint8_t data_0213e14c[];
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
}
struct Lock {
    void *p; int x;
    Lock(void *q) : p(q) { func_0208763c(q); }
    ~Lock() { func_02087678(p); }
};
extern "C" void func_0206345c(uint8_t *self) {
    Lock l(data_0213e14c);
    *(int32_t *)(self + 0x34) += 1;
}
