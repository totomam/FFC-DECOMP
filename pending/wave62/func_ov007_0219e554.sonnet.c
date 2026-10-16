#include "ffc/types.h"
typedef struct { int32_t a, b; } P;
extern void *func_02062a78(uint32_t o, P v, P q, int32_t a, int32_t b, int32_t c, int32_t d);
extern void func_02056bc0(void *object, void *node);
void func_ov007_0219e554(uint8_t *p) {
    P v = {-512, 0};
    P q = {0, 0};
    void *r = func_02062a78(*(uint32_t*)(p + 0x80), v, q, 600, 0, 0, 0);
    func_02056bc0(p + 0x14, r);
}
