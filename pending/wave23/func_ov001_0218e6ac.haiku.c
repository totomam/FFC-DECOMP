#include "ffc/types.h"

extern void *data_020b8e44;
extern void *func_ov001_0218de10(void);
extern void func_02056bc0(void *object, void *node);
extern void func_ov001_0218e3b4(void *obj, int flag);

void func_ov001_0218e6ac(void *obj)
{
    void *v = *(void **)((char *)*(void **)data_020b8e44 + 0x88);
    if (v) {
        void *n = func_ov001_0218de10();
        func_02056bc0((char *)obj + 0x14, n);
        func_ov001_0218e3b4(obj, 1);
    }
}
