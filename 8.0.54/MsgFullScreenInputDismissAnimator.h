//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class MsgFullScreenInputAnimationController, NSString;

@interface MsgFullScreenInputDismissAnimator : NSObject
{
    MsgFullScreenInputAnimationController *_animationController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MsgFullScreenInputAnimationController *animationController; // @synthesize animationController=_animationController;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

