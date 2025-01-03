//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, UIImageView;
@protocol NSObject;

@interface VoiceRecogView : UIView
{
    _Bool mIsRecording;
    id <NSObject> begin_targetor;
    SEL begin_selector;
    id <NSObject> end_targetor;
    SEL end_selector;
    _Bool isEndTipAnimation;
    int mode;
    UIImageView *mBkgView;
    UIImageView *mIconView;
    UIImageView *mVolumeAnimationView;
    NSArray *mLowVolumeImages;
    NSArray *mHighVolumeImages;
    NSArray *mMiddleVolumeImages;
    UIImageView *mRecogAnimationView;
}

+ (unsigned int)HeightWithMode:(int)arg1;
+ (unsigned int)WidthWithMode:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *mRecogAnimationView; // @synthesize mRecogAnimationView;
@property(retain, nonatomic) NSArray *mMiddleVolumeImages; // @synthesize mMiddleVolumeImages;
@property(retain, nonatomic) NSArray *mHighVolumeImages; // @synthesize mHighVolumeImages;
@property(retain, nonatomic) NSArray *mLowVolumeImages; // @synthesize mLowVolumeImages;
@property(retain, nonatomic) UIImageView *mVolumeAnimationView; // @synthesize mVolumeAnimationView;
@property(retain, nonatomic) UIImageView *mIconView; // @synthesize mIconView;
@property(retain, nonatomic) UIImageView *mBkgView; // @synthesize mBkgView;
@property(nonatomic) int mode; // @synthesize mode;
- (void)rollbackRecordingStatus;
- (void)stopAnimationShouldResetImage:(_Bool)arg1;
- (void)stopAnimation;
- (void)stopRecogAnimationShouldResetImage:(_Bool)arg1;
- (void)stopRecogAnimation;
- (void)startRecogAnimation;
- (void)updateVolume:(float)arg1;
- (void)stopVolumeAnimationShouldResetImage:(_Bool)arg1;
- (void)stopVolumeAnimation;
- (void)startVolumeAnimation;
- (void)endTipAnimation;
- (void)genVoiceRecogView;
- (void)touchOnce;
- (void)addEndRecordTarget:(id)arg1 action:(SEL)arg2;
- (void)addBeginRecordTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)highlight;
- (void)normal;
- (_Bool)checkTouchPoint:(struct CGPoint)arg1 IfInView:(id)arg2;

@end

