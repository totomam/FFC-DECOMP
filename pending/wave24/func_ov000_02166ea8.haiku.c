#include "ffc/types.h"

extern void *func_ov000_02166414(void);
extern void func_ov000_021652a8(int a, int b, int c, void *d);
extern void func_ov001_021805f0(void *p);
extern void func_ov000_02168738(void *p);
extern uint8_t data_ov000_0216b7fc[];

typedef struct {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
} S;

int func_ov000_02166ea8(void) {
    S *p = (S *)func_ov000_02166414();
    if (p->fc == 0) {
        func_ov000_021652a8(12, 0, 15, data_ov000_0216b7fc);
        return 3;
    }
    func_ov001_021805f0(p->f0);
    func_ov000_02168738(p->f8);
    func_ov000_02168738(p->f4);
    p->fc = 0;
    return 0;
}
