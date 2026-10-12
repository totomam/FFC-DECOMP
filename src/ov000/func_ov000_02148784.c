#include "ffc/types.h"

typedef struct {
    uint32_t pad[15];
    uint32_t a;
    uint32_t b;
} FfcData;

extern void func_ov000_02147810(void);
extern void func_ov000_021477b4(void);
extern void func_ov000_021477d0(int a, int b, int c);
extern int func_ov000_02148484(int mode);
extern int func_ov000_02148514(int a, int b);
extern void func_ov000_02147844(void);
extern FfcData data_ov000_0216bc60;

int func_ov000_02148784(uint32_t *out, int mode)
{
    int r;
    int i;
    uint32_t v;

    func_ov000_02147810();
    func_ov000_021477b4();
    if (mode == 1) {
        func_ov000_021477d0(0x44, 0x43, (int)data_ov000_0216bc60.pad[7]);
    } else {
        func_ov000_021477d0(0x44, 0x43, -1);
    }

    i = 0;
    do {
        r = func_ov000_02148514(func_ov000_02148484(mode), i);
        if (r != 0 && r != 1) {
            break;
        }
        i++;
    } while (i < 5);

    func_ov000_02147844();

    if (r == 2) {
        *out = data_ov000_0216bc60.a >> 1;
        data_ov000_0216bc60.b = (data_ov000_0216bc60.a * 3) >> 3;
        return 1;
    }

    v = data_ov000_0216bc60.b >> 1;
    data_ov000_0216bc60.b = v;
    *out = v;
    switch (mode) {
    case 1:
        if (v < 0x3c) {
            *out = 1;
            data_ov000_0216bc60.b = data_ov000_0216bc60.a >> 3;
        }
        break;
    case 2:
        if (v < 0x3c) {
            *out = 1;
        }
        break;
    }
    return 0;
}
