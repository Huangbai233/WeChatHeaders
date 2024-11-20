//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class FinderFlutterAPI, NSString;

@interface FinderPlugin : NSObject
{
    FinderFlutterAPI *_flutterAPI;
}

+ (id)plugin;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderFlutterAPI *flutterAPI; // @synthesize flutterAPI=_flutterAPI;
- (id)finderCommonReportParamsWithError:(id *)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

