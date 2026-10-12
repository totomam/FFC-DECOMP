typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef int s32;

extern void func_02081b5c(u32 a, u32 b, s32 c);
extern u32 func_ov006_021b570c(u32 a, void *f, void *ctx, u32 c);
extern u8 data_ov006_021b8abc[];
extern u8 *data_ov006_021bc81c;
extern void func_ov006_021b404c(void);

typedef struct {
    u32 w;
    u16 h4;
    u16 h6;
    u8 b8;
    u8 b9;
} Obj;

u32 func_ov006_021b3fd0(u32 p0, u32 p1, u32 p2, u16 p3)
{
    u8 buf[4];
    Obj *o;

    buf[0] = data_ov006_021b8abc[0];
    buf[1] = data_ov006_021b8abc[1];
    buf[2] = data_ov006_021b8abc[2];
    buf[3] = data_ov006_021b8abc[3];

    if (p1 == 1) {
        o = (Obj *)data_ov006_021bc81c;
    } else {
        o = (Obj *)(data_ov006_021bc81c + 0xc);
    }

    if (o->b9 != 0) {
        return 0;
    }

    if (p1 == 1) { func_02081b5c(0x4001050, p2, ((s8 *)buf)[p0]); } else { func_02081b5c(0x4000050, p2, ((s8 *)buf)[p0]); }

    o->w = func_ov006_021b570c(1, (void *)func_ov006_021b404c, o, 200);
    o->h4 = 0;
    o->b8 = p0;
    o->h6 = p3;
    o->b9 = 1;
    return 1;
}
