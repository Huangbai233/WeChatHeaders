//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSDate, NSString, NSTimer, UIColor, UIFont, UILabel;
@protocol YTProgressHUDDelegate;

@interface YTProgressHUD : UIView
{
    _Bool useAnimation;
    SEL methodForExecution;
    id targetForExecution;
    id objectForExecution;
    UILabel *label;
    UILabel *detailsLabel;
    _Bool isFinished;
    struct CGAffineTransform rotationTransform;
    _Bool square;
    _Bool dimBackground;
    _Bool taskInProgress;
    _Bool removeFromSuperViewOnHide;
    float opacity;
    float xOffset;
    float yOffset;
    float margin;
    float graceTime;
    float minShowTime;
    float progress;
    float _cornerRadius;
    long long animationType;
    id <YTProgressHUDDelegate> delegate;
    UIColor *color;
    UIFont *labelFont;
    UIColor *labelColor;
    UIFont *detailsLabelFont;
    UIColor *detailsLabelColor;
    UIView *indicator;
    NSTimer *graceTimer;
    NSTimer *minShowTimer;
    UIView *customView;
    NSDate *showStarted;
    long long mode;
    NSString *labelText;
    NSString *detailsLabelText;
    UIColor *activityIndicatorColor;
    CDUnknownBlockType completionBlock;
    struct CGSize minSize;
    struct CGSize size;
}

+ (id)allHUDsForView:(id)arg1;
+ (id)HUDForView:(id)arg1;
+ (unsigned long long)hideAllHUDsForView:(id)arg1 animated:(_Bool)arg2;
+ (_Bool)hideHUDForView:(id)arg1 animated:(_Bool)arg2;
+ (id)showHUDAddedTo:(id)arg1 animated:(_Bool)arg2;
- (void).cxx_destruct;
@property float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock;
@property(retain) UIColor *activityIndicatorColor; // @synthesize activityIndicatorColor;
@property(readonly) struct CGSize size; // @synthesize size;
@property float progress; // @synthesize progress;
@property(copy) NSString *detailsLabelText; // @synthesize detailsLabelText;
@property(copy) NSString *labelText; // @synthesize labelText;
@property long long mode; // @synthesize mode;
@property(retain) NSDate *showStarted; // @synthesize showStarted;
@property(retain) UIView *customView; // @synthesize customView;
@property _Bool removeFromSuperViewOnHide; // @synthesize removeFromSuperViewOnHide;
@property _Bool taskInProgress; // @synthesize taskInProgress;
@property(retain) NSTimer *minShowTimer; // @synthesize minShowTimer;
@property(retain) NSTimer *graceTimer; // @synthesize graceTimer;
@property float minShowTime; // @synthesize minShowTime;
@property float graceTime; // @synthesize graceTime;
@property _Bool dimBackground; // @synthesize dimBackground;
@property float margin; // @synthesize margin;
@property(getter=isSquare) _Bool square; // @synthesize square;
@property struct CGSize minSize; // @synthesize minSize;
@property float yOffset; // @synthesize yOffset;
@property float xOffset; // @synthesize xOffset;
@property(retain) UIView *indicator; // @synthesize indicator;
@property(retain) UIColor *detailsLabelColor; // @synthesize detailsLabelColor;
@property(retain) UIFont *detailsLabelFont; // @synthesize detailsLabelFont;
@property(retain) UIColor *labelColor; // @synthesize labelColor;
@property(retain) UIFont *labelFont; // @synthesize labelFont;
@property(retain) UIColor *color; // @synthesize color;
@property float opacity; // @synthesize opacity;
@property __weak id <YTProgressHUDDelegate> delegate; // @synthesize delegate;
@property long long animationType; // @synthesize animationType;
- (void)updateForCurrentOrientationAnimated:(_Bool)arg1;
- (void)statusBarOrientationDidChange:(id)arg1;
- (void)unregisterFromNotifications;
- (void)registerForNotifications;
- (void)updateUIForKeypath:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)observableKeypaths;
- (void)unregisterFromKVO;
- (void)registerForKVO;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateIndicators;
- (void)setupLabels;
- (void)cleanUp;
- (void)launchExecution;
- (void)showAnimated:(_Bool)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 onQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)showAnimated:(_Bool)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (void)showAnimated:(_Bool)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)showAnimated:(_Bool)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2;
- (void)showWhileExecuting:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 animated:(_Bool)arg4;
- (void)done;
- (void)animationFinished:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;
- (void)hideUsingAnimation:(_Bool)arg1;
- (void)showUsingAnimation:(_Bool)arg1;
- (void)didMoveToSuperview;
- (void)handleMinShowTimer:(id)arg1;
- (void)handleGraceTimer:(id)arg1;
- (void)hideDelayed:(id)arg1;
- (void)hide:(_Bool)arg1 afterDelay:(double)arg2;
- (void)hide:(_Bool)arg1;
- (void)show:(_Bool)arg1;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

