//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class MiniTaskAnimiatedTransitioningConfig, NSString, UIImageView;

@interface MiniTaskDismissAnimatedTransitioning : NSObject
{
    MiniTaskAnimiatedTransitioningConfig *_config;
    UIImageView *_snapshotView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) MiniTaskAnimiatedTransitioningConfig *config; // @synthesize config=_config;
- (void)onTaskSnapShotUpdate:(id)arg1 snapshot:(id)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

