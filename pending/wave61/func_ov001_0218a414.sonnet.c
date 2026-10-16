#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
typedef int (*Fn)(void*);
extern void func_020559d4(void *p);
extern void func_ov001_0218def8(void *p, int a);
extern int func_02021240(int a, int b);
extern void *func_0203b738(void);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov001_02194618;
extern Pair data_ov001_02194620;
void func_ov001_0218a414(uint8_t *self) {
    if ((*(Fn**)self)[13](self)) {
        *(Pair*)(self + 0xf4) = data_ov001_02194618;
        return;
    }
    func_020559d4(self + 0xb0);
    if (self[0x105] != 0 && self[0x3dd] != 0) {
        int z = 0;
        func_ov001_0218def8(self, 0);
        func_02021240(z - 1, 10);
        func_02056bc0(self + 0x14, func_0203b738());
        *(Pair*)(self + 0xf4) = data_ov001_02194620;
    }
}
