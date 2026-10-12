#include "ffc/types.h"

extern void *func_ov000_02163634(uint32_t x);
typedef struct { uint32_t pad; uint8_t *ptr; } G;
extern G data_ov000_02170064;

int func_ov000_0215b5a8(void) {
    uint8_t *s = data_ov000_02170064.ptr;
    uint8_t *r;
    if (s == 0) goto fail;
    if (*(uint32_t *)(s + 0x96c) == 0) goto fail;
    if (*(uint32_t *)(s + 0x96c) == 9) goto fail;
    if (*(uint32_t *)(s + 0x96c) == 10) goto fail;
    if (*(uint32_t *)(s + 0x96c) == 11) goto fail;
    if (s[0x35d] == 0) goto fail;
    if (s[0x366] != 0) goto call;
fail:
    return 0xff;
call:
    r = (uint8_t *)func_ov000_02163634(0);
    if (r == 0) return 0xff;
    return r[0x16];
}
