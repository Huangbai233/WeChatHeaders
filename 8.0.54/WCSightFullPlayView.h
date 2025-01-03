//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <UIKit/UIView.h>

@class ColorGradientView, NSString, SightView, UIActivityIndicatorView, UIButton, WCMediaItem, WXFullScreenGestureRecognizer;
@protocol WCSightFullPlayViewDelegate;

@interface WCSightFullPlayView : UIView
{
    _Bool m_bIsLongPressHandled;
    _Bool m_isSightVisible;
    _Bool m_bIsMute;
    _Bool m_bIsAdAttachSight;
    UIView *m_fullScreenContent;
    SightView *_sightView;
    _Bool m_bHasStartedDownLoadingVideo;
    _Bool m_bCachedRealDownloadProgress;
    unsigned long long m_videoRestPlayTime;
    UIButton *m_playAttachVideoButton;
    ColorGradientView *m_buttonGradientView;
    WXFullScreenGestureRecognizer *m_gesture;
    _Bool m_isImageReady;
    _Bool m_isSightReady;
    unsigned long long index;
    UIActivityIndicatorView *mActivityIndicator;
    WCMediaItem *m_mediaData;
    id <WCSightFullPlayViewDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bIsMute; // @synthesize m_bIsMute;
@property(nonatomic) _Bool m_isSightVisible; // @synthesize m_isSightVisible;
@property(readonly, nonatomic) _Bool m_isSightReady; // @synthesize m_isSightReady;
@property(readonly, nonatomic) _Bool m_isImageReady; // @synthesize m_isImageReady;
@property(nonatomic) __weak id <WCSightFullPlayViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) WCMediaItem *m_mediaData; // @synthesize m_mediaData;
@property(readonly, nonatomic) UIActivityIndicatorView *mActivityIndicator; // @synthesize mActivityIndicator;
@property(nonatomic) unsigned long long index; // @synthesize index;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragBegin;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (_Bool)sightView:(id)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)sightViewProgressDidReachEnd:(id)arg1;
- (void)showDownloadTooSlow;
- (void)makeFakeProgress;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(long long)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onBeginDownload:(id)arg1 downloadType:(long long)arg2;
- (void)showButtonGradientView;
- (void)layoutPlayAttachVideoButton;
- (id)genVideoButtonWithTitle:(id)arg1;
- (void)showPlayAllVideoButton;
- (void)showDetailButton;
- (void)onClickDetailButton;
- (void)onClickPlayAttachVideoBtn;
- (id)getShowTime:(unsigned long long)arg1;
- (void)rotateToOrientation:(_Bool)arg1;
- (void)onDoubleClickWCSight:(id)arg1;
- (void)onClickSightView:(id)arg1;
- (void)onLongPressSightView:(id)arg1;
- (void)clearPlay;
- (void)resumePlay;
- (void)pausePlay;
- (void)fullPlay;
- (void)silentPlay;
- (void)stopSight;
- (void)clearSight;
- (void)playSight;
- (void)cacheFakeProgressValue;
- (struct CGRect)playerRectWithScreenOrientation:(_Bool)arg1;
- (void)reloadSightPreviewImage;
- (id)getImage;
- (_Bool)shouldShowDetailBtn;
- (void)reloadSight;
- (_Bool)isSightVideoExist;
- (id)getProcessCacheKey;
- (long long)getSightDownloadType;
- (id)getSightPath;
- (void)downloadSight;
- (void)downloadImage;
- (_Bool)shouldAutoDownloadSight;
- (void)onOrientationChanged;
- (void)setPlayAttachVideoButtonFrame;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (void)setDataAndView:(id)arg1;
- (void)displaySightwithMediaItem:(id)arg1;
@property(nonatomic) _Bool enableDragToClose;
- (id)initWithMediaData:(id)arg1 isMute:(_Bool)arg2;
- (id)initWithMediaData:(id)arg1;
- (void)systemActived:(id)arg1;
- (void)systemResigned:(id)arg1;
- (void)UnRegister;
- (void)register;
- (void)setContentViewTop:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

