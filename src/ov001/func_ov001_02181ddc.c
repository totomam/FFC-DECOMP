#include "ffc/types.h"

extern void func_ov000_02165428(uint32_t a);
extern void func_ov000_02168a5c(uint32_t a);
extern void func_ov000_02168738(uint32_t a);
extern void func_ov000_021653f4(void *a);
extern void func_ov000_02165918(void);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
} S;

void func_ov001_02181ddc(S *p) {
    if (p->f1c) {
        p->f14 = 1;
        return;
    }
    func_ov000_02165428(p->f0);
    func_ov000_02168a5c(p->fc);
    func_ov000_02168738(p->f10);
    func_ov000_021653f4(p);
    func_ov000_02165918();
}
