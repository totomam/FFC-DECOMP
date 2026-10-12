#include "ffc/types.h"

extern uint32_t func_020889dc(void);
extern void func_02088964(uint16_t value);
extern uint32_t func_02087460(void);
extern uint32_t func_021d8f08(void);
extern void func_021d8f14(void);
extern void func_020867dc(uint32_t value);
extern void func_02088f88(void);

typedef struct {
    void *arg;
    void (*cb)(void *);
    uint32_t flag;
} FfcData;

extern FfcData data_021418b8;

void func_02088f30(void)
{
    if (data_021418b8.cb != 0) {
        void (*cb)(void *) = data_021418b8.cb;
        data_021418b8.cb = 0;
        cb(data_021418b8.arg);
    }
    if (data_021418b8.flag == 0) {
        data_021418b8.flag = 1;
        if (func_020889dc() != 0x12) {
            volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
            uint16_t old = *ime;
            *ime = 1;
            func_02088964(old);
        }
        if (func_02087460() != 0) {
            if (func_021d8f08() != 0) {
                func_021d8f14();
            }
        }
        func_020867dc(0x20);
    }
    func_02088f88();
}
