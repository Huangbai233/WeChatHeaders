//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CADisplayLink, CAShapeLayer, EmoticonBoardCrossCollectionController, EmoticonBoardDynamicTabBar, EmoticonBoardViewConfig, EmoticonCustomAddLogicController, EmoticonPreviewWindowViewController, NSString, QQEmojiPreview, UIColor, UIImageView, UIView;
@protocol BaseEmoticonViewDelegate, EmoticonBoardViewDelegate;

@interface EmoticonBoardView
{
    id <BaseEmoticonViewDelegate> m_emoticonSendDelegate;
    UIView *m_backgroundView;
    CAShapeLayer *m_topCornerLayer;
    EmoticonBoardCrossCollectionController *m_pageCollectionController;
    EmoticonBoardDynamicTabBar *m_dynamicTabBar;
    QQEmojiPreview *m_qqEmojiPreview;
    EmoticonPreviewWindowViewController *m_emoticonPreview;
    unsigned long long _boardShowTime;
    unsigned long long _boardQQEmojiClickIndex;
    unsigned long long _boardEmoticonClickIndex;
    unsigned long long _boardTabBarClickIndex;
    EmoticonCustomAddLogicController *m_emoticonAddLogicController;
    _Bool _dataLoaded;
    _Bool _lazyReload;
    _Bool _hideRightBottomBtns;
    _Bool _needReloadBeforeReuse;
    _Bool _hasCorner;
    _Bool _hasFoldButton;
    _Bool _allowExpand;
    _Bool _lastSessionForbidGameEmoticon;
    _Bool _isFirstReload;
    _Bool _isFirstLayout;
    _Bool _isInChat;
    _Bool _isExpanding;
    _Bool _lastExpandedStates;
    _Bool _shouldTreatFrameUpdateTenderly;
    id <EmoticonBoardViewDelegate> _m_delegate;
    unsigned long long _emojiUseScene;
    unsigned long long _viewType;
    EmoticonBoardViewConfig *_viewConfig;
    NSString *_finishButtonTitle;
    unsigned long long _style;
    UIColor *_customBackgroundColor;
    unsigned long long _recentPulledByCameraEmoticonLabelTime;
    NSString *_externInfo;
    UIImageView *_ipMergeAnimationMaskView;
    CADisplayLink *_expandDisplayLink;
}

