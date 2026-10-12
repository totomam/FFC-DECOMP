#include "ffc/types.h"

extern int func_0206cb98(void *p);
extern void func_0206d83c(void *p, void *a, void *b);
extern void *func_02056aec(void *obj);
extern void *func_0206cbd4(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *data_0213e178;

void func_0206ecf0(void *a0)
{
    uint8_t *a = (uint8_t *)a0;
    if (func_0206cb98(data_0213e178) != 0) {
        uint32_t *w = (uint32_t *)(a + 0xc);
        *w = (*w & ~0xffu) | 2u;
        return;
    }
    func_0206d83c(data_0213e178, *(void **)(a + 0x98), a + 0x80);
    {
        void *r4 = func_02056aec(a);
        void *r1 = func_0206cbd4(data_0213e178);
        uint8_t *b = a + 0x14;
        func_02056bc0(b, r1);
        func_02056bc0(b, r4);
    }
}
