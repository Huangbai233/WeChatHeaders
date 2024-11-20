//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class EmoticonBoardView, MMUILabel, NSArray, NSIndexPath, NSString, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, UITableView, UITapGestureRecognizer, UIView, WCCommentDetailHeaderView, WCCommentDetailViewModel, WCCommentEmotionBoardViewContainerView, WCCommentInputView, WCFinderAnimationLoadingView, WCFinderCommentDetailTextView, WCFinderCommentIdentityActionSheetView, WCFinderCommentListHeaderRefreshView, WCFinderCommentSearchMentionContainerView, WCFinderCreateCoordinator, WCFinderHeadImageView, WCFinderPushFeedViewParams, WCFinderRefreshTableFooterView, WCInputController;
@protocol WCCommentDetailViewControllerDelegate;

@interface WCCommentDetailViewController
{
    _Bool _statusBarHidden;
    _Bool _disableCommentFunctions;
    _Bool _callFromDetail;
    _Bool _isCurrentRepaly;
    _Bool _isCurrentRepalySubComment;
    _Bool _shouldSaveLastCommentIdentity;
    _Bool _showTitle;
    WCCommentDetailViewModel *_viewModel;
    CDUnknownBlockType _beforePushVCBlock;
    CDUnknownBlockType _afterPopVCBlock;
    id <WCCommentDetailViewControllerDelegate> _delegate;
    UITableView *_tableView;
    WCFinderCommentDetailTextView *_growTextView;
    UIView *_textViewBackGroundView;
    WCCommentInputView *_inputBackView;
    UITapGestureRecognizer *_tapGesture;
    NSIndexPath *_currentRepalyIndexPath;
    WCCommentDetailHeaderView *_headerView;
    WCFinderCommentSearchMentionContainerView *_searchMentionContainerView;
    UIView *_containerView;
    WCFinderRefreshTableFooterView *_footerView;
    UIButton *_mentionButton;
    UIButton *_expressionButton;
    UIButton *_backgroundButton;
    EmoticonBoardView *_emoticonBoardView;
    WCCommentEmotionBoardViewContainerView *_emoticonBoardViewContainerView;
    WCInputController *_inputController;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    WCFinderAnimationLoadingView *_loadingView;
    UIView *_commentBackgroundView;
    unsigned long long _createTime;
    UIPanGestureRecognizer *_panGesture;
    WCFinderCommentListHeaderRefreshView *_headerRefreshView;
    UIView *_emptyHeaderView;
    UIView *_inputBottomView;
    UIView *_authenticationErrorHeaderView;
    UILabel *_commentCloseTips;
    UIView *_lastTipHeaderView;
    unsigned long long _lastTipHeaderType;
    WCFinderCreateCoordinator *_createCoordinator;
    unsigned long long _commentTextMaxLimit;
    UIScreenEdgePanGestureRecognizer *_popBackInteractivePopGesture;
    unsigned long long _commentStyleType;
    double _inputViewDefaultHeight;
    MMUILabel *_educateDoubleIdentityLabel;
    UIView *_educateDoubleIdentityShadowView;
    UIView *_triangleBViewShadowView;
    UIImageView *_triangleBView;
    NSIndexPath *_indexPath;
    WCFinderHeadImageView *_avatarImageView;
    UIImageView *_iconImageView;
    WCFinderCommentIdentityActionSheetView *_identityActionSheet;
    double _lastCloseTimestamp;
    WCFinderPushFeedViewParams *_funcParams;
    NSArray *_rightButtons;
}

