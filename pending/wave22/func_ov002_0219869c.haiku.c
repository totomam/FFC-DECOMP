#include "ffc/types.h"

extern void func_ov002_021a12d8(uint32_t a, uint32_t b);
extern void func_ov002_021995e0(uint32_t a, uint32_t b);

void func_ov002_0219869c(uint32_t *p, uint32_t v) {
    func_ov002_021a12d8(p[0x46], v);
    func_ov002_021a12d8(p[0x47], v);
    func_ov002_021995e0(p[0x48], v);
    p[0x45] = v;
}
