/* From libntr libntr/libraries/snd/src/snd_work.c (thumb build): func_0208a3b4 */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile s16 vs16;
void func_020878ac(const void * startAddr, u32 nBytes);
struct SNDSharedWork;
typedef struct SNDSharedWork {
vu32 finishCommandTag;
vu32 playerStatus;
vu16 channelStatus;
vu16 captureStatus;
vu32 padding[5];
struct {
vs16 variable[16 ];
vu32 tickCounter;
} player[16 ];
vs16 globalVariable[16 ];
} SNDSharedWork;
void func_0208a3b4(SNDSharedWork * work);
void func_0208a3b4 (SNDSharedWork * work)
{
int playerNo, variableNo;
work->playerStatus = 0;
work->channelStatus = 0;
work->captureStatus = 0;
work->finishCommandTag = 0;
for (playerNo = 0; playerNo < 16 ; playerNo++) {
work->player[playerNo].tickCounter = 0;
for (variableNo = 0; variableNo < 16 ; variableNo++) {
work->player[playerNo].variable[variableNo] = -1 ;
}
}
for (variableNo = 0; variableNo < 16 ; variableNo++) {
work->globalVariable[variableNo] = -1 ;
}
func_020878ac(work, sizeof(SNDSharedWork));
}
