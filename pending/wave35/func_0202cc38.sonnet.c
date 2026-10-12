/* cflags: -lang c++ */
#include "ffc/types.h"

struct O { virtual ~O(); };
extern "C" {
extern void func_02022eb8(uint32_t);
extern void func_0202ae9c(void *);
extern void func_02056844(void *);
extern uint8_t data_020ad9e8;
}
struct S {
    uint32_t vt;
    uint8_t pad[0x2c];
    uint32_t f30;
    uint8_t pad2[0x5d4 - 0x34];
    O *slot[45];
    void clear(int i) {
        if (slot[i] != 0) {
            func_02022eb8(f30);
            if (slot[i] != 0) {
                delete slot[i];
            }
            *(O**)((char*)this + 0x5d4 + (i << 2)) = 0;
        }
    }
};

extern "C" S *func_0202cc38(S *a)
{
    a->vt = (uint32_t)&data_020ad9e8;
    for (int i = 0; i < 45; i++) {
        a->clear(i);
    }
    func_0202ae9c(a);
    func_02056844(a);
    return a;
}
