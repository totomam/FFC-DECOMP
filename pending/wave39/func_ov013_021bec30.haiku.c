#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern int func_0206cb98(uint32_t v);
extern int func_0206cb74(uint32_t v);
extern void func_0208d350(int a, int b, int c);
extern Pair data_ov013_021c4358;
extern Pair data_ov013_021c4360;

void func_ov013_021bec30(uint8_t *p)
{
    uint32_t *w = (uint32_t *)p;
    Pair s;
    if (p[0x13c] != 0 || func_0206cb98(w[0x3d])) {
        if (func_0206cb74(w[0x3d])) {
            func_0208d350(14, 0, 0);
        }
        s = data_ov013_021c4358;
        *(Pair *)(p + 0xb8) = s;
    } else if (w[0x4e] == w[0x4c]) {
        s = data_ov013_021c4360;
        *(Pair *)(p + 0xb8) = s;
    }
}
