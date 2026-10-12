#include "ffc/types.h"

typedef struct {
    uint32_t unk0;
    uint32_t flags;
    uint8_t *buf;
} G;

extern G data_021418a4;
extern uint64_t data_021418b0;
extern uint16_t GetCRC16(uint32_t init, void *data, uint32_t len);
extern void func_02084ca4(void *p, uint32_t a, uint32_t len);
extern void func_02084b2c(void *p, uint32_t a, uint32_t len);

int func_02088d6c(void)
{
    uint32_t n;

    if (!(data_021418a4.flags & 1)) {
        return -1;
    }
    n = 3;
    *(uint16_t *)(data_021418a4.buf + 0xa) = *(uint16_t *)0x02ffe010;
    *(uint64_t *)data_021418a4.buf = *(uint64_t *)0x02ffe230;
    data_021418a4.buf[9] = n;
    data_021418b0 = *(uint64_t *)data_021418a4.buf;
    *(uint16_t *)(data_021418a4.buf + 0x10) = 0;
    n = n << 8;
    *(uint16_t *)(data_021418a4.buf + 0x10) = GetCRC16(0xffff, data_021418a4.buf, n);
    func_02084ca4(data_021418a4.buf, 0x02ffe010u << 0x15, n);
    func_02084b2c(data_021418a4.buf, 0, n);
    data_021418a4.flags = 0;
    return 0;
}
