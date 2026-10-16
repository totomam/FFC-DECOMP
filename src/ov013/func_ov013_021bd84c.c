#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
extern void *func_0205681c(int n);
extern void *func_ov013_021bcdf8(void *p, void *q);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov013_021c4228;
void func_ov013_021bd84c(uint8_t *self) {
    void *p = func_0205681c(0x90);
    if (p != 0) p = func_ov013_021bcdf8(p, self);
    func_02056bc0(self + 0x14, p);
    *(Pair*)(self + 0xb8) = data_ov013_021c4228;
}
