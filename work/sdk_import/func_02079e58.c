/* From libntr libntrsystem/libraries/snd/src/player.c (thumb build): func_02079e58 */
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
void func_0207c908(NNSSndFader * fader);
void func_0207c914(NNSSndFader * fader, int target, int frame);
struct NNSSndSeqPlayer;
struct NNSSndPlayer;
struct NNSSndPlayerHeap;
typedef enum NNSSndPlayerSeqType {
NNS_SND_PLAYER_SEQ_TYPE_INVALID,
NNS_SND_PLAYER_SEQ_TYPE_SEQ,
NNS_SND_PLAYER_SEQ_TYPE_SEQARC
} NNSSndPlayerSeqType;
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
typedef struct NNSSndPlayerHeap {
NNSFndLink link;
NNSSndHeapHandle handle;
NNSSndSeqPlayer * player;
int playerNo;
} NNSSndPlayerHeap;
void func_02079e58(NNSSndSeqPlayer * seqPlayer);
void func_02079e58 (NNSSndSeqPlayer * seqPlayer)
{
((void) 0) ;
seqPlayer->pauseFlag = 0 ;
seqPlayer->startFlag = 0 ;
seqPlayer->prepareFlag = 0 ;
seqPlayer->seqType = NNS_SND_PLAYER_SEQ_TYPE_INVALID;
seqPlayer->volume = 0;
seqPlayer->initVolume = 127;
seqPlayer->extVolume = 127;
func_0207c908(&seqPlayer->fader);
func_0207c914(&seqPlayer->fader, 127 << 8 , 1);
}
