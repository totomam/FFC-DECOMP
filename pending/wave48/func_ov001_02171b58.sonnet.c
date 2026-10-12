#include "ffc/types.h"

extern uint32_t func_ov001_02171ac0(void *self, const uint8_t *text, int32_t len);
extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_ov001_021719e0(void *self, uint32_t x);
extern uint32_t func_ov000_021652a8(int32_t a, int32_t b, int32_t c, const void *d, uint32_t e);
extern uint8_t data_ov001_0218f2e0[];

typedef uint32_t (*chunk_fn)(void *vt, void *sub, const uint8_t *text, int32_t n, int32_t x, int32_t *avail);

#define VT(s) (*(uint8_t **)(s))
#define I32(p, off) (*(int32_t *)((uint8_t *)(p) + (off)))

uint32_t func_ov001_02171b58(void *self, const uint8_t *text, int32_t len)
{
    int32_t consumed = 0;
    int32_t avail = 0;
    int32_t chunk;

    if (self == 0) return consumed;
    if (text == 0) return consumed;
    if (len < 0) return consumed;
    if (I32(self, 0x20) != 0) return consumed;

    if (*(uint32_t *)(VT(self) + 0x198) == 0 || *(uint32_t *)(VT(self) + 0x1a4) == 0) {
        return func_ov001_02171ac0(self, text, len);
    }

    if (len == 0) len = (int32_t)func_02092864(text);
    if (len == 0) return 1;

    avail = I32(self, 8) - I32(self, 0xc);

    do {
        chunk = (len < 0x3f01) ? len : 0x3f01;
        switch ((*(chunk_fn *)(VT(self) + 0x1c0))(VT(self), (uint8_t *)self + 0x194,
                text + consumed, chunk, I32(self, 4) + I32(self, 0xc), &avail)) {
        case 2:
            if (func_ov001_021719e0(self, *(uint32_t *)((uint8_t *)self + 0x14)) == 0) {
                return 0;
            }
            avail = I32(self, 8) - I32(self, 0xc);
            break;
        case 1:
            consumed += chunk;
            I32(self, 0xc) = I32(self, 8) - avail;
            break;
        default:
            func_ov000_021652a8(8, 4, 2, data_ov001_0218f2e0, 0);
            return 0;
        }
    } while (consumed < len);
    return 1;
}
