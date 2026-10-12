#include "ffc/types.h"

typedef struct {
    uint32_t unk0;
    uint8_t *ptr;
} DataOv000;

extern DataOv000 data_ov000_0216e214;
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_ov000_0214fbe4(uint32_t);
extern int32_t func_ov000_0214f804(void)
{
    uint32_t a = func_02088978();
    int32_t r = 0;
    uint8_t *p = data_ov000_0216e214.ptr;

    if (p == 0) {
        func_0208898c(a);
        return 1;
    }
    switch (p[0x12de]) {
    case 10:
        func_0208898c(a);
        return 2;
    case 3:
        func_0208898c(a);
        return r;
    default:
        func_0208898c(a);
        return 1;
    case 9:
        if (p[0x12dd] == 1) {
            func_ov000_0214fbe4(10);
            *(uint16_t *)(data_ov000_0216e214.ptr + 0x12da) = 6;
        } else {
            switch (p[0x12df]) {
            case 1:
                r = func_ov000_021507bc();
                break;
            case 2:
                if (func_02087460() != 0) {
                    r = func_021daf84();
                    break;
                }
            default:
                r = 7;
            }
        }
        func_0208898c(a);
        return r;
    }
}
