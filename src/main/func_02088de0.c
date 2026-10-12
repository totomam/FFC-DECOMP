#include "ffc/types.h"

typedef struct {
    uint8_t a[9];
    uint8_t flags;
    uint8_t pad[6];
    uint16_t crc;
} Buf;

typedef struct {
    uint32_t f0;
    uint32_t f4;
    Buf *f8;
} Ctx;

extern int func_02088e78(void);
extern void func_02084ca4(uint32_t a, Buf *b, uint32_t c);
extern uint16_t GetCRC16(uint32_t init, Buf *b, uint32_t len);
extern void func_02084b2c(Buf *b, uint32_t a, uint32_t len);
extern void func_02088e54(void);
extern Ctx data_021418a4;

int func_02088de0(void) {
    Buf *b;
    uint16_t old;
    uint16_t crc;

    if (!func_02088e78()) {
        return -1;
    }
    if (data_021418a4.f8 == 0) {
        return -1;
    }
    func_02084ca4(0x02000000, data_021418a4.f8, 0x300);
    b = data_021418a4.f8;
    old = b->crc;
    b->crc = 0;
    crc = GetCRC16(0xffff, data_021418a4.f8, 0x300);
    data_021418a4.f8->crc = crc;
    b = data_021418a4.f8;
    if (old != b->crc) {
        func_02084b2c(b, 0, 0x300);
        func_02088e54();
        return 0;
    }
    b->flags &= 0xfe;
    data_021418a4.f4 = 1;
    return 0;
}
