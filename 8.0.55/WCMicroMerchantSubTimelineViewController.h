//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EGORefreshTableHeaderView, MMUIImageView, MMUILabel, MicroMerchantTableViewModel, NSString, UIView, WCActionButtonFloatView, WCDataItem, WCMomentsShareScopeMgr, WCOperateFloatView, WCPasteTextLengthLogic, WCSubTimelineSessionMgr, WCTimeLineFooterView;
@protocol WCMicroMerchantSubTimelineViewControllerDelegate;

@interface WCMicroMerchantSubTimelineViewController
{
    _Bool _isViewDidAppear;
    _Bool _hasDataSourceChanged;
    _Bool _oldBlackList;
    _Bool _isEnhanceInteractionEnabled;
    _Bool _canReload;
    _Bool _startReload;
    _Bool _headerViewIsLoading;
    _Bool _delayStopFooterLoading;
    _Bool _hasSpeedyLoadView;
    _Bool _shouldReloadData;
    _Bool _shouldForbidRealodData;
    id <WCMicroMerchantSubTimelineViewControllerDelegate> _delegate;
    MMUIImageView *_arrowImageView;
    MMUILabel *_countLabel;
    NSString *_latestAutoplayVideoTid;
    WCPasteTextLengthLogic *_pastelogic;
    UIView *_footerViewContainer;
    WCTimeLineFooterView *_footerView;
    EGORefreshTableHeaderView *_headerView;
    WCOperateFloatView *_floatOperateView;
    WCActionButtonFloatView *_dislikeFloatView;
    WCSubTimelineSessionMgr *_subTimelineSessionMgr;
    MicroMerchantTableViewModel *_tableVm;
    WCDataItem *_placeHolder;
    WCDataItem *_cacheDateItem;
    NSString *_userName;
    WCMomentsShareScopeMgr *_shareScopeMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsShareScopeMgr *shareScopeMgr; // @synthesize shareScopeMgr=_shareScopeMgr;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) WCDataItem *cacheDateItem; // @synthesize cacheDateItem=_cacheDateItem;
@property(retain, nonatomic) WCDataItem *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) MicroMerchantTableViewModel *tableVm; // @synthesize tableVm=_tableVm;
@property(retain, nonatomic) WCSubTimelineSessionMgr *subTimelineSessionMgr; // @synthesize subTimelineSessionMgr=_subTimelineSessionMgr;
@property(retain, nonatomic) WCActionButtonFloatView *dislikeFloatView; // @synthesize dislikeFloatView=_dislikeFloatView;
@property(nonatomic) _Bool shouldForbidRealodData; // @synthesize shouldForbidRealodData=_shouldForbidRealodData;
@property(nonatomic) _Bool shouldReloadData; // @synthesize shouldReloadData=_shouldReloadData;
@property(nonatomic) _Bool hasSpeedyLoadView; // @synthesize hasSpeedyLoadView=_hasSpeedyLoadView;
@property(nonatomic) _Bool delayStopFooterLoading; // @synthesize delayStopFooterLoading=_delayStopFooterLoading;
@property(retain, nonatomic) WCOperateFloatView *floatOperateView; // @synthesize floatOperateView=_floatOperateView;
@property(nonatomic) _Bool headerViewIsLoading; // @synthesize headerViewIsLoading=_headerViewIsLoading;
@property(retain, nonatomic) EGORefreshTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *footerViewContainer; // @synthesize footerViewContainer=_footerViewContainer;
@property(nonatomic) _Bool startReload; // @synthesize startReload=_startReload;
@property(nonatomic) _Bool canReload; // @synthesize canReload=_canReload;
@property(nonatomic) _Bool isEnhanceInteractionEnabled; // @synthesize isEnhanceInteractionEnabled=_isEnhanceInteractionEnabled;
@property(nonatomic) _Bool oldBlackList; // @synthesize oldBlackList=_oldBlackList;
@property(nonatomic) _Bool hasDataSourceChanged; // @synthesize hasDataSourceChanged=_hasDataSourceChanged;
@property(retain, nonatomic) WCPasteTextLengthLogic *pastelogic; // @synthesize pastelogic=_pastelogic;
@property(nonatomic) _Bool isViewDidAppear; // @synthesize isViewDidAppear=_isViewDidAppear;
@property(retain, nonatomic) NSString *latestAutoplayVideoTid; // @synthesize latestAutoplayVideoTid=_latestAutoplayVideoTid;
@property(retain, nonatomic) MMUILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) MMUIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak id <WCMicroMerchantSubTimelineViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onPrivacyActionSheet:(id)arg1 clickedAtIndex:(long long)arg2;
- (void)onDislike:(id)arg1;
- (void)ensureInitDislikeActionFloatView;
- (void)hideAndResetDislikeFloatView;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3 extraAdInfo:(id)arg4;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3 extraAdInfo:(id)arg4 clickSource:(long long)arg5 originView:(id)arg6;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned int)arg3 userData:(id)arg4;
- (void)handleAfterReloadTableView;
- (void)p_reloadTableViewContent;
- (void)scrollEndReloadTableView;
- (void)cacheInputText;
- (void)clearWCCache;
- (void)_reloadDataForTableView;
- (void)delayReload;
- (void)reloadDataWrap;
- (void)reloadTableView;
- (void)_fetchServerDataAndOverrideLocal:(_Bool)arg1;
- (void)onLoadMore;
- (void)refreshWholeView;
- (void)tryResumeStatus;
- (void)resetStatus:(_Bool)arg1;
- (void)onTimeLineViewReturn;
- (void)setAnimatedImageHidden:(_Bool)arg1 withTimeLineCellView:(id)arg2;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (double)maxGrowTextViewHeight;
- (void)updateGrowTextViewMaxHeight;
- (void)updateContentOffset;
- (void)_showAlreadyUnfoldedTitleFooter;
- (void)_showUnfoldButtonFooter;
- (void)_showFooterByCheckingFoldingState;
- (void)_onUnfoldActionSheet:(id)arg1 clickedAtIndex:(long long)arg2;
- (void)_showUnfoldActionSheet;
- (void)_resizeFooterView;
- (void)_initFooterView;
- (void)_initTableView;
- (void)onTouchDownLikeBtnOnFloatView;
- (void)onClickCommentBtnOnFloatView;
- (void)showComment:(id)arg1 refComment:(id)arg2 touchedView:(id)arg3 isActionAtAd:(_Bool)arg4;
- (double)totalHeightFromTopToSection:(unsigned long long)arg1;
- (void)editShield:(id)arg1 forScene:(long long)arg2;
- (void)editShield:(id)arg1;
- (void)editBlackList:(id)arg1 forSource:(long long)arg2;
- (void)hideMenu;
- (void)autoPauseLatestAutoplayVideo;
- (void)realAutoPlayVideo;
- (void)videoPreloadProcess;
- (void)throttleScrollProcess;
- (void)autoplayVideoProcess;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)panned:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)OnFinishComment:(_Bool)arg1;
- (void)showContactInfo;
- (_Bool)onRefreshFooterView:(id)arg1 clickedAtState:(unsigned long long)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)growTextViewDidClickSendWithText:(id)arg1;
- (void)onTextChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)textViewTextDidChange;
- (void)onHideKeyboard;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void)scrollToTop;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)mmTableView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)onCommentViewChangeTranslateLanguage:(id)arg1 ofDataItem:(id)arg2;
- (void)onCommentViewEmotionViewSingleClicked:(id)arg1 ofDataItem:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onRestoreCommentView:(id)arg1 ofDataItem:(id)arg2;
- (void)onReloadCommentView:(id)arg1 ofDataItem:(id)arg2;
- (void)onReplyComment:(id)arg1 ofDataItem:(id)arg2 ofTouchedView:(id)arg3;
- (void)onWCTimeLineCommentCellDeleteComment:(unsigned long long)arg1 ofDataItem:(id)arg2;
- (void)onWCTimeLineCommentCellOpenFullText:(id)arg1 ofDataItem:(id)arg2;
- (void)onCommentViewTopicTagClicked:(id)arg1 ofDataItem:(id)arg2 query:(id)arg3;
- (void)onCommentViewDidShowDeleteSelfCommentOption:(id)arg1;
- (void)onLinkClickedItem:(id)arg1 url:(id)arg2 backupUrl:(id)arg3 withRect:(struct CGRect)arg4 clickSource:(long long)arg5 originView:(id)arg6;
- (void)onLinkClickedItem:(id)arg1 url:(id)arg2 backupUrl:(id)arg3 withRect:(struct CGRect)arg4 extraInfo:(id)arg5;
- (void)onSearchTopicTagClicked:(id)arg1 query:(id)arg2;
- (id)getCachedMediaCellViewForData:(id)arg1;
- (void)cacheMediaCellView:(id)arg1 forData:(id)arg2;
- (void)onAdvertiseAction:(id)arg1 point:(struct CGPoint)arg2;
- (void)onRestoreTimeLineCellView:(id)arg1;
- (void)onActionClearCellCacheAndRefreshCellView:(id)arg1;
- (void)onShowOriginalTextFromTranslate:(id)arg1;
- (void)onEditBlackList:(id)arg1;
- (id)getCurTimeLineViewController;
- (id)getView;
- (void)onActionLocation:(id)arg1;
- (void)onTimeLineCellMoreMenu:(id)arg1 forScene:(unsigned int)arg2;
- (void)onTimeLineCellMoreMenu:(id)arg1;
- (void)onShowDetailViewForDataItem:(id)arg1;
- (void)onShowDetailChanged:(id)arg1 bShowDetailBeforeChange:(_Bool)arg2;
- (void)onUpdateDataItem:(id)arg1 oldHeight:(double)arg2 newHeight:(double)arg3;
- (void)onAccessibilityShowDetailDataItem:(id)arg1;
- (void)onAccessibilityCommentDataItem:(id)arg1;
- (void)onCommentDataItem:(id)arg1 point:(struct CGPoint)arg2;
- (void)onWCTimeLineCellViewChangeTranslateLanguage:(id)arg1;
- (void)onWCTimeLineCellViewShowGroup:(id)arg1;
- (void)onWCTimeLineCellViewShowProfile:(id)arg1;
- (void)onWCTimeLineCellViewActionMusic:(id)arg1;
- (void)onDismissViewController:(id)arg1 userName:(id)arg2;
- (void)onDeleteData;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)onTranslateSnsChangedFromPhotoContent:(id)arg1;
- (void)onViewSightOutFullScreen;
- (void)onViewSightInFullScreen;
- (void)onWCContentItemViewOutFullScreenAnimationComplete;
- (void)onWCContentItemViewOutFullScreen;
- (void)onWCContentItemViewWillEnterFullScreen;
- (void)onWCContentItemViewOpenedWebViewUseFastLoad:(id)arg1;
- (void)onWCContentItemViewExposeMenu:(id)arg1 scene:(long long)arg2;
- (void)onWCContentItemViewMoreMenu:(id)arg1 sender:(id)arg2;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)onViewAnimationWillHide;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3 extraInfo:(id)arg4;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onReveiceWCMessage:(id)arg1;
- (void)onCommentItemDeleteFinished:(long long)arg1 commentItemID:(id)arg2 dataItemID:(id)arg3;
- (void)onDataItemDeleteFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onNoMoreTimelineData;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onCommentOrLikeFailQueueChange;
- (void)onHotVideoOrHotImageItemChange;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onMenuControllerWillShow:(id)arg1;
- (void)tryLogThumbImageLoadedEffiency:(id)arg1;
- (void)showDetailView:(id)arg1;
- (void)showDetailViewForDataItem:(id)arg1 tipType:(long long)arg2;
- (void)showDetailViewForFoldedImage:(id)arg1;
- (void)showDetailViewForFoldedSight:(id)arg1;
- (void)showDetailViewForFailedCommentItem:(id)arg1;
- (void)showDetailViewForDataItem:(id)arg1;
- (void)hideFloatView;
- (unsigned long long)sectionIndexForDataItemWithTid:(id)arg1;
- (id)indexPathOfDataItem:(id)arg1;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)_resetNavBarItem;
- (void)didDisshow;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)willDisshow;
- (void)willDisappear;
- (_Bool)shouldInteractivePop;
- (void)adjustViewAndNavBarRect;
- (id)getViewController;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithGroupItem:(id)arg1 ofPlaceHolder:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

