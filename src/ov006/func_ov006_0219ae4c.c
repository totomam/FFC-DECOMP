/* From libntr libntr/libraries/mb/src/mb_gameinfo.c (thumb build): func_ov006_0219ae4c */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
void func_020849ac(u16 data, void * destp, u32 size);
void func_020849c4(const void * srcp, void * destp, u32 size);
void func_02084a0c(u32 data, void * destp, u32 size);
static inline void MI_CpuFill16 (void * dest, u16 data, u32 size)
{
((void) 0) ;
((void) 0) ;
func_020849ac(data, dest, size);
}
static inline void MI_CpuCopy16 (const void * src, void * dest, u32 size)
{
((void) 0) ;
((void) 0) ;
((void) 0) ;
func_020849c4(src, dest, size);
}
static inline void MI_CpuClear16 (void * dest, u32 size)
{
MI_CpuFill16(dest, 0, size);
}
static inline void MI_CpuFillFast (void * dest, u32 data, u32 size)
{
((void) 0) ;
((void) 0) ;
func_02084a0c(data, dest, size);
}
static inline void MI_CpuClearFast (void * dest, u32 size)
{
MI_CpuFillFast(dest, 0, size);
}
typedef struct {
const char * romFilePathp;
u16 * gameNamep;
u16 * gameIntroductionp;
const char * iconCharPathp;
const char * iconPalettePathp;
u32 ggid;
u8 maxPlayerNum;
u8 pad[3];
u8 userParam[0x20 ];
} MBGameRegistry;
typedef struct {
u16 palette[16 ];
u16 data[512 / 2];
} MBIconInfo;
typedef struct {
u8 favoriteColor : 4;
u8 playerNo : 4;
u8 nameLength;
u16 name[10 ];
} MBUserInfo;
typedef struct MBGameInfoFixed {
MBIconInfo icon;
MBUserInfo parent;
u8 maxPlayerNum;
u8 pad[1];
u16 gameName[48 ];
u16 gameIntroduction[96 ];
} MBGameInfoFixed, MbGameInfoFixed;
typedef struct MBGameInfoVolatile {
u8 nowPlayerNum;
u8 pad[1];
u16 nowPlayerFlag;
u16 changePlayerFlag;
MBUserInfo member[15 ];
u8 userVolatData[8 ];
} MBGameInfoVolatile, MbGameInfoVolatile;
typedef enum MbBeaconDataAttr {
MB_BEACON_DATA_ATTR_FIXED_NORMAL = 0,
MB_BEACON_DATA_ATTR_FIXED_NO_ICON,
MB_BEACON_DATA_ATTR_VOLAT
} MBBeaconDataAttr, MbBeaconDataAttr;
typedef struct MBGameInfo {
MBGameInfoFixed fixed;
MBGameInfoVolatile volat;
u16 broadcastedPlayerFlag;
u8 dataAttr;
u8 seqNoFixed;
u8 seqNoVolat;
u8 fileNo;
u8 pad[2];
u32 ggid;
struct MBGameInfo * nextp;
} MBGameInfo, MbGameInfo;
void func_ov006_0219ae4c(MBGameInfo * gameInfop, const MBGameRegistry * mbGameRegp, const MBUserInfo * parent);
BOOL func_ov006_0219af04(const char * filePathp, MBIconInfo * iconp, BOOL char_flag);
int func_ov006_0219afcc(u16 * str);
void func_ov006_0219ae4c (MBGameInfo * gameInfop, const MBGameRegistry * mbGameRegp, const MBUserInfo * parent)
{
BOOL icon_disable;
MI_CpuClear16(gameInfop, sizeof(MBGameInfo));
gameInfop->dataAttr = MB_BEACON_DATA_ATTR_FIXED_NORMAL;
icon_disable = !func_ov006_0219af04(mbGameRegp->iconCharPathp, &gameInfop->fixed.icon, 1 );
icon_disable |= !func_ov006_0219af04(mbGameRegp->iconPalettePathp, &gameInfop->fixed.icon, 0 );
if (icon_disable) {
gameInfop->dataAttr = MB_BEACON_DATA_ATTR_FIXED_NO_ICON;
MI_CpuClearFast(&gameInfop->fixed.icon, sizeof(MBIconInfo));
}
gameInfop->ggid = mbGameRegp->ggid;
if (parent != 0L ) {
MI_CpuCopy16(parent, &gameInfop->fixed.parent, sizeof(MBUserInfo));
}
gameInfop->fixed.maxPlayerNum = mbGameRegp->maxPlayerNum;
{
int len;
len = func_ov006_0219afcc(mbGameRegp->gameNamep) << 1;
MI_CpuCopy16 ((u8 *)mbGameRegp->gameNamep, gameInfop->fixed.gameName, (u16)len);
len = 96 * 2;
MI_CpuCopy16 ((u8 *)mbGameRegp->gameIntroductionp,
gameInfop->fixed.gameIntroduction, (u16)len);
}
gameInfop->volat.nowPlayerNum = 1;
gameInfop->volat.nowPlayerFlag = 0x0001;
gameInfop->broadcastedPlayerFlag = 0x0001;
}
BOOL func_ov006_0219af04 (const char * filePathp, MBIconInfo * iconp, BOOL char_flag);
int func_ov006_0219afcc (u16 * str);
