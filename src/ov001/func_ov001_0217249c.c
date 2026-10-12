#include "ffc/types.h"

extern void func_ov001_02171ee0(void);
extern void func_ov001_02171ee4(void);
extern void func_ov000_021652a8(int32_t a, int32_t b, int32_t c, void *d);
extern void func_ov000_021658ac(int32_t a);
extern void func_ov000_02165474(int32_t a, int32_t b);
extern int32_t func_ov000_02165438(int32_t a, int32_t *b);
extern int32_t data_ov001_02194be8;
extern char data_ov001_0218f3b4[];

int32_t func_ov001_0217249c(int32_t *p)
{
    if (p == 0) return 0;
    if (p[0] == 0) return 0;
    if (p[1] < 0) return 0;
    if (p[1] >= data_ov001_02194be8) return 0;
    func_ov001_02171ee0();
    if (p[115] != 0) {
        func_ov000_021652a8(8, 3, 0x10, data_ov001_0218f3b4);
        func_ov000_021658ac(p[115]);
        p[115] = 0;
    }
    if (p[20] != -1) {
        func_ov000_02165474(p[20], 2);
        if (func_ov000_02165438(p[20], &p[114]) == 0) {
            func_ov001_02171ee4();
            return 0;
        }
        p[20] = -1;
    }
    func_ov001_02171ee4();
    return 1;
}
