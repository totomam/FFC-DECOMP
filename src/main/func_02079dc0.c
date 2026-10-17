/* From libntr libntrsystem/libraries/snd/src/player.c (thumb build): func_02079dc0 */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef int BOOL;
typedef struct {
void * prevObject;
void * nextObject;
} NNSFndLink;
typedef struct {
void * headObject;
void * tailObject;
u16 numObjects;
u16 offset;
} NNSFndList;
struct NNSSndHeap;
typedef struct NNSSndHeap * NNSSndHeapHandle;
typedef struct NNSSndFader {
int origin;
int target;
int counter;
int frame;
} NNSSndFader;
void func_0207c914(NNSSndFader * fader, int target, int frame);
struct NNSSndSeqPlayer;
struct NNSSndPlayer;
struct NNSSndPlayerHeap;
enum NNSSndSeqPlayerStatus {
NNS_SND_SEQ_PLAYER_STATUS_STOP,
NNS_SND_SEQ_PLAYER_STATUS_PLAY,
NNS_SND_SEQ_PLAYER_STATUS_FADEOUT
};
typedef struct NNSSndHandle {
struct NNSSndSeqPlayer * player;
} NNSSndHandle;
typedef struct NNSSndSeqPlayer {
struct NNSSndHandle * handle;
struct NNSSndPlayer * player;
struct NNSSndPlayerHeap * heap;
NNSFndLink playerLink;
NNSFndLink prioLink;
NNSSndFader fader;
u8 status;
u8 startFlag;
u8 pauseFlag;
u8 prepareFlag;
u32 commandTag;
u16 seqType;
u16 pad2;
u16 seqNo;
u16 seqArcIndex;
u8 playerNo;
u8 prio;
s16 volume;
u8 initVolume;
u8 extVolume;
u16 pad3_;
} NNSSndSeqPlayer;
typedef struct NNSSndPlayer {
NNSFndList playerList;
NNSFndList heapList;
u32 playableSeqCount;
u32 allocChBitFlag;
u8 volume;
u8 pad_;
u16 pad2_;
} NNSSndPlayer;
inline BOOL NNS_SndHandleIsValid (const struct NNSSndHandle * handle)
{
((void) 0) ;
return handle->player != ((void *)0) ;
}
void func_02079dc0(NNSSndSeqPlayer * seqPlayer, int fadeFrame);
typedef struct NNSSndPlayerHeap {
NNSFndLink link;
NNSSndHeapHandle handle;
NNSSndSeqPlayer * player;
int playerNo;
} NNSSndPlayerHeap;
void func_02079f0c(NNSSndSeqPlayer * seqPlayer);
void func_0207a014(NNSSndSeqPlayer * seqPlayer, int priority);
void func_02079dc0 (NNSSndSeqPlayer * seqPlayer, int fadeFrame)
{
if (seqPlayer == ((void *)0) ) return;
if (seqPlayer->status == NNS_SND_SEQ_PLAYER_STATUS_STOP) return;
if (fadeFrame == 0) {
func_02079f0c(seqPlayer);
return;
}
func_0207c914(&seqPlayer->fader, 0, fadeFrame);
func_0207a014(seqPlayer, 0);
seqPlayer->status = NNS_SND_SEQ_PLAYER_STATUS_FADEOUT;
}
void func_02079f0c (NNSSndSeqPlayer * seqPlayer);
void func_0207a014 (NNSSndSeqPlayer * seqPlayer, int priority);
