#include "ffc/types.h"
typedef struct { int x, y; } V;
typedef struct { int a, b; V v; } Q;
extern void func_ov003_021464f4(uint32_t a, uint16_t b);
extern Q *func_ov003_02155b40(void);
static inline V add(V a, V b) { V r; r.x = a.x + b.x; r.y = a.y + b.y; return r; }
void func_ov003_0214e0d4(V *out, uint8_t *p) {
    V a, b, c;
    func_ov003_021464f4(*(uint32_t *)(p + 0x14), *(uint16_t *)(p + 0x18));
    a = func_ov003_02155b40()->v;
    b = *(V *)(p + 0x28);
    c = add(a, b);
    *out = c;
}
