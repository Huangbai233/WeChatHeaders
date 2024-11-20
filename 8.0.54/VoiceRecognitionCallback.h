//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger;

@interface VoiceRecognitionCallback : NSObject
{
    NSObject<FlutterBinaryMessenger> *_binaryMessenger;
    NSString *_messageChannelSuffix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *messageChannelSuffix; // @synthesize messageChannelSuffix=_messageChannelSuffix;
@property(retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger; // @synthesize binaryMessenger=_binaryMessenger;
- (void)onRecognizeFinishedWithCompletion:(CDUnknownBlockType)arg1;
- (void)onRecordFinishedWithCompletion:(CDUnknownBlockType)arg1;
- (void)onErrorErrType:(long long)arg1 errCode:(long long)arg2 localCode:(long long)arg3 voiceid:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)onResultResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (id)initWithBinaryMessenger:(id)arg1;

@end

