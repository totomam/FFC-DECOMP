#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t fn;
    uint32_t arg;
    uint32_t pad[13];
    uint32_t w40;
} G;

extern void func_02087058(uint32_t *p);
extern G data_02141400;
extern uint32_t data_02141450[];

void func_02085b60(uint32_t a, uint32_t b)
{
    uint32_t r2 = 7;
    uint16_t r0 = (uint16_t)(a & 0xff);

    if (b == 0 && r0 == 0) {
        r2 = 0;
    } else if (b == 1) {
        r2 = 3;
    } else {
        switch (r0) {
        case 2: r2 = 2; break;
        case 3: r2 = 4; break;
        case 4: r2 = 1; break;
        }
    }

    data_02141400.w0 = 0;
    data_02141400.w40 = 0;
    if (data_02141400.fn != 0) {
        void (*fn)(uint32_t, uint32_t) = (void (*)(uint32_t, uint32_t))data_02141400.fn;
        data_02141400.fn = 0;
        fn(r2, data_02141400.arg);
    }
    func_02087058(data_02141450);
}
