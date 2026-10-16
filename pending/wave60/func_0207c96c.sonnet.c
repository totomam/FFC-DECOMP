#include "ffc/types.h"
extern void func_02089010(void *p, int a);
extern void func_02088714(void *p, int a, int b, void *f, void *s);
extern void func_0207c96c(uint8_t *p);
void func_0207c96c(uint8_t *p) {
    int n = 0xc0;
    if ((*(int (**)(int))(p + 0x34))(*(int *)(p + 0x38)) != 0) {
        func_02089010(p, 1);
        return;
    }
    func_02088714(p + 0xc, n, n + 0x47, (void *)&func_0207c96c, p);
}
