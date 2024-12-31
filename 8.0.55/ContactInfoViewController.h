//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileEnterInfo, CBaseContactInfoAssist, CContact, CContactVerifyLogic, CMessageWrap, ForwardMessageLogicController, MMPageSheetAdapter, MMTimer, MMUIButton, MMUIView, NSData, NSDictionary, NSMutableDictionary, NSString, SendVerifyMsgLogicController, TextStatePrivacyMgr, TextStateProfileCardContentView, TextStateProfileDragAnimateHelper, UIButton, UITableView, WCStoryDragAnimationUtil;
@protocol ContactInfoViewControllerDelegate, contactInfoDelegate;

@interface ContactInfoViewController
{
    unsigned int m_uiVerify;
    CContact *m_contact;
    CContact *m_chatContact;
    id <contactInfoDelegate> m_delegate;
    id <ContactInfoViewControllerDelegate> m_InfoDelegate;
    CBaseContactInfoAssist *m_oContactInfoAssist;
    CContactVerifyLogic *m_contactVerifyLogic;
    NSString *m_nsLocation;
    _Bool m_bPopToRootWhenDelete;
    unsigned int m_uiFromScene;
    unsigned long long m_wcOperateMode;
    Class m_popToViewControllerClassWhenDelete;
    unsigned long long m_searchScene;
    id m_userData;
    double m_CurrentWidth;
    ForwardMessageLogicController *m_forwardLogic;
    unsigned int _startTime;
    SendVerifyMsgLogicController *m_sendVerifylogicVC;
    _Bool _m_bForbidPopWhenDeleteContact;
    _Bool _statusBarForceLightMode;
    _Bool _isFullScreenShowStory;
    _Bool _hasStoryData;
    _Bool _canShowStoryView;
    _Bool _isShowingStoryPreview;
    unsigned int _searchOpenIMContactScene;
    unsigned int _searchFromIndex;
    unsigned int _favId;
    unsigned long long m_uiAddFriendStatScene;
    unsigned long long _m_qrCodeAddFriendScene;
    NSMutableDictionary *_verifyUserInfoList;
    NSString *_m_nsAddContactRemind;
    NSData *_m_spamContext;
    NSString *_openIMContactUrl;
    NSString *_searchId;
    NSString *_searchKeyword;
    NSString *_searchExtraParamsString;
    CMessageWrap *_sourceMsg;
    NSString *_reportInfo;
    BrandProfileEnterInfo *_bpeInfo;
    NSString *_verifyContent;
    NSString *_searchClickId;
    NSDictionary *_extraSourceInfo;
    MMPageSheetAdapter *_pageSheetAdapter;
    UIButton *_preiviewMaskView;
    MMUIButton *_contactFrontView;
    WCStoryDragAnimationUtil *_storyAnimationUtil;
    TextStateProfileDragAnimateHelper *_textStateAnimateHelper;
    MMUIView *_frontTableViewBackGroundView;
    UITableView *_frontTableView;
    double _lastMovement;
    double _previewPositionY;
    TextStateProfileCardContentView *_textStateContentView;
    MMTimer *_textStateRefTimer;
    unsigned long long _enterTime;
    TextStatePrivacyMgr *_shareScopeMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStatePrivacyMgr *shareScopeMgr; // @synthesize shareScopeMgr=_shareScopeMgr;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) MMTimer *textStateRefTimer; // @synthesize textStateRefTimer=_textStateRefTimer;
@property(nonatomic) __weak TextStateProfileCardContentView *textStateContentView; // @synthesize textStateContentView=_textStateContentView;
@property(nonatomic) _Bool isShowingStoryPreview; // @synthesize isShowingStoryPreview=_isShowingStoryPreview;
@property(nonatomic) double previewPositionY; // @synthesize previewPositionY=_previewPositionY;
@property(nonatomic) double lastMovement; // @synthesize lastMovement=_lastMovement;
@property(nonatomic) __weak UITableView *frontTableView; // @synthesize frontTableView=_frontTableView;
@property(retain, nonatomic) MMUIView *frontTableViewBackGroundView; // @synthesize frontTableViewBackGroundView=_frontTableViewBackGroundView;
@property(nonatomic) _Bool canShowStoryView; // @synthesize canShowStoryView=_canShowStoryView;
@property(nonatomic) _Bool hasStoryData; // @synthesize hasStoryData=_hasStoryData;
@property(nonatomic) _Bool isFullScreenShowStory; // @synthesize isFullScreenShowStory=_isFullScreenShowStory;
@property(retain, nonatomic) TextStateProfileDragAnimateHelper *textStateAnimateHelper; // @synthesize textStateAnimateHelper=_textStateAnimateHelper;
@property(retain, nonatomic) WCStoryDragAnimationUtil *storyAnimationUtil; // @synthesize storyAnimationUtil=_storyAnimationUtil;
@property(retain, nonatomic) MMUIButton *contactFrontView; // @synthesize contactFrontView=_contactFrontView;
@property(retain, nonatomic) UIButton *preiviewMaskView; // @synthesize preiviewMaskView=_preiviewMaskView;
@property(nonatomic) _Bool statusBarForceLightMode; // @synthesize statusBarForceLightMode=_statusBarForceLightMode;
@property(nonatomic) __weak MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(retain, nonatomic) NSDictionary *extraSourceInfo; // @synthesize extraSourceInfo=_extraSourceInfo;
@property(retain, nonatomic) NSString *searchClickId; // @synthesize searchClickId=_searchClickId;
@property(retain, nonatomic) NSString *verifyContent; // @synthesize verifyContent=_verifyContent;
@property(retain, nonatomic) BrandProfileEnterInfo *bpeInfo; // @synthesize bpeInfo=_bpeInfo;
@property(nonatomic) unsigned int favId; // @synthesize favId=_favId;
@property(retain, nonatomic) NSString *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) CMessageWrap *sourceMsg; // @synthesize sourceMsg=_sourceMsg;
@property(retain, nonatomic) NSString *searchExtraParamsString; // @synthesize searchExtraParamsString=_searchExtraParamsString;
@property(nonatomic) unsigned int searchFromIndex; // @synthesize searchFromIndex=_searchFromIndex;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(nonatomic) unsigned int searchOpenIMContactScene; // @synthesize searchOpenIMContactScene=_searchOpenIMContactScene;
@property(retain, nonatomic) NSString *openIMContactUrl; // @synthesize openIMContactUrl=_openIMContactUrl;
@property(retain, nonatomic) NSData *m_spamContext; // @synthesize m_spamContext=_m_spamContext;
@property(retain, nonatomic) NSString *m_nsAddContactRemind; // @synthesize m_nsAddContactRemind=_m_nsAddContactRemind;
@property(retain, nonatomic) NSMutableDictionary *verifyUserInfoList; // @synthesize verifyUserInfoList=_verifyUserInfoList;
@property(nonatomic) unsigned long long m_qrCodeAddFriendScene; // @synthesize m_qrCodeAddFriendScene=_m_qrCodeAddFriendScene;
@property(nonatomic) _Bool m_bForbidPopWhenDeleteContact; // @synthesize m_bForbidPopWhenDeleteContact=_m_bForbidPopWhenDeleteContact;
@property(nonatomic) unsigned long long m_uiAddFriendStatScene; // @synthesize m_uiAddFriendStatScene;
@property(retain, nonatomic) id m_userData; // @synthesize m_userData;
@property(nonatomic) unsigned long long m_searchScene; // @synthesize m_searchScene;
@property(nonatomic) Class m_popToViewControllerClassWhenDelete; // @synthesize m_popToViewControllerClassWhenDelete;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene;
@property(nonatomic) _Bool m_bPopToRootWhenDelete; // @synthesize m_bPopToRootWhenDelete;
@property(retain, nonatomic) NSString *m_nsLocation; // @synthesize m_nsLocation;
@property(nonatomic) unsigned int m_uiVerify; // @synthesize m_uiVerify;
@property(nonatomic) __weak id <ContactInfoViewControllerDelegate> m_InfoDelegate; // @synthesize m_InfoDelegate;
@property(nonatomic) __weak id <contactInfoDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CContact *m_chatContact; // @synthesize m_chatContact;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void)pageSheetWillBePresentFrom:(id)arg1 inContainer:(id)arg2;
- (void)onWCStatusViewShowGroup:(id)arg1 view:(id)arg2;
- (_Bool)navigationController:(id)arg1 shouldUsePresentWhenPushViewController:(id)arg2 animated:(_Bool)arg3 scene:(unsigned long long)arg4;
- (void)registerYReportSdk;
- (double)getTableViewTopInset;
- (void)showHalfScreenFromViewController:(id)arg1 animated:(_Bool)arg2;
- (void)onTextStateDataUpdated;
- (void)onTextStateDataLoaded;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)onTapAtRedEnvelopeButton;
- (void)onTapAtIconButton;
- (void)onTapAtTextStateHeadButton;
- (void)onTapAtTextStateDetailButtonWithHandler:(id)arg1;
- (void)onTapCommentListButtonForCardView:(id)arg1;
- (void)onTapLikeListButtonForTextState:(id)arg1;
- (id)associateViewController;
- (void)onTextStateJumpRedEnvelope;
- (void)onTextStateExpand;
- (void)onTextStateJumpTopicSquare;
- (void)textStateJumpTopicSquareWithReporter:(id)arg1;
- (void)showRefTextStateActionSheet;
- (void)onFollowTextState;
- (void)updateTextStateExpandHeight;
- (void)setupTextStateDragAnimateHelper;
- (_Bool)shouldShowTextStateStyle;
- (id)getProfileIntroduceView;
- (void)onTextStateRefCurrent;
- (void)onTextStateJumpSource;
- (void)onTextStateDetailContentViewGenerated:(id)arg1 fittingHeight:(double)arg2;
- (void)addHeadViewElementToTextStateAnimateHelper:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutStoryViewWithStoryDataItem:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)reportEnter;
- (_Bool)shouldInteractivePop;
- (_Bool)isSeachActive;
- (void)onHDHeadImageWillDisappear;
- (void)onHDHeadImageWillAppear;
- (void)onExpose;
- (void)onSayHelloViewSendSayHello:(id)arg1;
- (void)statBanner;
- (void)onVerifyOK;
- (void)onAddToContact;
- (void)onSendVerifyMsg;
- (void)onSayHello;
- (void)bindPhoneReturn;
- (void)onDeleteContact:(id)arg1;
- (void)delAllMsg;
- (void)onVerifyOKWithContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (_Bool)handleStrongContactUpdateToMMContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)copyContactField:(id)arg1 toContact:(id)arg2;
- (void)onProfileChange;
- (void)dealloc;
- (void)onWCGroupRemoveMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)onWCGroupAddMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)onWCGroupModMemberReturn:(_Bool)arg1 group:(id)arg2;
- (unsigned long long)getContactAddFriendStatScene;
- (id)getSearchClickId;
- (id)getSearchId;
- (id)getContactVerifyLogic;
- (void)onRemoveContact;
- (void)onPopViewController:(_Bool)arg1;
- (void)onTalk:(id)arg1;
- (_Bool)onFilterSendReceiver:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onShareMyFriend;
- (void)storyDataItemsChanged;
- (void)onTableViewReload;
- (id)getPageSheetAdapter;
- (id)getViewController;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)startLoadingWithText:(id)arg1;
- (void)onNewMessageWithPushOnTop:(id)arg1;
- (void)onNewMessage:(id)arg1 requestInfo:(id)arg2;
- (void)onNewMessage:(id)arg1;
- (void)jumpToContentViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)jumpToContentViewController:(id)arg1;
- (void)doReset:(id)arg1;
- (void)contactVerifyOk:(id)arg1;
- (void)onFriendRequestSend;
- (_Bool)shouldRestrictContentViewSize;
- (void)checkNeedForcedUpdateForMemberDetail;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (id)getContactInfoAssist;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)showFrontViewInNoStoryState;
- (void)processFrontViewGestureInNoStoryState:(id)arg1;
- (void)panGestureRecognize:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)wrapFrontView;
- (void)setupNoStoryView;
- (void)setupTextStateView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)updateContactFromServer;
- (void)reloadContactAssist;
- (id)tagForCurrentPage;
- (id)tagForActivePage;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)reloadView;
- (id)getUserData;
- (void)resetLeftBarButtonItem;
- (void)reloadData;
- (void)initSystemPluginData:(long long)arg1;
- (_Bool)isInMyContactList;
- (_Bool)shouldModifyNavBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)showNavigationBarSepLine;
- (_Bool)useBlackStatusbar;
- (id)initWithTitle:(id)arg1;
- (id)init;
- (unsigned int)GetFromScene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

