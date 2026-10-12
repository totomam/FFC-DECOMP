#include "ffc/types.h"

extern int func_ov001_02171ac0(void *p, int a);
extern void func_ov001_02171e6c(void *p, int a, int b);

int func_ov001_02175030(uint32_t *p, int a, int b)
{
    int r1 = 0;
    int r7 = 0;

    p[0x4a] += b;
    if (p[0x4a] == p[0x4b] || p[0x56] != 0) {
        p[0x49] = 1;
    }

    if (p[3] == 0) {
        if (!func_ov001_02171ac0((char *)p + 0xe8, a)) {
            return 0;
        }
        r1 = p[0x3b];
        r7 = p[0x3d];
    } else if (p[3] == 1) {
        if (b != 0) {
            p[0x49] = 1;
            p[0x10] = 0xd;
            return 0;
        }
        r1 = a;
        r7 = b;
    } else if (p[3] == 2) {
        r1 = a;
        r7 = b;
    }

    func_ov001_02171e6c(p, r1, r7);
    return 1;
}
