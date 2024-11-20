//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class MMFlutterViewController, NSString;

@interface NewLifeGesturePlugin : NSObject
{
    MMFlutterViewController *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMFlutterViewController *viewController; // @synthesize viewController=_viewController;
- (void)setEdgeDragThresholdThreshold:(double)arg1 error:(id *)arg2;
- (void)enableEdgeDragEnable:(_Bool)arg1 error:(id *)arg2;
- (void)onFlowListTopIsTop:(_Bool)arg1 error:(id *)arg2;
- (void)onDetachedToViewController;
- (void)onAttachedToViewController:(id)arg1;
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

