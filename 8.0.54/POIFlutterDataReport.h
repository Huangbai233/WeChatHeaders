//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger;

@interface POIFlutterDataReport : NSObject
{
    NSObject<FlutterBinaryMessenger> *_binaryMessenger;
    NSString *_messageChannelSuffix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *messageChannelSuffix; // @synthesize messageChannelSuffix=_messageChannelSuffix;
@property(retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger; // @synthesize binaryMessenger=_binaryMessenger;
- (void)setFeedLoadingTimeTimeInMs:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onScreenDisappearWithCompletion:(CDUnknownBlockType)arg1;
- (void)onScreenAppearWithCompletion:(CDUnknownBlockType)arg1;
- (void)setIsExpandedIsExpanded:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (id)initWithBinaryMessenger:(id)arg1;

@end

