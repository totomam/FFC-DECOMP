#include "ffc/types.h"

typedef struct W { uint8_t *p; } W;
extern void *func_02056aec(void);
extern void *func_0203b708(int);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021afa18(uint8_t *p)
{
    int *f = (int *)(p + 0xdc);
    int **q = (int **)(p + 0xd4);
    if (*f == 1) {
        void *a;
        void *b;
        **q = 0;
        a = func_02056aec();
        b = func_0203b708(30);
        p += 0x14;
        func_02056bc0(p, b);
        func_02056bc0(p, a);
    }
}
