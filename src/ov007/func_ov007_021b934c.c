#include "ffc/types.h"
typedef struct { uint8_t pad[0xe0]; uint32_t *ptr; uint8_t pad2[0x10]; uint8_t b; } S;
extern void func_020695d0(S *p);
S *func_ov007_021b934c(S *p) {
    *p->ptr = p->b;
    func_020695d0(p);
    return p;
}
