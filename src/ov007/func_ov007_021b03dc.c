#include "ffc/types.h"
extern void *func_0205681c(int sz);
extern void *func_ov007_021af508(void *p, void *a, void *b, uint32_t c);
extern void *func_ov001_0218dde0(void *p, int x);
extern void func_02056bc0(void *object, void *node);
typedef struct { uint32_t a, b; } Pair;
extern Pair data_ov007_021c5b00;
void func_ov007_021b03dc(uint8_t *self) {
    void *p = func_0205681c(0xe4);
    if (p != 0) {
        p = func_ov007_021af508(p, self, self + 0xc0, *(uint32_t *)(self + 0xb8));
    }
    func_02056bc0(func_ov001_0218dde0(self, 1), p);
    *(Pair *)(self + 0xb0) = data_ov007_021c5b00;
}
