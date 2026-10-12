typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

extern u32 data_ov000_02170a10[];
extern s32 data_ov000_0217098c;

extern int func_ov000_02165704(void);
extern s32 func_ov000_021654f8(u32 dev, void *buf, u32 size, u32 arg3, void *arg4, u32 *arg5);
extern s32 func_ov000_02164da0(void *buf, s32 len, void *arg2, u32 *arg3);
extern void func_ov000_02165428(u32 dev);
extern u32 func_ov000_0216591c(void);
extern void func_ov000_02164cd4(void);

int func_ov000_02164e1c(void) {
    u8 buf[0x40];
    u32 t;
    u32 hdr[2];
    u32 n = 8;
    volatile u32 flags;
    s32 rc;

    if (data_ov000_02170a10[0] == (u32)-1) {
        data_ov000_0217098c = 1;
        return 1;
    }
    if (func_ov000_02165704() != 0) {
        rc = func_ov000_021654f8(data_ov000_02170a10[0], buf, 0x40, 0, hdr, &n);
        rc = func_ov000_02164da0(buf, rc, hdr, (u32*)&flags);
        if (rc == 0) {
            func_ov000_02165428(data_ov000_02170a10[0]);
            if (flags & 1) {
                data_ov000_0217098c = 2;
                return 2;
            }
            if (flags & 2) {
                data_ov000_0217098c = 3;
                return 3;
            }
            data_ov000_0217098c = 1;
            return 1;
        }
    }
    t = func_ov000_0216591c();
    if (t > data_ov000_02170a10[0x50 / 4] + 2000) {
        if (data_ov000_02170a10[0x54 / 4] == 1) {
            func_ov000_02165428(data_ov000_02170a10[0]);
            data_ov000_0217098c = 1;
            return 1;
        }
        func_ov000_02164cd4();
        data_ov000_02170a10[0x54 / 4]++;
    }
    return 0;
}
