/* From libntr libntrsystem/libraries/snd/src/sndarc_stream.c (thumb build): func_0207b914 */
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
typedef struct {
void * prevObject;
void * nextObject;
} NNSFndLink;
typedef enum FSResult {
FS_RESULT_SUCCESS = 0,
FS_RESULT_FAILURE,
FS_RESULT_BUSY,
FS_RESULT_CANCELED,
FS_RESULT_CANCELLED = FS_RESULT_CANCELED,
FS_RESULT_UNSUPPORTED,
FS_RESULT_ERROR,
FS_RESULT_INVALID_PARAMETER,
FS_RESULT_NO_MORE_RESOURCE,
FS_RESULT_ALREADY_DONE,
FS_RESULT_PERMISSION_DENIED,
FS_RESULT_MEDIA_FATAL,
FS_RESULT_NO_ENTRY,
FS_RESULT_MEDIA_NOTHING,
FS_RESULT_MEDIA_UNKNOWN,
FS_RESULT_BAD_FORMAT,
FS_RESULT_MAX,
FS_RESULT_PROC_ASYNC = 256,
FS_RESULT_PROC_DEFAULT,
FS_RESULT_PROC_UNKNOWN
} FSResult;
typedef enum FSSeekFileMode {
FS_SEEK_SET,
FS_SEEK_CUR,
FS_SEEK_END
} FSSeekFileMode;
typedef u32 FSCommandType;
struct FSArchive;
struct FSFile;
typedef struct FSDateTime {
u32 year;
u32 month;
u32 day;
u32 hour;
u32 minute;
u32 second;
} FSDateTime;
typedef struct FSDirectoryEntryInfo {
char shortname[16 ];
u32 shortname_length;
char longname[260 ];
u32 longname_length;
u32 attributes;
FSDateTime atime;
FSDateTime mtime;
FSDateTime ctime;
u32 filesize;
u32 id;
} FSDirectoryEntryInfo;
typedef struct FSPathInfo {
u32 attributes;
FSDateTime ctime;
FSDateTime mtime;
FSDateTime atime;
u32 filesize;
u32 id;
} FSPathInfo;
typedef struct FSArchiveResource {
u64 totalSize;
u64 availableSize;
u32 maxFileHandles;
u32 currentFileHandles;
u32 maxDirectoryHandles;
u32 currentDirectoryHandles;
u32 bytesPerSector;
u32 sectorsPerCluster;
u32 totalClusters;
u32 availableClusters;
} FSArchiveResource;
typedef struct FSDirPos {
struct FSArchive *arc;
u16 own_id;
u16 index;
u32 pos;
} FSDirPos;
typedef struct FSFileID {
struct FSArchive *arc;
u32 file_id;
} FSFileID;
typedef struct {
union {
FSFileID file_id;
FSDirPos dir_id;
};
u32 is_directory;
u32 name_len;
char name[127 + 1];
} FSDirEntry;
typedef FSResult (*FS_ARCHIVE_PROC_FUNC)(struct FSFile *, FSCommandType);
typedef FSResult (*FS_ARCHIVE_READ_FUNC)(struct FSArchive *p, void *dst,
u32 pos, u32 size);
typedef FSResult (*FS_ARCHIVE_WRITE_FUNC)(struct FSArchive *p, const void *src,
u32 pos, u32 size);
typedef struct {
FSDirPos pos;
} FSSeekDirInfo;
typedef struct {
FSDirEntry *p_entry;
BOOL skip_string;
} FSReadDirInfo;
typedef struct {
FSDirPos pos;
const char *path;
BOOL find_directory;
union {
FSFileID *file;
FSDirPos *dir;
} result;
} FSFindPathInfo;
typedef struct {
u8 *buf;
u32 buf_len;
u16 total_len;
u16 dir_id;
} FSGetPathInfo;
typedef struct {
FSFileID id;
} FSOpenFileFastInfo;
typedef struct {
u32 top;
u32 bottom;
u32 index;
} FSOpenFileDirectInfo;
typedef struct {
u32 reserved;
} FSCloseFileInfo;
typedef struct {
void *dst;
u32 len_org;
u32 len;
} FSReadFileInfo;
typedef struct {
const void *src;
u32 len_org;
u32 len;
} FSWriteFileInfo;
typedef union FSROMFATCommandInfo {
FSReadFileInfo readfile;
FSWriteFileInfo writefile;
FSSeekDirInfo seekdir;
FSReadDirInfo readdir;
FSFindPathInfo findpath;
FSGetPathInfo getpath;
FSOpenFileFastInfo openfilefast;
FSOpenFileDirectInfo openfiledirect;
FSCloseFileInfo closefile;
} FSROMFATCommandInfo;
typedef struct FSROMFATFileProperty {
u32 own_id;
u32 top;
u32 bottom;
u32 pos;
} FSROMFATFileProperty;
typedef struct FSROMFATDirProperty {
FSDirPos pos;
u32 parent;
} FSROMFATDirProperty;
typedef union FSROMFATProperty {
FSROMFATFileProperty file;
FSROMFATDirProperty dir;
} FSROMFATProperty;
u32 FS_GetArchiveBase(const struct FSArchive *arc);
u32 FS_GetArchiveFAT(const struct FSArchive *arc);
u32 FS_GetArchiveFNT(const struct FSArchive *arc);
u32 FS_GetArchiveOffset(const struct FSArchive *arc, u32 pos);
BOOL FS_IsArchiveTableLoaded(volatile const struct FSArchive *arc);
BOOL FS_LoadArchive(struct FSArchive *arc, u32 base, u32 fat, u32 fat_size,
u32 fnt, u32 fnt_size, FS_ARCHIVE_READ_FUNC read_func,
FS_ARCHIVE_WRITE_FUNC write_func);
BOOL FS_UnloadArchive(struct FSArchive *arc);
u32 FS_LoadArchiveTables(struct FSArchive *arc, void *mem, u32 size);
void *FS_UnloadArchiveTables(struct FSArchive *arc);
void FS_SetArchiveProc(struct FSArchive *arc, FS_ARCHIVE_PROC_FUNC proc,
u32 flags);
u32 FS_GetFileImageTop(const struct FSFile *file);
u32 FS_GetFileImageBottom(const struct FSFile *file);
typedef struct FSArchiveInterface {
FSResult (*ReadFile)(struct FSArchive *, struct FSFile *, void *buffer,
u32 *length);
FSResult (*WriteFile)(struct FSArchive *, struct FSFile *, const void *buffer,
u32 *length);
FSResult (*SeekDirectory)(struct FSArchive *, struct FSFile *, u32 id,
u32 position);
FSResult (*ReadDirectory)(struct FSArchive *, struct FSFile *,
FSDirectoryEntryInfo *info);
FSResult (*FindPath)(struct FSArchive *, u32 base_dir_id, const char *path,
u32 *target_id, BOOL target_is_directory);
FSResult (*GetPath)(struct FSArchive *, struct FSFile *, BOOL is_directory,
char *buffer, u32 *length);
FSResult (*OpenFileFast)(struct FSArchive *, struct FSFile *, u32 id,
u32 mode);
FSResult (*OpenFileDirect)(struct FSArchive *, struct FSFile *, u32 top,
u32 bottom, u32 *id);
FSResult (*CloseFile)(struct FSArchive *, struct FSFile *);
void (*Activate)(struct FSArchive *);
void (*Idle)(struct FSArchive *);
void (*Suspend)(struct FSArchive *);
void (*Resume)(struct FSArchive *);
FSResult (*OpenFile)(struct FSArchive *, struct FSFile *, u32 base_dir_id,
const char *path, u32 mode);
FSResult (*SeekFile)(struct FSArchive *, struct FSFile *, int *offset,
FSSeekFileMode from);
FSResult (*GetFileLength)(struct FSArchive *, struct FSFile *, u32 *length);
FSResult (*GetFilePosition)(struct FSArchive *, struct FSFile *,
u32 *position);
void (*Mount)(struct FSArchive *);
void (*Unmount)(struct FSArchive *);
FSResult (*GetArchiveCaps)(struct FSArchive *, u32 *caps);
FSResult (*CreateFile)(struct FSArchive *, u32 baseid, const char *relpath,
u32 permit);
FSResult (*DeleteFile)(struct FSArchive *, u32 baseid, const char *relpath);
FSResult (*RenameFile)(struct FSArchive *, u32 baseid_src,
const char *relpath_src, u32 baseid_dst,
const char *relpath_dst);
FSResult (*GetPathInfo)(struct FSArchive *, u32 baseid, const char *relpath,
FSPathInfo *info);
FSResult (*SetPathInfo)(struct FSArchive *, u32 baseid, const char *relpath,
FSPathInfo *info);
FSResult (*CreateDirectory)(struct FSArchive *, u32 baseid,
const char *relpath, u32 permit);
FSResult (*DeleteDirectory)(struct FSArchive *, u32 baseid,
const char *relpath);
FSResult (*RenameDirectory)(struct FSArchive *, u32 baseid,
const char *relpath_src, u32 baseid_dst,
const char *relpath_dst);
FSResult (*GetArchiveResource)(struct FSArchive *,
FSArchiveResource *resource);
void *unused_29;
FSResult (*FlushFile)(struct FSArchive *, struct FSFile *);
FSResult (*SetFileLength)(struct FSArchive *, struct FSFile *, u32 length);
FSResult (*OpenDirectory)(struct FSArchive *, struct FSFile *,
u32 base_dir_id, const char *path, u32 mode);
FSResult (*CloseDirectory)(struct FSArchive *, struct FSFile *);
FSResult (*SetSeekCache)(struct FSArchive *, struct FSFile *, void *buf,
u32 buf_size);
u8 reserved[116];
} FSArchiveInterface;
typedef struct FSArchive {
union {
char ptr[3 + 1];
u32 pack;
} name;
struct FSArchive * next;
struct FSFile *list;
OSThreadQueue queue;
u32 flag;
FSCommandType command;
FSResult result;
void *userdata;
const FSArchiveInterface *vtbl;
union {
u8 reserved2[52];
struct { u32 base; u32 fat; u32 fat_size; u32 fnt; u32 fnt_size; u32 fat_bak; u32 fnt_bak; void *load_mem; FS_ARCHIVE_READ_FUNC read_func; FS_ARCHIVE_WRITE_FUNC write_func; u8 reserved3[4]; FS_ARCHIVE_PROC_FUNC proc; u32 proc_flag; } ;
};
} FSArchive;
typedef struct FSFile {
struct FSFile *next;
void *userdata;
struct FSArchive *arc;
u32 stat;
void *argument;
FSResult error;
OSThreadQueue queue[1];
union {
u8 reserved1[16];
FSROMFATProperty prop;
};
union {
u8 reserved2[24];
FSROMFATCommandInfo arg;
};
} FSFile;
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
BOOL SND_GetNextInstData(const struct SNDBankData * bank, struct SNDInstData * inst, struct SNDInstPos * pos);
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
extern const s16 data_020a5d80[128 ];
static inline
s16 SND_CalcDecibel (int scale)
{
((void) 0) ;
return data_020a5d80[scale];
}
typedef void (*PMGenCallback)(void *);
typedef struct PMiGenCallbackInfo PMGenCallbackInfo;
struct PMiGenCallbackInfo {
PMGenCallback callback;
void *arg;
int priority;
PMGenCallbackInfo *next;
};
typedef enum NNSSndStrmFormat {
NNS_SND_STRM_FORMAT_PCM8,
NNS_SND_STRM_FORMAT_PCM16
} NNSSndStrmFormat;
typedef enum NNSSndStrmCallbackStatus {
NNS_SND_STRM_CALLBACK_SETUP,
NNS_SND_STRM_CALLBACK_INTERVAL
} NNSSndStrmCallbackStatus;
typedef void (*NNSSndStrmCallback)(NNSSndStrmCallbackStatus status, int numChannles, void * buffer[], u32 len, NNSSndStrmFormat format, void * arg);
typedef struct NNSSndStrm {
NNSFndLink link;
PMGenCallbackInfo preSleepInfo;
PMGenCallbackInfo postSleepInfo;
NNSSndStrmFormat format;
BOOL activeFlag :1;
BOOL startFlag :1;
u32 chBufLen;
int interval;
NNSSndStrmCallback callback;
void * callbackArg;
int curBuffer;
int volume;
int alarmNo;
u32 chBitMask;
int numChannels;
u8 channelNo[16 ];
} NNSSndStrm;
void func_0207a204(NNSSndStrm * stream);
void func_0207a24c(NNSSndStrm * stream, int volume);
struct NNSSndStrmPlayer;
typedef enum NNSSndArcStrmCallbackStatus {
NNS_SND_ARC_STRM_CALLBACK_DATA_END
} NNSSndArcStrmCallbackStatus;
typedef struct NNSSndArcStrmCallbackInfo {
int playerNo;
int strmNo;
} NNSSndArcStrmCallbackInfo;
typedef struct NNSSndArcStrmCallbackParam {
int strmNo;
u32 offset;
} NNSSndArcStrmCallbackParam;
typedef BOOL (*NNSSndArcStrmCallback)(NNSSndArcStrmCallbackStatus status, const NNSSndArcStrmCallbackInfo * info, NNSSndArcStrmCallbackParam * param, void * arg);
typedef struct NNSSndStrmHandle {
struct NNSSndStrmPlayer * player;
} NNSSndStrmHandle;
BOOL NNS_SndArcStrmStart(struct NNSSndStrmHandle * handle, int strmNo, u32 offset);
void NNS_SndArcStrmStop(struct NNSSndStrmHandle * handle, int fadeFrame);
BOOL NNS_SndArcStrmPrepare(struct NNSSndStrmHandle * handle, int strmNo, u32 offset);
void NNS_SndArcStrmStartPrepared(struct NNSSndStrmHandle * handle);
BOOL NNS_SndArcStrmIsPrepared(struct NNSSndStrmHandle * handle);
BOOL NNS_SndArcStrmStartEx(struct NNSSndStrmHandle * handle, int playerNo, int playerPrio, int strmNo, u32 offset);
BOOL NNS_SndArcStrmPrepareEx(struct NNSSndStrmHandle * handle, int playerNo, int playerPrio, int strmNo, u32 offset);
BOOL NNS_SndArcStrmStartEx2(struct NNSSndStrmHandle * handle, int playerNo, int playerPrio, int strmNo, u32 offset, NNSSndStrmCallback strmCallback, void * strmCallbackArg, NNSSndArcStrmCallback sndArcStrmCallback, void * sndArcStrmCallbackArg);
BOOL NNS_SndArcStrmPrepareEx2(struct NNSSndStrmHandle * handle, int playerNo, int playerPrio, int strmNo, u32 offset, NNSSndStrmCallback strmCallback, void * strmCallbackArg, NNSSndArcStrmCallback sndArcStrmCallback, void * sndArcStrmCallbackArg);
void NNS_SndArcStrmSetVolume(struct NNSSndStrmHandle * handle, int volume);
void NNS_SndArcStrmMoveVolume(struct NNSSndStrmHandle * handle, int volume, int frames);
void NNS_SndArcStrmSetChannelVolume(struct NNSSndStrmHandle * handle, int chNo, int volume);
void NNS_SndArcStrmSetChannelPan(struct NNSSndStrmHandle * handle, int chNo, int pan);
u32 NNS_SndArcStrmGetTimeLength(struct NNSSndStrmHandle * handle);
u32 NNS_SndArcStrmGetCurrentPlayingPos(struct NNSSndStrmHandle * handle);
int NNS_SndArcStrmGetChannelCount(struct NNSSndStrmHandle * handle);
void NNS_SndStrmHandleInit(struct NNSSndStrmHandle * handle);
void NNS_SndStrmHandleRelease(struct NNSSndStrmHandle * handle);
void func_0207b914(void);
typedef struct NNSSndSeqParam {
u16 bankNo;
u8 volume;
u8 channelPrio;
u8 playerPrio;
u8 playerNo;
u16 reserved;
} NNSSndSeqParam;
typedef struct NNSSndSeqArcSeqInfo {
u32 offset;
struct NNSSndSeqParam param;
} NNSSndSeqArcSeqInfo;
typedef struct NNSSndSeqArc {
struct SNDBinaryFileHeader fileHeader;
struct SNDBinaryBlockHeader blockHeader;
u32 baseOffset;
u32 count;
NNSSndSeqArcSeqInfo info[0];
} NNSSndSeqArc;
typedef struct NNSSndSeqData {
struct SNDBinaryFileHeader fileHeader;
struct SNDBinaryBlockHeader blockHeader;
u32 baseOffset;
u32 data[0];
} NNSSndSeqData;
u32 NNSi_SndSeqArcGetSeqCount(const struct NNSSndSeqArc * seqArc);
const NNSSndSeqArcSeqInfo * NNSi_SndSeqArcGetSeqInfo(const struct NNSSndSeqArc * seqArc, int seqNo);
typedef struct NNSSndArcSeqInfo {
u32 fileId;
struct NNSSndSeqParam param;
} NNSSndArcSeqInfo;
typedef struct NNSSndArcStrmInfo {
u32 fileId;
u8 volume;
u8 playerPrio;
u8 playerNo;
u8 flags;
} NNSSndArcStrmInfo;
typedef struct NNSSndArcFileInfo {
u32 offset;
u32 size;
void * mem;
u32 reserved;
} NNSSndArcFileInfo;
typedef struct NNSSndArcFat {
struct SNDBinaryBlockHeader blockHeader;
u32 count;
NNSSndArcFileInfo files[0];
} NNSSndArcFat;
typedef struct NNSSndArcInfo {
struct SNDBinaryBlockHeader blockHeader;
u32 seqOffset;
u32 seqArcOffset;
u32 bankOffset;
u32 waveArcOffset;
u32 playerInfoOffset;
u32 groupInfoOffset;
u32 strmPlayerInfoOffset;
u32 strmOffset;
} NNSSndArcInfo;
typedef struct NNSSndArcSymbol {
struct SNDBinaryBlockHeader blockHeader;
u32 seqOffset;
u32 seqArcOffset;
u32 bankOffset;
u32 waveArcOffset;
u32 playerOffset;
u32 groupOffset;
u32 strmPlayerOffset;
u32 strmOffset;
} NNSSndArcSymbol;
typedef struct NNSSndArcHeader {
struct SNDBinaryFileHeader fileHeader;
u32 symbolDataOffset;
u32 symbolDataSize;
u32 infoOffset;
u32 infoSize;
u32 fatOffset;
u32 fatSize;
u32 fileImageOffset;
u32 fileImageSize;
} NNSSndArcHeader;
typedef struct NNSSndArc {
NNSSndArcHeader header;
BOOL file_open;
FSFile file;
FSFileID fileId;
struct NNSSndArcFat * fat;
struct NNSSndArcSymbol * symbol;
struct NNSSndArcInfo * info;
s32 loadBlockSize;
} NNSSndArc;
typedef struct NNSSndFader {
int origin;
int target;
int counter;
int frame;
} NNSSndFader;
int func_0207c92c(const NNSSndFader * fader);
void func_0207c94c(NNSSndFader * fader);
BOOL func_0207c95c(const NNSSndFader * fader);
struct NNSSndStrmPlayer;
typedef BOOL (*OpenStreamFunc)(struct NNSSndStrmPlayer * player, u32 fileId);
typedef void (*CloseStreamFunc)(struct NNSSndStrmPlayer * player);
typedef s32 (*ReadStreamFunc)(struct NNSSndStrmPlayer * player, void * dest, u32 size, u32 offset);
typedef void (*CancelStreamFunc)(struct NNSSndStrmPlayer * player);
typedef struct NNSSndStrmData {
struct SNDBinaryFileHeader fileHeader;
struct SNDBinaryBlockHeader blockHeader;
u8 format;
u8 loopFlag;
u8 numChannels;
u8 pad_;
u16 sampleRate;
u16 timer;
u32 loopStart;
u32 loopEnd;
u32 dataOffset;
u32 numBlocks;
u32 blockSize;
u32 blockSamples;
u32 lastBlockSize;
u32 lastBlockSamples;
} NNSSndStrmData;
typedef struct AdpcmState {
s16 prevSample;
u8 prevIndex;
u8 padding;
} AdpcmState;
typedef struct NNSSndStrmPlayer {
NNSSndStrm stream;
FSFile file;
u32 fileOffset;
NNSSndStrmData info;
NNSSndFader fader;
AdpcmState adpcmState[6 ];
BOOL activeFlag : 1;
BOOL playFlag : 1;
BOOL startFlag : 1;
BOOL fadeOutFlag : 1;
BOOL dirtyFlag : 1;
BOOL finishFlag : 1;
BOOL monoFlag : 1;
volatile int finishCounter;
volatile BOOL prepareFlag;
volatile int commandCount;
int allocChannelCount;
u8 numChannels;
u8 padding;
u8 chNoList[6 ];
void * buffer;
u32 bufSize;
NNSSndStrmCallback strmCallback;
void * strmCallbackArg;
NNSSndArcStrmCallback sndArcStrmCallback;
void * sndArcStrmCallbackArg;
int strmNo;
int playerNo;
NNSSndStrmHandle * handle;
int prio;
int initVolume;
int extVolume;
int volume;
u32 curSample;
OpenStreamFunc openStreamFunc;
CloseStreamFunc closeStreamFunc;
ReadStreamFunc readStreamFunc;
CancelStreamFunc cancelStreamFunc;
} NNSSndStrmPlayer;
extern NNSSndStrmPlayer data_0213f080[4 ];
BOOL PrepareStrm(NNSSndStrmHandle * handle, const NNSSndArcStrmInfo * strmInfo, int playerNo, int playerPrio, int strmNo, u32 offset, NNSSndStrmCallback strmCallback, void * strmCallbackArg, NNSSndArcStrmCallback sndArcStrmCallback, void * sndArcStrmCallbackArg);
void func_0207bd2c(NNSSndStrmPlayer * player);
BOOL NNS_SndArcStrmPrepare (struct NNSSndStrmHandle * handle, int strmNo, u32 offset);
BOOL NNS_SndArcStrmPrepareEx (struct NNSSndStrmHandle * handle, int playerNo, int playerPrio, int strmNo, u32 offset);
BOOL NNS_SndArcStrmPrepareEx2 (struct NNSSndStrmHandle * handle, int playerNo, int playerPrio, int strmNo, u32 offset, NNSSndStrmCallback strmCallback, void * strmCallbackArg, NNSSndArcStrmCallback sndArcStrmCallback, void * sndArcStrmCallbackArg);
void NNS_SndArcStrmStartPrepared (NNSSndStrmHandle * handle);
BOOL NNS_SndArcStrmIsPrepared (NNSSndStrmHandle * handle);
BOOL NNS_SndArcStrmStart (NNSSndStrmHandle * handle, int strmNo, u32 offset);
BOOL NNS_SndArcStrmStartEx (NNSSndStrmHandle * handle, int playerNo, int playerPrio, int strmNo, u32 offset);
BOOL NNS_SndArcStrmStartEx2 (NNSSndStrmHandle * handle, int playerNo, int playerPrio, int strmNo, u32 offset, NNSSndStrmCallback strmCallback, void * strmCallbackArg, NNSSndArcStrmCallback sndArcStrmCallback, void * sndArcStrmCallbackArg);
void NNS_SndArcStrmStop (NNSSndStrmHandle * handle, int fadeFrame);
void NNS_SndArcStrmSetVolume (struct NNSSndStrmHandle * handle, int volume);
void NNS_SndArcStrmMoveVolume (struct NNSSndStrmHandle * handle, int volume, int frames);
void NNS_SndArcStrmSetChannelVolume (struct NNSSndStrmHandle * handle, int chNo, int volume);
void NNS_SndArcStrmSetChannelPan (struct NNSSndStrmHandle * handle, int chNo, int pan);
void NNS_SndStrmHandleInit (NNSSndStrmHandle * handle);
void NNS_SndStrmHandleRelease (NNSSndStrmHandle * handle);
u32 NNS_SndArcStrmGetCurrentPlayingPos (NNSSndStrmHandle * handle);
u32 NNS_SndArcStrmGetTimeLength (NNSSndStrmHandle * handle);
int NNS_SndArcStrmGetChannelCount (NNSSndStrmHandle * handle);
void func_0207b914 (void)
{
NNSSndStrmPlayer * player;
int playerNo;
int volume;
for (playerNo = 0; playerNo < 4 ; ++playerNo) {
player = &data_0213f080[ playerNo ];
if (!player->activeFlag) continue;
if (player->finishCounter == 0) {
func_0207bd2c(player);
continue;
}
if (player->startFlag) {
if (player->prepareFlag) {
func_0207a204(&player->stream);
player->playFlag = 1 ;
player->startFlag = 0 ;
}
}
if (!player->playFlag) continue;
func_0207c94c(&player->fader);
volume
= SND_CalcDecibel(func_0207c92c(&player->fader) >> 8)
+ SND_CalcDecibel(player->initVolume)
+ SND_CalcDecibel(player->extVolume)
;
if (volume != player->volume) {
func_0207a24c(&player->stream, volume);
player->volume = volume;
}
if (player->fadeOutFlag) {
if (func_0207c95c(&player->fader)) {
func_0207bd2c(player);
}
}
}
}
BOOL PrepareStrm (struct NNSSndStrmHandle * handle, const NNSSndArcStrmInfo * strmInfo, int playerNo, int playerPrio, int strmNo, u32 offset, NNSSndStrmCallback strmCallback, void * strmCallbackArg, NNSSndArcStrmCallback sndArcStrmCallback, void * sndArcStrmCallbackArg);
void func_0207bd2c (NNSSndStrmPlayer * player);
