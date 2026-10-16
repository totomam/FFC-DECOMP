#include "ffc/types.h"
extern void *func_02056aec(void);
extern void *func_0203b708(int);
extern void func_02056bc0(void *object, void *node);
void func_ov007_021afa18(uint8_t *p) {
    if (*(int *)(p + 0xdc) != 1) return;
    **(int **)(p + 0xd4) = 0;
    {
        void *a = func_02056aec();
        void *b = func_0203b708(0x1e);
        func_02056bc0(p + 0x14, b);
        func_02056bc0(p + 0x14, a);
    }
}
