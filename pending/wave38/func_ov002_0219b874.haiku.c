#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);

void func_ov002_0219b874(uint8_t *self, void *a, void *b)
{
    void *cur = *(void **)(self + 0x4a * 4);
    void *c = b;

    if (cur != 0) {
        if (a != 0) {
            void **vt = *(void ***)a;
            ((void (*)(void *))vt[1])(a);
        }
        if (c != 0) {
            void **vt = *(void ***)c;
            ((void (*)(void *))vt[1])(c);
        }
        return;
    }
    *(void **)(self + 0x4a * 4) = a;
    *(void **)(self + 0x4a * 4 + 4) = c;
    {
        void **vt = *(void ***)a;
        ((void (*)(void *, int, int))vt[14])(a, 2, 0);
    }
    func_02056bc0(self + 0x48, *(void **)(self + 0x4a * 4));
    func_02056bc0(self + 0x48, *(void **)(self + 0x4a * 4 + 4));
}
