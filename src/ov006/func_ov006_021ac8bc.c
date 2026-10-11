#include "ffc/types.h"

typedef struct Inner { uint8_t pad[0xc]; uint32_t v; } Inner;
typedef struct Outer { uint8_t pad[8]; Inner *p; } Outer;

extern uint32_t func_ov006_021b1420(void);
extern void func_ov006_021b0600(uint32_t);
extern void func_ov006_021b13f8(void);
extern void func_ov006_021af56c(uint32_t);
extern void func_ov006_021a64c8(void (*)(void));
extern void func_ov006_021ac8ec(void);
extern Outer data_ov006_021bc78c;

void func_ov006_021ac8bc(void)
{
    if (func_ov006_021b1420() != 0) {
        return;
    }
    func_ov006_021b0600(6);
    func_ov006_021b13f8();
    func_ov006_021af56c(data_ov006_021bc78c.p->v);
    func_ov006_021a64c8(func_ov006_021ac8ec);
}