+ (double)defaultHeight;
+ (void)unRegisterInstanceDelegate;
+ (void)destroyInstance;
+ (_Bool)isChatInstanceAvailable;
+ (id)shareInstanceForChat;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldTreatFrameUpdateTenderly; // @synthesize shouldTreatFrameUpdateTenderly=_shouldTreatFrameUpdateTenderly;
@property(retain, nonatomic) CADisplayLink *expandDisplayLink; // @synthesize expandDisplayLink=_expandDisplayLink;
@property(nonatomic) _Bool lastExpandedStates; // @synthesize lastExpandedStates=_lastExpandedStates;
@property(nonatomic) _Bool isExpanding; // @synthesize isExpanding=_isExpanding;
@property(nonatomic) _Bool isInChat; // @synthesize isInChat=_isInChat;
@property(nonatomic) _Bool isFirstLayout; // @synthesize isFirstLayout=_isFirstLayout;
@property(nonatomic) _Bool isFirstReload; // @synthesize isFirstReload=_isFirstReload;
@property(retain, nonatomic) UIImageView *ipMergeAnimationMaskView; // @synthesize ipMergeAnimationMaskView=_ipMergeAnimationMaskView;
@property(retain, nonatomic) NSString *externInfo; // @synthesize externInfo=_externInfo;
@property(nonatomic) unsigned long long recentPulledByCameraEmoticonLabelTime; // @synthesize recentPulledByCameraEmoticonLabelTime=_recentPulledByCameraEmoticonLabelTime;
@property(nonatomic) _Bool lastSessionForbidGameEmoticon; // @synthesize lastSessionForbidGameEmoticon=_lastSessionForbidGameEmoticon;
@property(nonatomic) _Bool allowExpand; // @synthesize allowExpand=_allowExpand;
@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(nonatomic) _Bool hasFoldButton; // @synthesize hasFoldButton=_hasFoldButton;
@property(nonatomic) _Bool hasCorner; // @synthesize hasCorner=_hasCorner;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) _Bool needReloadBeforeReuse; // @synthesize needReloadBeforeReuse=_needReloadBeforeReuse;
@property(nonatomic) _Bool hideRightBottomBtns; // @synthesize hideRightBottomBtns=_hideRightBottomBtns;
@property(retain, nonatomic) NSString *finishButtonTitle; // @synthesize finishButtonTitle=_finishButtonTitle;
@property(retain, nonatomic) EmoticonBoardViewConfig *viewConfig; // @synthesize viewConfig=_viewConfig;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) _Bool lazyReload; // @synthesize lazyReload=_lazyReload;
@property(nonatomic) unsigned long long emojiUseScene; // @synthesize emojiUseScene=_emojiUseScene;
@property(nonatomic) __weak id <EmoticonBoardViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onPageNeedResetExpand;
- (_Bool)isExpandEnabled;
- (void)resetExpandStatus;
- (void)expandAlongSideTick;
- (void)runAnimationForTargetHeight:(double)arg1 isHeightChangeTriggled:(_Bool)arg2;
- (void)onPageExpandToggled;
- (void)onPageScrollEndedWithVelocity:(double)arg1;
- (void)onPageDidScrollWithOffsetY:(double)arg1;
- (_Bool)onPageScrollStartWithVelocity:(double)arg1;
- (_Bool)shouldTriggleHeightChangeForVelocity:(double)arg1;
- (double)collectionExpectedHeight;
- (double)forceTriggleHeihgtChangeVelocity;
- (double)expectedHeight;
- (double)autoExpandMaxHeight;
- (double)autoExpandThreshold;
- (_Bool)isExpanded;
- (void)onFontSizeChange;
- (id)voiceOverNotifyViewForChat;
- (id)accessibilityElements;
- (long long)overrideUserInterfaceStyle;
- (void)updateCustomOrCameraEmoticonWithType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverNetworkChangeToUnreachableForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrSyncOperateForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverFailedForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverCompleteForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverNotifyProgressForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverPartSyncFinishedForType:(unsigned int)arg1;
- (void)onLimitedModeChanged;
- (int)getDynamicSearchItemDisplayMode;
- (_Bool)needReportCustomEmoticonShow;
- (void)onConfirmIPMerge;
- (void)pushToDesignerProfile:(id)arg1 redotReporter:(id)arg2;
- (id)attachmentAnchorView;
- (void)onShouldShowEmoticonDetailPage:(id)arg1;
- (void)onFinishPreviewAndChangeToPid:(id)arg1;
- (void)onTrySyncAnotherPartCustomEmoticon;
- (void)onTrySyncAnotherPartCameraEmoticon;
- (void)showEmoticonPreviewForWrap:(id)arg1 description:(id)arg2 pageWrapPid:(id)arg3 cellIndex:(unsigned long long)arg4 frame:(struct CGRect)arg5;
- (void)hideQQEmojiPreview;
- (void)showQQEmojiPreviewForKey:(id)arg1 atCenterPoint:(struct CGPoint)arg2 hideDesc:(_Bool)arg3;
- (void)onTapRecommendWithPid:(id)arg1;
- (void)onTapCameraEmoticonCreateButton;
- (void)onTapEmoticonWrap:(id)arg1 atIndex:(long long)arg2 maxCountPerLine:(unsigned long long)arg3 fromSection:(id)arg4;
- (void)onTapQQEmojiDeleteButton;
- (void)onTapQQEmojiSendButton;
- (_Bool)shouldShowQQEmojiSendButton;
- (void)onTapQQEmojiWithCode:(id)arg1 isRecentUse:(_Bool)arg2 atIndex:(long long)arg3 maxCountPerLine:(unsigned long long)arg4;
- (void)didChangeToPage:(id)arg1;
- (void)onEmoticonBoardDynamicTabBarClickFloatingFoldButton;
- (void)onEmoticonBoardDynamicTabBarClickSearchItem;
- (void)onEmoticonBoardDynamicTabBarClickSettingItem;
- (void)onEmoticonBoardDynamicTabBarClickStorePlusItem;
- (void)onEmoticonBoardDynamicTabBarTabBarClickItem:(id)arg1 atIndex:(long long)arg2;
- (id)getViewController;
- (void)onUploadEmoticonQueueChanged;
- (void)onAddBackupEmoticonOK:(id)arg1 addEmoticonWrap:(id)arg2;
- (void)onMMDynamicConfigUpdated;
- (void)OnEmoticonTabRecommendChanged;
- (void)onPreQuit;
- (void)onLanguageChange;
- (void)OnEmoticonRecommendNewStateChangedForBoardView:(_Bool)arg1;
- (void)OnEmoticonPackIPSetKeyChanged:(id)arg1;
- (void)OnUpdateEmoticonPackageListFor:(unsigned long long)arg1 WithPid:(id)arg2;
- (void)OnUpdateEmoticonListFor:(unsigned long long)arg1;
- (long long)emotionRecommandMaxCountConfig;
- (id)cameraPackageId;
- (id)customPackageId;
- (id)GetCurrentViewController;
- (void)loadAllDataAndView;
- (void)reloadUI;
- (_Bool)shouldHideTabbar;
- (void)layoutSubviews;
- (_Bool)selectTabOfPid:(id)arg1 forceFirstPage:(_Bool)arg2 animated:(_Bool)arg3;
- (void)changeTabToPid:(id)arg1;
- (void)changeToPidPosition:(id)arg1;
- (void)showAddEmoticonActionSheet;
- (void)reloadEmoticonAndEmojiData;
- (void)reloadPageControllerWithBoardData:(id)arg1 recommandData:(id)arg2;
- (void)reloadTabItemsWithBoardData:(id)arg1 andRecommandData:(id)arg2;
- (void)reloadEmoticonViewData;
- (void)reloadTabBarWithTabItems:(id)arg1;
- (id)getRecommandBoardDataWithPackageArray:(id)arg1;
- (id)getEmoticonBoardDataWithPackageArray:(id)arg1;
- (id)getStickerPackages;
- (id)emoticonAddLogicController;
- (void)checkCustomEmoticonExposeReport;
- (void)resetEmotionBoardShowTimeAndClickIndex;
- (void)SetCanSend:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isSingleTab;
@property(readonly, nonatomic) double preferHeight;
- (void)UnRegisterDelegate;
- (void)RegisterDelegate:(id)arg1;
- (void)prepareForReuseWithoutReload;
- (_Bool)checkNeedReloadForReuse;
- (_Bool)isSticker;
- (void)forceHideEmoticonPreview;
- (void)reloadEmotionBoardView;
- (void)initView;
- (void)initData;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
