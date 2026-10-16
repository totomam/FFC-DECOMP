#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
extern void *func_02056aec(void);
extern void *func_02060634(void *, int, int, int, int, int);
extern void func_02056bc0(void *object, void *node);
extern struct { uint32_t p0, p1, p2, p3, p4, p5, p6, p7, p8; } *data_0213df20;
extern Pair data_ov007_021c46ac;
void func_ov007_021a7f0c(uint8_t *self)
{
    if (*(uint32_t *)(self + 0xd0) == 0) {
        void *n = func_02056aec();
        void *m = func_02060634((void *)data_0213df20->p8, 8, 0, 10, 0, 0);
        func_02056bc0(self + 0x14, m);
        func_02056bc0(self + 0x14, n);
        return;
    }
    *(Pair *)(self + 0xb8) = data_ov007_021c46ac;
}
