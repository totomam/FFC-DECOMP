#include "ffc/types.h"

extern void func_ov000_02147810(void);
extern void func_ov000_021477b4(void);
extern void func_ov000_021477d0(int a, int b, int c);
extern int func_ov000_021483fc(void);
extern int func_ov000_02148514(int a, int x);
extern void func_ov000_02147844(void);

int func_ov000_02148748(void)
{
    int r;
    int i;

    func_ov000_02147810();
    func_ov000_021477b4();
    func_ov000_021477d0(0x44, 0x43, -1);
    i = 0;
    do {
        int v = func_ov000_021483fc();
        r = func_ov000_02148514(v, i);
        if (r == 1) {
            break;
        }
        i++;
    } while (i < 5);
    func_ov000_02147844();
    return r == 1;
}
