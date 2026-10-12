#include "ffc/types.h"
typedef struct { uint16_t v[0x15]; } A;
typedef struct { uint8_t v[0x14]; } B;
typedef struct { uint32_t v[4]; } C;
void func_ov011_021bd2c8(uint8_t *dst, uint8_t *src)
{
    *(A *)(dst + 0x10) = *(A *)(src + 4);
    *(uint32_t *)(dst + 0x3c) = *(uint32_t *)(src + 0x30);
    *(B *)(dst + 0x40) = *(B *)(src + 0x34);
    *(C *)(dst + 0x54) = *(C *)(src + 0x48);
}
