#include "ffc/types.h"
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern u8 *data_ov006_021bc7e4;
extern void func_02084b2c(void *dst, int val, int size);
extern u32 func_02084118(void *dst, void *src, u32 size);
extern void *func_ov006_021b49e4(u32 a, u32 b);
extern void func_ov000_02158744(void *base, void *arr, void *x);
extern void func_ov006_021b49fc(void *p);

void func_ov006_021b0414(int a)
{
    int arr[4];
    void *out;
    u32 bit;
    u8 mode;
    int set;
    int i;
    u8 *cell;

    bit = 1u << a;
    set = 0;
    cell = data_ov006_021bc7e4 + (a << 8);
    mode = cell[0xe7];
    func_02084b2c(arr, 0, 16);
    arr[a] = 1;
    if (a <= 2) {
        if (data_ov006_021bc7e4[0xef] & bit) {
            set = 1;
        }
        if (mode == 0xff && set) {
            data_ov006_021bc7e4[0xef] &= (u8)~bit;
            data_ov006_021bc7e4[0x1ef] &= (u8)~bit;
            arr[1] = 1;
            arr[0] = 1;
        } else if (mode != 0xff && !set) {
            data_ov006_021bc7e4[0xef] |= (u8)bit;
            data_ov006_021bc7e4[0x1ef] |= (u8)bit;
            arr[1] = 1;
            arr[0] = 1;
        }
    }
    for (i = 0; i < 4; i++) {
        if (arr[i] != 0) {
            u32 r = func_02084118(data_ov006_021bc7e4 + 0x4f8,
                                  data_ov006_021bc7e4 + (i << 8), 0xfe);
            *(u16 *)(data_ov006_021bc7e4 + (i << 8) + 0xfe) = (u16)r;
        }
    }
    out = func_ov006_021b49e4(0x100, 0x20);
    func_ov000_02158744(data_ov006_021bc7e4, arr, out);
    func_ov006_021b49fc(&out);
}
