//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class CAGradientLayer, MMBGMSelectHalfScreenViewController, MMUIButton, NSMutableArray, NSString, UIImageView, UIView, WCColorProxy, WCMomentsCompositorTemplatePanelViewController, WCVideoProducerAssetClipperViewController, WCVideoProducerMusicBarViewController, WCVideoProducerMusicInfoMarqueeView, WCVideoProducerMusicSearcherViewController, WCVideoProducerTemplateBarViewController, WCVideoProducerTemplateFlowViewController, WCVideoProducerViewModel;
@protocol WCVideoProducerViewControllerDelegate;

@interface WCVideoProducerViewController
{
    WCVideoProducerViewModel *_privateVideoProducerVM;
    UIView *_proxyRootView;
    id <WCVideoProducerViewControllerDelegate> _delegate;
    WCColorProxy *_colorProxy;
    MMBGMSelectHalfScreenViewController *_bgmPanelVC;
    WCVideoProducerMusicSearcherViewController *_musicSearcherVC;
    WCVideoProducerMusicBarViewController *_musicBarVC;
    WCMomentsCompositorTemplatePanelViewController *_templatePanelVC;
    WCVideoProducerTemplateFlowViewController *_templateFlowVC;
    WCVideoProducerTemplateBarViewController *_templateBarVC;
    WCVideoProducerAssetClipperViewController *_assetClipperVC;
    NSMutableArray *_showingFragmentStack;
    MMUIButton *_doneButton;
    MMUIButton *_cancelButton;
    UIView *_topActionBarView;
    CAGradientLayer *_topActionBarGradientLayer;
    WCVideoProducerMusicInfoMarqueeView *_musicInfoMarqueeView;
    UIView *_previewRenderView;
    UIImageView *_previewThumbView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *previewThumbView; // @synthesize previewThumbView=_previewThumbView;
@property(retain, nonatomic) UIView *previewRenderView; // @synthesize previewRenderView=_previewRenderView;
@property(retain, nonatomic) WCVideoProducerMusicInfoMarqueeView *musicInfoMarqueeView; // @synthesize musicInfoMarqueeView=_musicInfoMarqueeView;
@property(retain, nonatomic) CAGradientLayer *topActionBarGradientLayer; // @synthesize topActionBarGradientLayer=_topActionBarGradientLayer;
@property(retain, nonatomic) UIView *topActionBarView; // @synthesize topActionBarView=_topActionBarView;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) NSMutableArray *showingFragmentStack; // @synthesize showingFragmentStack=_showingFragmentStack;
@property(retain, nonatomic) WCVideoProducerAssetClipperViewController *assetClipperVC; // @synthesize assetClipperVC=_assetClipperVC;
@property(retain, nonatomic) WCVideoProducerTemplateBarViewController *templateBarVC; // @synthesize templateBarVC=_templateBarVC;
@property(retain, nonatomic) WCVideoProducerTemplateFlowViewController *templateFlowVC; // @synthesize templateFlowVC=_templateFlowVC;
@property(retain, nonatomic) WCMomentsCompositorTemplatePanelViewController *templatePanelVC; // @synthesize templatePanelVC=_templatePanelVC;
@property(retain, nonatomic) WCVideoProducerMusicBarViewController *musicBarVC; // @synthesize musicBarVC=_musicBarVC;
@property(retain, nonatomic) WCVideoProducerMusicSearcherViewController *musicSearcherVC; // @synthesize musicSearcherVC=_musicSearcherVC;
@property(retain, nonatomic) MMBGMSelectHalfScreenViewController *bgmPanelVC; // @synthesize bgmPanelVC=_bgmPanelVC;
@property(retain, nonatomic) WCColorProxy *colorProxy; // @synthesize colorProxy=_colorProxy;
@property(nonatomic) __weak id <WCVideoProducerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCVideoProducerViewModel *videoProducerVM; // @synthesize videoProducerVM=_privateVideoProducerVM;
- (void)registerYReportSdk;
- (void)videoProducerViewModel:(id)arg1 didGetExtRecommendMusics:(id)arg2 forTemplateID:(id)arg3;
- (void)_relayoutView;
- (void)_initView;
- (void)videoProducerDidChangeAudioModuleAbility:(_Bool)arg1;
- (void)_onPlayFirstTemplate;
- (void)completeStartingDelayedCreation:(_Bool)arg1;
- (void)startDelayedCreation;
- (void)_createVideo;
- (void)_prepareVideoProducer;
- (_Bool)handleWillSelectCellVM:(id)arg1 atIndex:(id)arg2 fromBelonger:(long long)arg3;
- (void)tryToLaunchMJAppWithLaunchType:(long long)arg1 containsCurrentTemplate:(_Bool)arg2 creationProjectStr:(id)arg3;
- (void)changeToCurrentRenderingTemplateIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)changeTemplateWithTemplateID:(id)arg1 musicID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)changeTemplate:(id)arg1 musicID:(id)arg2 atOrder:(long long)arg3 fromBelonger:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)changeTemplate:(id)arg1 atOrder:(long long)arg2 fromBelonger:(long long)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (_Bool)changeTemplate:(id)arg1 atOrder:(long long)arg2 fromBelonger:(long long)arg3;
- (void)finishVideoProducerWithError:(id)arg1 sightDraft:(id)arg2 isAsyncComposite:(_Bool)arg3;
- (long long)preferredStatusBarStyle;
- (id)navigationBarBackgroundColor;
- (_Bool)hidesStatusBar;
- (void)viewWillPopOrDismiss:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)view;
- (void)_onAppBackground:(id)arg1;
- (void)_onAppForeground:(id)arg1;
- (void)_removeAppStatusObserver;
- (void)_addAppStatusObserver;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;
- (void)_initAssetClipperIfNeeded;
- (void)_recordAssetClipEditInfoWithCellVMList:(id)arg1;
- (void)assetClipperVC:(id)arg1 didCancelWithCellVM:(id)arg2;
- (void)assetClipperVC:(id)arg1 didCommitWithCellVM:(id)arg2;
- (void)assetClipperVC:(id)arg1 didClickLaunchMJApp:(_Bool)arg2 withCellVMList:(id)arg3;
- (void)assetClipperVC:(id)arg1 didShowLaunchMJApp:(_Bool)arg2;
- (void)assetClipperVC:(id)arg1 didPlaySegmentWithId:(id)arg2 forTimeRangeInClip:(CDStruct_e83c9415)arg3;
- (void)assetClipperVC:(id)arg1 didSeekSegmentWithId:(id)arg2 toTimeInClip:(CDStruct_1b6d18a9)arg3;
- (id)assetClipperVC:(id)arg1 didFindAssetInfoForLocalIdentifier:(id)arg2 orAssetFilePath:(id)arg3;
- (void)_adjustPreviewRenderViewToFitAssetClipperShowing;
- (void)relayoutAssetClipper;
- (void)_updateAssetClipperVCDataSource;
- (void)dismissAssetClipperVC;
- (void)_showAssetClipperVC;
- (void)showAssetClipperVC;
- (void)handleBGMPanelVCHeightDidChangeTo:(double)arg1;
- (void)bgmSelectedViewController:(id)arg1 didChangeVisibleHeight:(double)arg2;
- (void)resizeBGMPanelTransformIfNeeded;
- (struct CGRect)_renderViewAvailableFrameWithBGMPanelVCHeight:(double)arg1;
- (struct CGRect)_renderViewAvailableFrame;
- (void)bgmSelectedViewControllerDidCloseSearchView:(id)arg1 latestSelectedMusic:(id)arg2;
- (void)recreateRenderingMusicIfNeeded;
- (void)bgmSelectedViewControllerWillClose:(id)arg1;
- (void)bgmSelectedViewController:(id)arg1 didClickOSTOnBtn:(_Bool)arg2;
- (void)bgmSelectedViewController:(id)arg1 didClickMusicOnBtn:(_Bool)arg2;
- (void)bgmSelectedViewController:(id)arg1 didSearchWithKey:(id)arg2;
- (void)bgmSelectedViewControllerDidClickSearchBar:(id)arg1;
- (void)bgmSelectedViewController:(id)arg1 willShowMusic:(id)arg2 tabIndex:(unsigned long long)arg3 musicIndex:(unsigned long long)arg4;
- (void)handleWillSelectMusicInfo:(id)arg1 atIndex:(long long)arg2 tabIndex:(unsigned long long)arg3;
- (id)bgmSelectedViewController:(id)arg1 willSelectMusic:(id)arg2 indexPath:(id)arg3 tabIndex:(unsigned long long)arg4;
- (void)handleSelectedSearchMusicInfo:(id)arg1 atIndex:(long long)arg2;
- (void)bgmSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 isTriggerByTap:(_Bool)arg5;
- (id)createBGMPanelTabModels;
- (void)setupBGMPanelVC;
- (void)selectRenderingMusicInfo;
- (void)_showBGMPanelVC;
- (void)dismissBGMPanelVCWithAnimation:(_Bool)arg1;
- (void)showBGMPanelVC;
- (void)removeChildVC:(id)arg1;
- (void)addChildVC:(id)arg1;
- (void)_dismissAllStackFragment;
- (void)dismissFragment:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)showFragment:(id)arg1 animated:(_Bool)arg2 exclusive:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_initMusicBarIfNeeded;
- (void)onCloseMusicBarVC:(id)arg1;
- (void)musicBarVC:(id)arg1 didClickSearchButton:(id)arg2;
- (void)handleStatusChangedForMusic:(_Bool)arg1 isOSTEnabled:(_Bool)arg2 isLyricsEnabled:(_Bool)arg3;
- (void)musicBarVC:(id)arg1 didChangeStatusForMusic:(id)arg2 isBGMEnabled:(_Bool)arg3 isOSTEnabled:(_Bool)arg4;
- (void)handleSelectedMusicInfo:(id)arg1 atIndex:(long long)arg2 showsLoading:(_Bool)arg3;
- (void)musicBarVC:(id)arg1 didSelectMusic:(id)arg2 atIndex:(id)arg3;
- (void)musicBarVC:(id)arg1 willShowMusic:(id)arg2 atIndex:(id)arg3;
- (void)relayoutMusicBar;
- (void)updateMusicBarVC;
- (void)_showMusicBarVC;
- (void)showMusicBarVC;
- (void)_initMusicSearcherIfNeeded;
- (void)musicSearcherVC:(id)arg1 didRequestAudioModule:(_Bool)arg2;
- (void)musicSearcherVC:(id)arg1 didCancelWithMusic:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didCommitMusic:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didSelectMusic:(id)arg2 atIndex:(id)arg3;
- (void)musicSearcherVC:(id)arg1 didRequestSearchKey:(id)arg2;
- (void)relayoutMusicSearcher;
- (void)muteMusicSearcherVC:(_Bool)arg1;
- (void)showMusicSearcherVC;
- (void)_onClickPreviewRenderView;
- (void)showPreviewErrorAlertWithError:(id)arg1;
- (void)_relayoutProgressLoadingView;
- (void)_updateLoadingUserInteraction:(_Bool)arg1;
- (void)stopProgressLoadingWithText:(id)arg1 success:(_Bool)arg2 delayCompletion:(CDUnknownBlockType)arg3;
- (void)startProgressLoadingWithText:(id)arg1 progress:(double)arg2 canCancel:(_Bool)arg3;
- (void)startProgressLoadingInfinityWithText:(id)arg1 canCancel:(_Bool)arg2;
- (void)_relayoutPreviewRenderViewWithContainerFrame:(struct CGRect)arg1;
- (struct CGRect)_fitRenderViewInsideFrame:(struct CGRect)arg1 paddingTop:(double)arg2 paddingBottom:(double)arg3 canReachOut:(_Bool)arg4;
- (void)_resetPreviewRenderViewTransformForContainerFrame:(struct CGRect)arg1;
- (void)resetPreviewRenderViewTransformForDefaultSize;
- (_Bool)transformPreviewRenderViewWithContainerFrame:(struct CGRect)arg1;
- (void)checkPreviewRenderView;
- (void)checkFirstFrameView;
- (void)_initTemplateBarIfNeeded;
- (id)changingTempalteInTemplateBarVC:(id)arg1;
- (void)templateBarVC:(id)arg1 didSelectCellVM:(id)arg2 repeated:(_Bool)arg3 atIndex:(id)arg4;
- (_Bool)templateBarVC:(id)arg1 willSelectCellVM:(id)arg2 atIndex:(id)arg3;
- (void)templateBarVC:(id)arg1 willShowTemplate:(id)arg2 atIndex:(id)arg3;
- (void)relayoutTemplateBar;
- (void)updateTemplateBarVCSelection:(id)arg1;
- (void)updateTemplateBarVCDataSource;
- (void)showTemplateBarVC;
- (void)_initTemplateFlowIfNeeded;
- (void)_onTemplateFlowProvidedTemplateList:(id)arg1;
- (id)changingTempalteInTemplateFlowVC:(id)arg1;
- (void)templateFlowVC:(id)arg1 didCancelWithCellVM:(id)arg2 originalTemplate:(id)arg3;
- (void)templateFlowVC:(id)arg1 didCommitWithCellVM:(id)arg2 originalTemplate:(id)arg3;
- (void)templateFlowVC:(id)arg1 didSelectCellVM:(id)arg2 repeated:(_Bool)arg3 atIndex:(id)arg4;
- (_Bool)templateFlowVC:(id)arg1 willSelectCellVM:(id)arg2 atIndex:(id)arg3;
- (void)templateFlowVC:(id)arg1 didSlideToHanging:(double)arg2;
- (void)templateFlowVC:(id)arg1 didSlideToShowing:(double)arg2;
- (void)templateFlowVC:(id)arg1 didSlideFromOriginalTop:(double)arg2 withDiffTop:(double)arg3;
- (void)templateFlowVC:(id)arg1 didChangeScrolling:(_Bool)arg2;
- (void)templateFlowVC:(id)arg1 willShowCellVM:(id)arg2 atIndexPath:(id)arg3;
- (void)templateFlowVC:(id)arg1 didLoadMoreWithBlock:(CDUnknownBlockType)arg2;
- (void)_adjustPreviewRenderViewToFitTemplateFlowHanging;
- (void)_adjustPreviewRenderViewToFitTemplateFlowShowing;
- (void)_adjustPreviewRenderViewtoFitTemplateFlowCurrently;
- (void)resizeTemplateFlowTransformToHanging:(_Bool)arg1;
- (void)relayoutTemplateFlow;
- (void)updateTemplateFlowVCSelection:(id)arg1;
- (void)updateTemplateFlowVCDataSource;
- (void)dismissTemplateFlowVC;
- (void)showTemplateFlowVC;
- (void)_initTemplatePanelIfNeeded;
- (void)onCloseTemplatePanelSelector:(id)arg1;
- (void)templatePanelSelector:(id)arg1 didSelectTemplate:(id)arg2 index:(id)arg3;
- (void)relayoutTemplatePanel;
- (void)showTemplatePanelVC;
- (void)_onClickCancelButton;
- (void)exportTemplateVideo;
- (void)_onClickDoneButton;
- (void)onMusicInfoMarqueeViewClicked:(id)arg1;
- (void)updateMusicInfoBar;
- (void)relayoutTopActionBar;
- (void)initTopActionBarView;
- (void)disableTopActionBarViewThatExceptsCancelButton;
- (void)disableTopActionBarView;
- (void)enableTopActionBarView;
- (void)showTopActionBarViewThatExceptsCancelButton;
- (void)hideTopActionBarViewThatExceptsCancelButton;
- (void)hideTopActionBarView;
- (void)showTopActionBarView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

