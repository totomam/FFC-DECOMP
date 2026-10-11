#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t *sub;
} GlobT;

extern GlobT data_ov006_021bc78c;
extern uint8_t *func_ov006_021afd28(void);
extern void func_ov006_021afd38(uint32_t x);
extern void func_ov006_021afd4c(uint32_t x);
extern void func_ov006_021abc4c(void);

void func_ov006_021ab828(uint32_t a)
{
    uint8_t *obj = func_ov006_021afd28();
    uint32_t flag;

    if (obj[0xf5] == a) {
        return;
    }
    if (a != 0) {
        flag = (data_ov006_021bc78c.sub[0x43] != 0);
    } else {
        data_ov006_021bc78c.sub[0x43] = obj[0xf6];
        flag = 0;
    }
    func_ov006_021afd38(a);
    func_ov006_021afd4c(flag);
    func_ov006_021abc4c();
}
