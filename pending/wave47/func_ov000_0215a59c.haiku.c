#include "ffc/types.h"

typedef struct Ctx {
    void *p0;          /* 0x00 */
    uint32_t state;    /* 0x04 */
    uint8_t pad[0x30 - 8];
    uint32_t timer;    /* 0x30 */
    uint32_t tlo;      /* 0x34 */
    uint32_t thi;      /* 0x38 */
} Ctx;

extern Ctx *data_ov000_02170060;
extern uint32_t func_ov000_02159000(Ctx *s);
extern void func_ov000_0215a93c(uint32_t x);
extern void func_ov001_021758e8(void *p);
extern uint64_t func_020882cc(void);
extern void func_ov000_0215a64c(uint32_t a, uint32_t b);

void func_ov000_0215a59c(void)
{
    if (data_ov000_02170060 == 0) {
        return;
    }
    if (func_ov000_02159000(data_ov000_02170060) != 0) {
        return;
    }
    switch (data_ov000_02170060->state) {
    case 1:
        func_ov000_0215a93c(data_ov000_02170060->state);
        return;
    case 2:
    case 3:
    case 4:
        if (data_ov000_02170060->p0 != 0 && ((Ctx *)data_ov000_02170060->p0)->p0 != 0) {
            func_ov001_021758e8(data_ov000_02170060->p0);
        }
        break;
    case 5:
    case 0:
    default:
        return;
    }

    if (data_ov000_02170060->timer == 0) {
        return;
    }
    {
        uint64_t now = func_020882cc();
        uint64_t diff = now - (((uint64_t)data_ov000_02170060->thi << 32) | data_ov000_02170060->tlo);
        if ((diff << 6) / 0x82eaULL <= 60000) {
            return;
        }
    }
    func_ov000_0215a64c(6, 0xffff1172);
    data_ov000_02170060->timer = 0;
}
