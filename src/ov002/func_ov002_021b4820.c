#include "ffc/types.h"

extern void func_ov002_021b3cf0(void *obj, uint32_t a1, uint32_t a2, uint32_t a3, int s5, int s6, int s7);
extern int func_ov002_02198d08(uint32_t a, uint32_t b);
extern int func_ov002_0219b860(void);
extern int func_ov002_02198db8(uint32_t a, uint32_t b);
extern int func_ov002_021ae5ec(void);
extern int func_ov002_021ae5fc(int x);
extern int func_ov002_021ae5f4(int x);
extern void *func_0203b720(void);
extern void func_02056bc0(void *object, void *node);
extern char data_ov002_021d5a8c[];

void *func_ov002_021b4820(void *self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t *p5, int p6, int p7, int p8)
{
    int *w = (int *)self;
    int i;
    int r6;
    int r7;

    func_ov002_021b3cf0(self, a1, a2, a3, 2, 1, 1);
    w[0] = (int)data_ov002_021d5a8c;
    w[0x55] = 3;
    w[0x5a] = p8;
    func_ov002_02198d08(w[0x38], w[0x30]);
    w[0x55] = func_ov002_0219b860();
    w[0x2e] = (w[0x55] == 1) ? 8 : 7;
    w[0x42] = 1;
    w[0x59] = p6;
    for (i = 0; i < w[0x59]; i++) {
        w[0x56 + i] = p5[i];
        r6 = func_ov002_02198db8(w[0x38], w[0x56 + i]);
        if (p7 == func_ov002_021ae5ec()) {
            r7 = func_ov002_021ae5fc(r6);
            w[0x2f] = r7 + 6 * func_ov002_021ae5f4(r6);
        }
    }
    func_02056bc0(&w[5], func_0203b720());
    return self;
}
