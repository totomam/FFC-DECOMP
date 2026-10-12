#include "ffc/types.h"

extern uint32_t func_ov006_0219c924(void);
extern uint32_t func_ov006_0219c930(void);
extern void func_0208e9bc(int a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_ov006_0219b090(void);

extern uint8_t data_ov006_021ba0a8[];
extern uint8_t data_ov006_021ba0e0[];
extern uint8_t data_ov006_021ba0c8[];

int func_ov006_0219b100(void)
{
    uint32_t v;
    uint8_t *p;

    if (*(uint32_t *)(data_ov006_021ba0a8 + 0x18) == 0) {
        uint32_t a = func_ov006_0219c924();
        uint32_t b = func_ov006_0219c930();
        func_0208e9bc(0, data_ov006_021ba0e0, 0x70, a, b, 8);
        return 0;
    }

    p = *(uint8_t **)(data_ov006_021ba0a8 + 0x1c);
    v = 0;
    if (p != 0) {
        v = *(uint32_t *)(p + 0x4bc);
    }
    if (v == 0) {
        v = *(uint32_t *)(data_ov006_021ba0a8 + 0x18);
    }
    *(uint32_t *)(data_ov006_021ba0a8 + 0x1c) = v;

    func_ov006_0219b090();

    p = *(uint8_t **)(data_ov006_021ba0a8 + 0x1c);
    data_ov006_021ba0c8[6] = p[0x4b4];
    data_ov006_021ba0c8[4] = 2;
    return 1;
}
