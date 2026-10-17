/* From libntr libntr/libraries/os/src/os_spinLock.c (thumb build): func_02086998 */
typedef unsigned short int u16;
typedef signed long s32;
s32 func_02086980(u16 lockID);
s32 func_02086998(u16 lockID);
s32 func_02086980 (u16 lockID);
asm s32 func_02086998 (u16 lockID)
{
ldr r1, = func_02086980
bx r1
}