+ (void)showWithCommentObject:(id)arg1 refCommentId:(unsigned long long)arg2 viewController:(id)arg3;
+ (id)viewControllerWithCommentObject:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *rightButtons; // @synthesize rightButtons=_rightButtons;
@property(retain, nonatomic) WCFinderPushFeedViewParams *funcParams; // @synthesize funcParams=_funcParams;
@property(nonatomic) _Bool showTitle; // @synthesize showTitle=_showTitle;
@property(nonatomic) _Bool shouldSaveLastCommentIdentity; // @synthesize shouldSaveLastCommentIdentity=_shouldSaveLastCommentIdentity;
@property(nonatomic) double lastCloseTimestamp; // @synthesize lastCloseTimestamp=_lastCloseTimestamp;
@property(retain, nonatomic) WCFinderCommentIdentityActionSheetView *identityActionSheet; // @synthesize identityActionSheet=_identityActionSheet;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIImageView *triangleBView; // @synthesize triangleBView=_triangleBView;
@property(retain, nonatomic) UIView *triangleBViewShadowView; // @synthesize triangleBViewShadowView=_triangleBViewShadowView;
@property(retain, nonatomic) UIView *educateDoubleIdentityShadowView; // @synthesize educateDoubleIdentityShadowView=_educateDoubleIdentityShadowView;
@property(retain, nonatomic) MMUILabel *educateDoubleIdentityLabel; // @synthesize educateDoubleIdentityLabel=_educateDoubleIdentityLabel;
@property(nonatomic) double inputViewDefaultHeight; // @synthesize inputViewDefaultHeight=_inputViewDefaultHeight;
@property(nonatomic) unsigned long long commentStyleType; // @synthesize commentStyleType=_commentStyleType;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackInteractivePopGesture; // @synthesize popBackInteractivePopGesture=_popBackInteractivePopGesture;
@property(nonatomic) unsigned long long commentTextMaxLimit; // @synthesize commentTextMaxLimit=_commentTextMaxLimit;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(nonatomic) unsigned long long lastTipHeaderType; // @synthesize lastTipHeaderType=_lastTipHeaderType;
@property(nonatomic) __weak UIView *lastTipHeaderView; // @synthesize lastTipHeaderView=_lastTipHeaderView;
@property(retain, nonatomic) UILabel *commentCloseTips; // @synthesize commentCloseTips=_commentCloseTips;
@property(retain, nonatomic) UIView *authenticationErrorHeaderView; // @synthesize authenticationErrorHeaderView=_authenticationErrorHeaderView;
@property(nonatomic) __weak UIView *inputBottomView; // @synthesize inputBottomView=_inputBottomView;
@property(retain, nonatomic) UIView *emptyHeaderView; // @synthesize emptyHeaderView=_emptyHeaderView;
@property(retain, nonatomic) WCFinderCommentListHeaderRefreshView *headerRefreshView; // @synthesize headerRefreshView=_headerRefreshView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) UIView *commentBackgroundView; // @synthesize commentBackgroundView=_commentBackgroundView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) WCCommentEmotionBoardViewContainerView *emoticonBoardViewContainerView; // @synthesize emoticonBoardViewContainerView=_emoticonBoardViewContainerView;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) UIButton *mentionButton; // @synthesize mentionButton=_mentionButton;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WCFinderCommentSearchMentionContainerView *searchMentionContainerView; // @synthesize searchMentionContainerView=_searchMentionContainerView;
@property(retain, nonatomic) WCCommentDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool isCurrentRepalySubComment; // @synthesize isCurrentRepalySubComment=_isCurrentRepalySubComment;
@property(retain, nonatomic) NSIndexPath *currentRepalyIndexPath; // @synthesize currentRepalyIndexPath=_currentRepalyIndexPath;
@property(nonatomic) _Bool isCurrentRepaly; // @synthesize isCurrentRepaly=_isCurrentRepaly;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) WCCommentInputView *inputBackView; // @synthesize inputBackView=_inputBackView;
@property(retain, nonatomic) UIView *textViewBackGroundView; // @synthesize textViewBackGroundView=_textViewBackGroundView;
@property(retain, nonatomic) WCFinderCommentDetailTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCCommentDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool callFromDetail; // @synthesize callFromDetail=_callFromDetail;
@property(nonatomic) _Bool disableCommentFunctions; // @synthesize disableCommentFunctions=_disableCommentFunctions;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(copy, nonatomic) CDUnknownBlockType afterPopVCBlock; // @synthesize afterPopVCBlock=_afterPopVCBlock;
@property(copy, nonatomic) CDUnknownBlockType beforePushVCBlock; // @synthesize beforePushVCBlock=_beforePushVCBlock;
@property(retain, nonatomic) WCCommentDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)commentDetailTextViewDidInputValidMentionCharacter;
- (id)getSafeSearchViewController;
- (_Bool)onShouldSelectContact:(id)arg1;
- (void)onSelectContact:(id)arg1;
- (void)commentSearchMentionContainerViewShouldBeClosed;
- (void)hideSearchMentionContainerView;
- (void)showSearchMentionContainerView;
- (_Bool)isInSubScene;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (_Bool)hidesStatusBar;
- (_Bool)shouldStopPlayingVideo;
- (id)viewmodelOfCommentVC;
- (_Bool)presentWithAnimation;
- (void)enterShowKeyBoard;
- (_Bool)canUseCache;
- (unsigned long long)commentViewControllerShowType;
- (void)onHalfScreenPageWillClose:(id)arg1 action:(long long)arg2;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)clickToToast;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (struct CGRect)containerViewFrame;
- (_Bool)isCommentFunctionEnable;
- (void)reportUserComment:(id)arg1;
- (_Bool)isSelfComment:(id)arg1;
- (_Bool)isSelfPostComment:(id)arg1;
- (_Bool)isFinderComment:(unsigned long long)arg1;
- (void)showDeleteconfirmActionSheetWithComment:(id)arg1 rootComment:(id)arg2;
- (void)onFinderCommentCopy:(id)arg1;
- (void)showActionSheetWithComment:(id)arg1 rootComment:(id)arg2;
- (void)previewMediaWithComment:(id)arg1;
- (void)wcCommentSubCommentTableViewCell:(id)arg1 didClickMediaViewWithComment:(id)arg2;
- (void)wcCommentSubCommentTableViewCell:(id)arg1 dislikeComment:(id)arg2 atIndexPath:(id)arg3;
- (void)wcCommentSubCommentTableViewCell:(id)arg1 likeComment:(id)arg2 atIndexPath:(id)arg3;
- (void)wcCommentSubCommentTableViewCell:(id)arg1 clickReplyUsername:(id)arg2 atIndexPath:(id)arg3;
- (void)onClickSubCommentAvatar:(id)arg1;
- (void)feedDetailCommentCellOnLongPress:(id)arg1;
- (void)onClickSubCommentReadMore:(id)arg1 isExpand:(_Bool)arg2;
- (void)finderFeedDataItemUpdate:(id)arg1;
- (void)startLoadingNextPage;
- (void)retryFetchNextPage;
- (void)showRetryNextPageFetchView;
- (void)retryEmptyFetchAction:(id)arg1;
- (void)showEmptyRetryFetchView;
- (void)onFinderCardWebViewControllerWillBeClosed;
- (void)onFinderCardWebViewControllerWillResume;
- (void)_updateCommentDetailVCPushState;
- (void)onFinderCardWebViewControllerJumpToOthers;
- (void)reloadSubCommentListWithRootComment:(unsigned long long)arg1;
- (void)reloadSectionWith:(unsigned long long)arg1;
- (void)showEmptyTipsView;
- (void)stopLoadingView;
- (void)commentDetailViewModel:(id)arg1 willPostSubcomment:(id)arg2;
- (void)commentDetailViewModelcommentEntityCloseStatusChange:(id)arg1;
- (void)commentDetailViewModel:(id)arg1 subCommentFetchFailWithCommentID:(unsigned long long)arg2 direction:(int)arg3 retCode:(int)arg4;
- (void)commentDetailViewModel:(id)arg1 commentFetchByRefCommentWithEntityId:(id)arg2 refCommentID:(unsigned long long)arg3 refCommentIndexPath:(id)arg4;
- (void)commentDetailViewModel:(id)arg1 commentFetchWithSpecialCode:(int)arg2;
- (void)commentDetailViewModel:(id)arg1 commentPostNetworkError:(int)arg2 errorMessage:(id)arg3 comment:(id)arg4;
- (void)commentDetailViewModel:(id)arg1 commentWithNetworkError:(int)arg2 entityId:(id)arg3 direction:(int)arg4;
- (void)commentDetailViewModel:(id)arg1 subCommentPostEntity:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)commentDetailViewModelCommentEntityWasDeleted:(id)arg1;
- (void)commentDetailViewModel:(id)arg1 onSubCommentDataChangedWithRootCommentId:(unsigned long long)arg2;
- (void)commentDetailViewModel:(id)arg1 onClickRefcontentFullTextWithEntityId:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)commentDetailViewModel:(id)arg1 onCommentClickFullTextWithEntityId:(id)arg2 rootCommentId:(unsigned long long)arg3;
- (void)commentDetailViewModel:(id)arg1 onCommentClickLikeWithEntityId:(id)arg2 rootCommentId:(unsigned long long)arg3;
- (void)commentDetailViewModel:(id)arg1 commentPostWithEntityId:(id)arg2 commentId:(unsigned long long)arg3;
- (void)commentDetailViewModel:(id)arg1 onCommentEntityDataChanged:(id)arg2;
- (void)commentDetailViewModel:(id)arg1 onCommentEmptyWithEntityId:(id)arg2;
- (void)commentDetailViewModel:(id)arg1 onNoMoreMoreDataWithEntityId:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showCommentProfileViewWithComment:(id)arg1;
- (void)rootCommentCell:(id)arg1 didClickMediaViewWithComment:(id)arg2;
- (void)rootCommentCell:(id)arg1 clickCommentRepostAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickAvatarAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 longPressAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickFullRefContentTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)rootCommentCell:(id)arg1 clickFullTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)rootCommentCell:(id)arg1 dislikeCommentSection:(unsigned long long)arg2 comment:(id)arg3;
- (void)rootCommentCell:(id)arg1 likeCommentSection:(unsigned long long)arg2;
- (void)handleLikeOrDislikeWithIsDislike:(_Bool)arg1 section:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickTextViewAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickReplyUsername:(id)arg2 atSection:(unsigned long long)arg3;
- (void)onClickSubCommentWeChat:(id)arg1;
- (void)onClickSubCommentFinder:(id)arg1;
- (void)showCommentUserProfileWithComment:(id)arg1;
- (void)replySubCommentAtIndex:(id)arg1 cell:(id)arg2;
- (void)replyRootCommentAtSection:(unsigned long long)arg1 cell:(id)arg2;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handlePopGesture:(id)arg1;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)keyboardDidShow:(double)arg1;
- (void)keyboardWillHide;
- (void)MMGrowTextViewDidPasted:(id)arg1 pastedText:(id)arg2;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (id)willPostComment:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)didCommitEmptyText;
- (_Bool)canCommitWithText:(id)arg1;
- (void)clearCurrentInput;
- (void)growTextViewDidClickSendWithText:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewTextDidChange;
- (void)keyboardDidHide;
- (void)closeCommentVC;
- (void)onClickCloseCommentDetailHeaderBtn;
- (void)hideErrorTips;
- (void)showErrorTipsWithType:(unsigned long long)arg1;
- (void)clickErrorHeaderViewAction;
- (void)resignResponder;
- (void)exitEnterComment;
- (void)scrollCommentToTop;
- (void)performShowHalfScreenAnimation;
- (void)viewWillBePresented:(_Bool)arg1;
- (_Bool)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (_Bool)commentFunctionIsSpam;
- (double)inputViewYForInputController;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)requestInitDataWithAnimation;
- (_Bool)_isLimitedByYoungCheck;
- (void)updateCommentSpamState;
- (void)updateCommetIdentityView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (double)headerheight;
- (void)updateTextViewPostCommentIdentity;
- (void)updateCommentIdentityStatus;
- (void)showEducateDoubleIdentityLabel;
- (void)hiddenEducateDoubleIdentityLabel;
- (void)clickCommentIdentityChange;
- (void)addGrowTextView;
- (id)postAuthorIconImageColor;
- (void)onMentionButtonClicked:(id)arg1;
- (void)onBackgroundButtonClicked:(id)arg1;
- (_Bool)canShowMentionButton;
- (void)checkMentionStateWhenSwitchIdentity;
- (void)setGrowTextViewPlaceholderWithReplyNickname:(id)arg1 isDefaultComment:(_Bool)arg2 useVMData:(_Bool)arg3;
- (struct CGSize)inputBackViewSize;
- (void)layoutInputBackView;
- (void)setupInputView;
- (void)updateViewModelReplyScene:(int)arg1;
- (void)setUpTextView;
- (double)defaultInputBottomViewHeight;
- (id)cellTextThemeColor;
- (void)initEmoticonView;
- (void)configureTableView;
- (void)updateCommentCountTitle;
- (void)emoticonBoardViewWillHide;
- (void)emoticonBoardViewDidShow;
- (void)keyboardDidShow;
- (void)keyboardWillShow;
- (void)p_becomeFirstResponder;
- (void)tapBecomeFirstResponder;
- (void)activeInput;
- (void)initEducateDoubleIdentityLabel;
- (void)dealloc;
- (void)viewDidLoad;
- (id)generateHeaderView;
- (id)dataService;
- (void)resetUI;
- (void)restoreCommentIdentity;
- (void)correctCommentIdentity;
- (void)reloadLayout;
- (void)layoutIconImageView;
- (void)viewWillLayoutSubviews;
- (void)viewWillPop:(_Bool)arg1;
- (void)updateEducateLabelShowCount;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithViewModel:(id)arg1 showTitle:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
