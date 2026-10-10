/* cflags: -lang c++ */
#include "ffc/types.h"
struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual int32_t v5();
    uint8_t pad[0x22];
    uint8_t f26;
    uint8_t pad2;
    uint8_t f28;
};
extern "C" O *func_02098210(O *p, int32_t a, int32_t b) {
    if (p->v5() < 0) {
        return 0;
    }
    uint8_t f;
    if (a != 0 || b != 0) f = 1; else f = 0;
    p->f26 = f;
    if (p->f26 == 0) p->f28 = 0;
    return p;
}
