/* From libntr libntr/libraries/snd/src/snd_bank.c (thumb build): func_0208a564 */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed char s8;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
typedef struct CPContext {
u64 div_numer;
u64 div_denom;
u64 sqrt;
u16 div_mode;
u16 sqrt_mode;
} CPContext;
typedef struct OSContext {
u32 cpsr;
u32 r[13];
u32 sp;
u32 lr;
u32 pc_plus4;
u32 sp_svc;
CPContext cp_context;
} OSContext;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct _OSMutexLink OSMutexLink;
typedef struct OSMutex OSMutex;
typedef struct OSiAlarm OSAlarm;
struct _OSThreadQueue {
OSThread * head;
OSThread * tail;
};
struct _OSThreadLink {
OSThread * prev;
OSThread * next;
};
struct _OSMutexQueue {
OSMutex * head;
OSMutex * tail;
};
struct _OSMutexLink {
OSMutex * next;
OSMutex * prev;
};
typedef enum {
OS_THREAD_STATE_WAITING = 0,
OS_THREAD_STATE_READY = 1,
OS_THREAD_STATE_TERMINATED = 2
} OSThreadState;
typedef void (*OSThreadDestructor) (void *);
struct _OSThread {
OSContext context;
OSThreadState state;
OSThread * next;
u32 id;
u32 priority;
void * profiler;
OSThreadQueue * queue;
OSThreadLink link;
OSMutex * mutex;
OSMutexQueue mutexQueue;
u32 stackTop;
u32 stackBottom;
u32 stackWarningOffset;
OSThreadQueue joinQueue;
void * specific[3 ];
OSAlarm * alarmForSleep;
OSThreadDestructor destructor;
void * userParameter;
int systemErrno;
};
extern void OSi_EnterDmaCallback(u32 dmaNo, void (*callback)(void *), void *arg);
extern void OSi_EnterNDmaCallback(u32 dmaNo, void (*callback)(void *), void *arg);
extern void OSi_EnterTimerCallback(u32 timerNo, void (*callback)(void *), void *arg);
struct OSMutex {
OSThreadQueue queue;
OSThread * thread;
s32 count;
OSMutexLink link;
};
typedef u64 OSTick;
typedef void (*OSAlarmHandler) (void *);
struct OSiAlarm {
OSAlarmHandler handler;
void * arg;
u32 tag;
OSTick fire;
OSAlarm * prev;
OSAlarm * next;
OSTick period;
OSTick start;
};
typedef enum {
SND_DUTY_1_8,
SND_DUTY_2_8,
SND_DUTY_3_8,
SND_DUTY_4_8,
SND_DUTY_5_8,
SND_DUTY_6_8,
SND_DUTY_7_8
} SNDDuty;
struct SNDExChannel;
typedef enum SNDExChannelCallbackStatus {
SND_EX_CHANNEL_CALLBACK_DROP,
SND_EX_CHANNEL_CALLBACK_FINISH
} SNDExChannelCallbackStatus;
typedef void (*SNDExChannelCallback) (struct SNDExChannel * ch_p, SNDExChannelCallbackStatus status, void * userData);
typedef struct SNDWaveParam {
u8 format;
u8 loopflag;
u16 rate;
u16 timer;
u16 loopstart;
u32 looplen;
} SNDWaveParam;
typedef struct SNDLfoParam {
u8 target;
u8 speed;
u8 depth;
u8 range;
u16 delay;
} SNDLfoParam;
typedef struct SNDLfo {
struct SNDLfoParam param;
u16 delay_counter;
u16 counter;
} SNDLfo;
typedef struct SNDExChannel {
u8 myNo;
u8 type;
u8 env_status;
u8 active_flag : 1;
u8 start_flag : 1;
u8 auto_sweep : 1;
u8 sync_flag : 5;
u8 pan_range;
u8 original_key;
s16 user_decay2;
u8 key;
u8 velocity;
s8 init_pan;
s8 user_pan;
s16 user_decay;
s16 user_pitch;
s32 env_decay;
s32 sweep_counter;
s32 sweep_length;
u8 attack;
u8 sustain;
u16 decay;
u16 release;
u8 prio;
u8 pan;
u16 volume;
u16 timer;
struct SNDLfo lfo;
s16 sweep_pitch;
s32 length;
struct SNDWaveParam wave;
union {
const void * data;
SNDDuty duty;
};
SNDExChannelCallback callback;
void * callback_data;
struct SNDExChannel * nextLink;
} SNDExChannel;
struct SNDBankData;
typedef struct SNDPlayer {
u8 active_flag :1;
u8 prepared_flag :1;
u8 pause_flag :1;
u8 pad_ :5;
u8 myNo;
u8 pad2_;
u8 pad3_;
u8 prio;
u8 volume;
s16 extFader;
u8 tracks[16 ];
u16 tempo;
u16 tempo_ratio;
u16 tempo_counter;
u16 pad__;
struct SNDBankData * bank;
} SNDPlayer;
typedef struct SNDTrack {
u8 active_flag :1;
u8 note_wait :1;
u8 mute_flag :1;
u8 tie_flag :1;
u8 note_finish_wait :1;
u8 porta_flag :1;
u8 cmp_flag :1;
u8 channel_mask_flag :1;
u8 pan_range;
u16 prgNo;
u8 volume;
u8 volume2;
s8 pitch_bend;
u8 bend_range;
s8 pan;
s8 ext_pan;
s16 extFader;
s16 ext_pitch;
u8 attack;
u8 decay;
u8 sustain;
u8 release;
u8 prio;
s8 transpose;
u8 porta_key;
u8 porta_time;
s16 sweep_pitch;
struct SNDLfoParam mod;
u16 channel_mask;
s32 wait;
const u8 * base;
const u8 * cur;
const u8 * call_stack[3 ];
u8 loop_count[3 ];
u8 call_stack_depth;
struct SNDExChannel * channel_list;
} SNDTrack;
struct SNDBankData;
void SND_StartSeq(int playerNo, const void *base, u32 offset, const struct SNDBankData *bank);
void SND_PrepareSeq(int playerNo, const void *base, u32 offset, const struct SNDBankData *bank);
typedef struct SNDBinaryFileHeader {
char signature[4];
u16 byteOrder;
u16 version;
u32 fileSize;
u16 headerSize;
u16 dataBlocks;
} SNDBinaryFileHeader;
typedef struct SNDBinaryBlockHeader {
u32 kind;
u32 size;
} SNDBinaryBlockHeader;
struct SNDWaveArc;
struct SNDExChannel;
typedef enum SNDInstType {
SND_INST_INVALID = 0,
SND_INST_PCM = 0x01,
SND_INST_PSG,
SND_INST_NOISE,
SND_INST_DIRECTPCM,
SND_INST_NULL,
SND_INST_DRUM_SET = 0x10,
SND_INST_KEY_SPLIT
} SNDInstType;
typedef struct SNDWaveArcLink {
struct SNDWaveArc * waveArc;
struct SNDWaveArcLink * next;
} SNDWaveArcLink;
typedef struct SNDWaveArc {
struct SNDBinaryFileHeader fileHeader;
struct SNDBinaryBlockHeader blockHeader;
struct SNDWaveArcLink * topLink;
u32 reserved[7];
u32 waveCount;
u32 waveOffset[0];
} SNDWaveArc;
typedef struct SNDWaveData {
struct SNDWaveParam param;
u8 samples[0];
} SNDWaveData;
typedef struct SNDBankData {
struct SNDBinaryFileHeader fileHeader;
struct SNDBinaryBlockHeader blockHeader;
struct SNDWaveArcLink waveArcLink[4 ];
u32 instCount;
u32 instOffset[0];
} SNDBankData;
typedef struct SNDInstParam {
u16 wave[2];
u8 original_key;
u8 attack;
u8 decay;
u8 sustain;
u8 release;
u8 pan;
} SNDInstParam;
typedef struct SNDInstData {
u8 type;
u8 padding_;
struct SNDInstParam param;
} SNDInstData;
typedef struct SNDKeySplit {
u8 key[8 ];
struct SNDInstData instOffset[0];
} SNDKeySplit;
typedef struct SNDDrumSet {
u8 min;
u8 max;
struct SNDInstData instOffset[0];
} SNDDrumSet;
typedef struct SNDInstPos {
u32 prgNo;
u32 index;
} SNDInstPos;
void SND_AssignWaveArc(struct SNDBankData * bank, int index, struct SNDWaveArc * waveArc);
void SND_DestroyBank(struct SNDBankData * bank);
void SND_DestroyWaveArc(struct SNDWaveArc * waveArc);
BOOL SND_ReadInstData(const struct SNDBankData * bank, int prgNo, int key, struct SNDInstData * inst);
BOOL SND_WriteInstData(struct SNDBankData * bank, int prgNo, int key, const struct SNDInstData * inst);
struct SNDInstPos SND_GetFirstInstDataPos(const struct SNDBankData * bank);
BOOL func_0208a564(const struct SNDBankData * bank, struct SNDInstData * inst, struct SNDInstPos * pos);
u32 SND_GetWaveDataCount(const struct SNDWaveArc * waveArc);
void SND_SetWaveDataAddress(struct SNDWaveArc * waveArc, int index, const SNDWaveData * address);
const SNDWaveData * SND_GetWaveDataAddress(const struct SNDWaveArc * waveArc, int index);
struct SNDBankData;
typedef struct SNDMidiChannel {
struct SNDExChannel * chp;
u8 key;
u8 pad1;
u16 pad2;
} SNDMidiChannel;
typedef struct SNDMidiTrack {
struct SNDMidiChannel channels[16 ];
SNDLfoParam mod;
s16 sweep_pitch;
u16 prgNo;
s8 pitchbend;
u8 porta_time;
u8 volume;
s8 pan;
u8 expression;
s8 transpose;
u8 prio;
u8 bendrange;
u8 porta_flag;
u8 porta_key;
u8 attack;
u8 decay;
u8 sustain;
u8 release;
u8 rpnLSB;
u8 rpnMSB;
u8 nrpnLSB;
u8 nrpnMSB;
u8 rpn_flag;
u8 pad1;
u16 pad2;
} SNDMidiTrack;
typedef struct SNDMidiPlayer {
const struct SNDBankData * bank;
SNDMidiTrack track[16 ];
u8 main_volume;
u8 prio;
u16 pad;
} SNDMidiPlayer;
typedef u32 FATFSResult;
typedef u32 FATFSCommandID;
typedef struct FATFSCommandHeader {
FATFSCommandID command;
FATFSResult result;
u32 flags;
struct FATFSCommandHeader *next;
} FATFSCommandHeader;
typedef struct FATFSRequestBuffer {
union {
FATFSCommandHeader header;
u8 buffer[2048 ];
};
OSThread *thread;
void (*callback)(struct FATFSRequestBuffer *);
void *userdata;
struct FATFSRequestBuffer *next;
u8 padding[16];
} FATFSRequestBuffer;
extern void FATFSi_SetRequestBuffer(FATFSRequestBuffer *buffer,
void (*callback)(FATFSRequestBuffer *),
void *userdata);
extern void DSP_SetPipeCallback(int port, void (*callback)(void *, int, int),
void *userdata);
void SND_AssignWaveArc (SNDBankData * bank, int index, SNDWaveArc * waveArc);
void SND_DestroyBank (SNDBankData * bank);
void SND_DestroyWaveArc (SNDWaveArc * waveArc);
BOOL SND_ReadInstData (const SNDBankData * bank, int prgNo, int key, SNDInstData * inst);
BOOL SND_WriteInstData (SNDBankData * bank, int prgNo, int key, const struct SNDInstData * inst);
SNDInstPos SND_GetFirstInstDataPos (const SNDBankData * bank);
BOOL func_0208a564 (const SNDBankData * bank, SNDInstData * inst, SNDInstPos * pos)
{
((void) 0) ;
((void) 0) ;
((void) 0) ;
for (; pos->prgNo < bank->instCount; pos->prgNo++, pos->index = 0) {
u32 instOffset = bank->instOffset[pos->prgNo];
inst->type = (u8)(instOffset & 0xff);
instOffset >>= 8;
switch (inst->type) {
case SND_INST_PCM:
case SND_INST_PSG:
case SND_INST_NOISE:
case SND_INST_DIRECTPCM:
case SND_INST_NULL:
{
const SNDInstParam * param = (const SNDInstParam *)((u8 *)bank + instOffset);
inst->param = *param;
pos->prgNo++;
return 1 ;
}
case SND_INST_DRUM_SET:
{
const SNDDrumSet * drumSet = (const SNDDrumSet *)((u8 *)bank + instOffset);
for (; pos->index < drumSet->max - drumSet->min + 1; pos->index++) {
*inst = drumSet->instOffset[pos->index];
pos->index++;
return 1 ;
}
break;
}
case SND_INST_KEY_SPLIT:
{
const SNDKeySplit * keySplit = (const SNDKeySplit *)((u8 *)bank + instOffset);
for (; pos->index < 8 ; pos->index++) {
if (keySplit->key[pos->index] == 0)
break;
*inst = keySplit->instOffset[pos->index];
pos->index++;
return 1 ;
}
break;
}
default:
break;
}
}
return 0 ;
}
u32 SND_GetWaveDataCount (const struct SNDWaveArc * waveArc);
void SND_SetWaveDataAddress (SNDWaveArc * waveArc, int index, const SNDWaveData * address);
const SNDWaveData * SND_GetWaveDataAddress (const SNDWaveArc * waveArc, int index);
