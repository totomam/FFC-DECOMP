#include "ffc/types.h"

extern void func_ov006_021af680(void);
extern void func_ov006_021a3df0(void);
extern int func_02081334(uint32_t v, uint32_t m);
extern void func_ov006_021ac0d0(void);
extern void func_ov006_021abc4c(void);
extern void func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov006_021af668(void);
extern void func_ov006_021af670(void);
extern void func_ov006_021ac56c(void);
extern void func_ov006_021b5774(int x, void *p);

struct G {
    uint32_t a;
    uint16_t t;
    uint16_t pad;
    uint32_t *p;
};
extern struct G data_ov006_021bc78c;

void func_ov006_021ac430(void *p0)
{
    int r;

    func_ov006_021af680();
    func_ov006_021a3df0();
    data_ov006_021bc78c.t += 6;
    r = func_02081334(data_ov006_021bc78c.t, 0x1d);
    if (r >= 6) {
        func_ov006_021ac0d0();
        return;
    }
    data_ov006_021bc78c.t -= (uint16_t)r;
    func_ov006_021abc4c();
    func_0209a76c((uint32_t)(0x37 * data_ov006_021bc78c.t), 0x91);
    func_ov006_021af668();
    func_ov006_021af670();
    func_ov006_021ac56c();
    *(uint32_t *)((uint8_t *)data_ov006_021bc78c.p + 0x38) = 0;
    func_ov006_021b5774(0, p0);
}
