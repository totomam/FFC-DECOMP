/* cflags: -lang c++ */
#include "ffc/types.h"
struct X { virtual ~X(); };
extern "C" {
extern void func_ov009_0219a014(void*);
extern void func_ov009_021a4d98(void*);
extern void func_ov011_021c1358(void*);
extern void func_ov011_021c144c(void*);
extern void func_02069600(void*);
void func_ov011_021c2b6c(uint8_t *p) {
    func_ov009_0219a014(*(void**)(p + 0x170));
    func_ov009_021a4d98(p);
    func_ov011_021c1358(p);
    func_ov011_021c144c(p);
    X *q = *(X**)(p + 0x29c);
    if (q != 0) {
        func_02069600(p);
        X *o = *(X**)(p + 0x29c);
        if (o != 0) {
            delete o;
            *(X**)(p + 0x29c) = 0;
        }
    }
}
}
