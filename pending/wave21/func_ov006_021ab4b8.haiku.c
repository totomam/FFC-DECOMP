#include "ffc/types.h"

extern void func_ov006_021afd28(void);
extern int func_ov006_021a6508(uint32_t a, uint32_t *p);

typedef struct {
    uint8_t a;
    uint8_t pad1;
    uint8_t b;
    uint8_t pad2;
    uint16_t c;
} Glob;

extern Glob data_ov006_021bc78c;

void func_ov006_021ab4b8(void)
{
    uint32_t v;
    func_ov006_021afd28();
    func_ov006_021a6508(0, &v);
    if (v == 0) {
        data_ov006_021bc78c.c = 0;
        data_ov006_021bc78c.a = 0;
        data_ov006_021bc78c.b = 0;
    }
}
