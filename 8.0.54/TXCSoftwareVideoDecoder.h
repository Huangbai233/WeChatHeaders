//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NSString;
@protocol TXIVideoDecoderSupervisorInterface;

@interface TXCSoftwareVideoDecoder
{
    id <TXIVideoDecoderSupervisorInterface> supervisor;
}

+ (_Bool)isSupported;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TXIVideoDecoderSupervisorInterface> supervisor; // @synthesize supervisor;
- (void)resetDecoderOnComplete:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

