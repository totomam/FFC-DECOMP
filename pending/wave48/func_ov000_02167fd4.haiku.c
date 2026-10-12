#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_ov000_02167f34(void *obj, const char *s);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern uint32_t func_ov000_02167f08(void *obj, int32_t c);
extern const char data_ov000_0216bb7c[];
extern const char data_ov000_0216bb8c[];
extern const char data_ov000_0216bb84[];
extern const char data_ov000_0216bb94[];
extern const char data_ov000_0216bb9c[];
extern const char data_ov000_0216bbdc[];
extern const char data_ov000_0216bbe4[];

uint32_t func_ov000_02167fd4(void *obj, const int8_t *text)
{
    int32_t len;
    int32_t i;
    uint32_t r;
    char buf[8];
    const char *s;

    len = func_02092864((const uint8_t *)text);
    for (i = 0; i < len; i++) {
        int32_t c = text[i];
        if (c == 0x26) {
            r = func_ov000_02167f34(obj, data_ov000_0216bb7c);
        } else {
            if (c == 0x27) {
                s = data_ov000_0216bb8c;
            } else if (c == 0x22) {
                s = data_ov000_0216bb84;
            } else if (c == 0x3c) {
                s = data_ov000_0216bb94;
            } else if (c == 0x3e) {
                s = data_ov000_0216bb9c;
            } else if (c == 0x20) {
                s = data_ov000_0216bbdc;
            } else if (c >= 0 && (uint8_t)c <= 0x7f) {
                r = func_ov000_02167f08(obj, c);
                if (r == 0) {
                    return 0;
                }
                continue;
            } else {
                func_02091b10(buf, (uint32_t)data_ov000_0216bbe4, (uint8_t)c);
                buf[6] = 0;
                s = buf;
            }
            r = func_ov000_02167f34(obj, s);
        }
        if (r == 0) {
            return 0;
        }
    }
    return 1;
}
