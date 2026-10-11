#include "ffc/types.h"

extern void func_02069700(void *owner, int a, int b);
extern void func_ov002_0219cfb4(void *obj, void *arg);
extern void *func_02056b10(void *owner);
extern void func_02056bc0(void *object, void *node);

void func_ov011_021c4b6c(void *a, void *b)
{
    func_02069700(a, 1, 0);
    func_ov002_0219cfb4(*(void **)((uint8_t *)a + 0xe0), b);
    {
        void *n = func_02056b10((uint8_t *)*(void **)((uint8_t *)a + 0xe0) + 0x14);
        func_02056bc0((uint8_t *)a + 0x14, n);
    }
}
