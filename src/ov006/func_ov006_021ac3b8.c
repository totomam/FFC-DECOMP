#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint16_t t;
    uint16_t y;
    uint8_t *p;
} G;

extern G data_ov006_021bc78c;

extern void func_ov006_021af680(void);
extern void func_ov006_021a3df0(void);
extern int32_t func_02081334(int32_t a, int32_t b);
extern void func_ov006_021abc4c(void);
extern void func_ov006_021ac0d0(void);
extern void func_0209a76c(int32_t a, int32_t b);
extern void func_ov006_021af668(void);
extern void func_ov006_021af670(void);
extern void func_ov006_021ac56c(void);
extern void func_ov006_021b5774(int32_t zero, void *a);

void func_ov006_021ac3b8(void *a)
{
    int32_t r4;
    int32_t k = 0x1d;

    func_ov006_021af680();
    func_ov006_021a3df0();
    if (data_ov006_021bc78c.t > 6) {
        data_ov006_021bc78c.t = data_ov006_021bc78c.t - 6;
    } else {
        data_ov006_021bc78c.t = 0;
    }
    r4 = func_02081334(data_ov006_021bc78c.t, k);
    if (r4 == 0x17) {
        func_ov006_021abc4c();
        return;
    }
    if (r4 > 0x17) {
        data_ov006_021bc78c.t += (uint16_t)(k - r4);
        r4 = 0;
    }
    func_ov006_021ac0d0();
    if (r4 == 0) {
        func_0209a76c(0x37 * data_ov006_021bc78c.t, 0x91);
        func_ov006_021af668();
        func_ov006_021af670();
        func_ov006_021ac56c();
        *(uint32_t *)(data_ov006_021bc78c.p + 0x38) = 0;
        func_ov006_021b5774(0, a);
    }
}
