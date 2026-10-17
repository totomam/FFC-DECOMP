/* From libntr libntr/libraries/mi/src/mi_compress.c (thumb build): func_02085930 */
typedef unsigned char u8;
typedef unsigned long u32;
typedef enum {
MI_COMPRESSION_LZ = 0x10,
MI_COMPRESSION_HUFFMAN = 0x20,
MI_COMPRESSION_RL = 0x30,
MI_COMPRESSION_DIFF = 0x80,
MI_COMPRESSION_TYPE_MASK = 0xf0,
MI_COMPRESSION_TYPE_EX_MASK = 0xff
} MICompressionType;
u32 func_02085930(const u8 * srcp, u32 size, u8 * dstp);
u32 func_02085930 (const u8 * srcp, u32 size, u8 * dstp)
{
u32 RLDstCount;
u32 RLSrcCount;
u8 RLCompFlag;
u8 runLength;
u8 rawDataLength;
u32 i;
const u8 * startp;
*(u32 *)dstp = size << 8 | MI_COMPRESSION_RL;
RLDstCount = 4;
RLSrcCount = 0;
rawDataLength = 0;
RLCompFlag = 0;
while (RLSrcCount < size) {
startp = &srcp[RLSrcCount];
for (i = 0; i < 128; i++) {
if (RLSrcCount + rawDataLength >= size) {
rawDataLength = (u8)(size - RLSrcCount);
break;
}
if (RLSrcCount + rawDataLength + 2 < size) {
if (startp[i] == startp[i + 1] && startp[i] == startp[i + 2]) {
RLCompFlag = 1;
break;
}
}
rawDataLength++;
}
if (rawDataLength) {
if (RLDstCount + rawDataLength + 1 >= size) {
return 0;
}
dstp[RLDstCount++] = (u8)(rawDataLength - 1);
for (i = 0; i < rawDataLength; i++) {
dstp[RLDstCount++] = srcp[RLSrcCount++];
}
rawDataLength = 0;
}
if (RLCompFlag) {
runLength = 3;
for (i = 3; i < 128 + 2; i++) {
if (RLSrcCount + runLength >= size) {
runLength = (u8)(size - RLSrcCount);
break;
}
if (srcp[RLSrcCount] != srcp[RLSrcCount + runLength]) {
break;
}
runLength++;
}
if (RLDstCount + 2 >= size) {
return 0;
}
dstp[RLDstCount++] = (u8)(0x80 | (runLength - 3));
dstp[RLDstCount++] = srcp[RLSrcCount];
RLSrcCount += runLength;
RLCompFlag = 0;
}
}
i = 0;
while ((RLDstCount + i) & 0x3) {
dstp[RLDstCount + i] = 0;
i++;
}
return RLDstCount;
}
