/* From libntr libntr/libraries/os/src/os_vramExclusive.c (thumb build): func_02088c50 */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
typedef u32 OSIntrMode;
extern OSIntrMode func_02088978(void);
extern OSIntrMode func_0208898c(OSIntrMode state);
BOOL func_02088c50(u16 bank, u16 lockId);
extern u32 data_0214188c;
extern u16 data_02141890[9 ];
asm u32 func_02088c28 (u32 bitmap);
BOOL func_02088c50 (u16 bank, u16 lockId)
{
u32 workMap;
s32 zeroBits;
OSIntrMode enabled = func_02088978();
workMap = (u32)(bank & data_0214188c);
while (1 ) {
zeroBits = (s32)(31 - func_02088c28(workMap));
if (zeroBits < 0) {
break;
}
workMap &= ~(0x00000001 << zeroBits);
if (data_02141890[zeroBits] != lockId) {
(void)func_0208898c(enabled);
return 0 ;
}
}
workMap = (u32)(bank & 0x01ff );
while (1 ) {
zeroBits = (s32)(31 - func_02088c28(workMap));
if (zeroBits < 0) {
break;
}
workMap &= ~(0x00000001 << zeroBits);
data_02141890[zeroBits] = lockId;
data_0214188c |= (0x00000001 << zeroBits);
}
(void)func_0208898c(enabled);
return 1 ;
}
