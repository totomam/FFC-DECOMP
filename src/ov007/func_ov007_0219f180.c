/* cflags: -lang c++ */
#include "ffc/types.h"

class Obj {
public:
    virtual void s0();
    virtual void s1();
    virtual void s2();
    uint32_t pad[2];
    int32_t flag;
};

extern "C" void func_ov007_0219f180(void *unused, Obj *p)
{
    if ((int8_t)p->flag == 0) {
        p->s2();
    }
}
