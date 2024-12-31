//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface LiteAppWAVRecorder
{
    struct AudioStreamBasicDescription _formatDescription;
}

@property(nonatomic) struct AudioStreamBasicDescription formatDescription; // @synthesize formatDescription=_formatDescription;
- (void)onNotifyStateChangeOnMainThread:(unsigned long long)arg1 error:(id)arg2;
- (_Bool)checkErrorAndStopIfError:(int)arg1 withErrorString:(id)arg2;
- (void)encodePCMBufferToOutputFormat:(struct LiteAppRecorderData *)arg1 audioQueueRef:(struct OpaqueAudioQueue *)arg2 audioQueueBufferRef:(struct AudioQueueBuffer *)arg3 audioTimeStamp:(const struct AudioTimeStamp *)arg4 numPackets:(unsigned int)arg5 packetDescription:(const struct AudioStreamPacketDescription *)arg6;
- (_Bool)frameRecordByteSizeEnable;
- (id)fileHeadDataBeforeStop;
- (void)prepareToRecord;

@end

