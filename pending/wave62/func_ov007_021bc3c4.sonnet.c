#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
extern void *func_0205681c(int n);
extern void *func_02074028(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_02074048(void *o, int id, int x);
extern uint8_t **data_020b8e44;
extern Pair data_ov007_021c81a4;
void func_ov007_021bc3c4(uint8_t *self) {
    if (*(void **)(self + 0xb0) == 0) {
        void *p;
        *(uint8_t *)(self + 0xb4) = 1;
        p = func_0205681c(0x20);
        if (p != 0) p = func_02074028(p);
        *(void **)(self + 0xb0) = p;
        func_02056bc0(self + 0x48, p);
        func_02056bc0(self + 0x14, func_02074048(*(void **)(self + 0xb0), 0xbd2, *(int *)(*(uint8_t **)data_020b8e44 + 0x80)));
    }
    *(Pair *)(self + 0xc8) = data_ov007_021c81a4;
}
