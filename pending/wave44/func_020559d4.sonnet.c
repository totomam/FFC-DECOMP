/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_0208763c(void *p);
extern "C" void func_02055980(void *p);
extern "C" void func_02087678(void *p);
struct Obj {
    virtual void f(uint32_t v);
    uint32_t *begin;
    uint32_t count;
};
struct Guard { void *p; uint8_t flag; };
extern "C" void func_020559d4(Obj *this_) {
    volatile Guard g;
    char *q = (char *)this_ + 0x1c;
    g.p = q;
    g.flag = 1;
    if (g.flag) func_0208763c(q);
    for (uint32_t *it = this_->begin; it != (uint32_t *)((char *)this_->begin + (this_->count << 2)); it++) {
        this_->f(*it);
    }
    func_02055980(this_);
    if (g.flag) func_02087678(g.p);
}
