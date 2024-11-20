//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class AutoTranslateMsgController, AutoTranslateMsgControllerV2, BaseMsgContentViewController, BaseMsgLoaderLogic, CBaseContact, CContact, CContactVerifyLogic, CMessageWrap, ForwardMessageLogicController, ImageController, MMEasterEggController, MMLocatingPoiDataLogic, MMPickLocationViewController, MMUIViewController, MultiSelectController, MyFavoritesListViewController, NSArray, NSMutableDictionary, NSMutableSet, NSString, RecordController, SendVerifyMsgLogicController, ShareDataToOpenSDKController, ShareFriendOnChatLogicController, ShareMessageConfirmLogicHelper, TypingController, UINavigationController, UIViewController, UrlController, VoiceAutoTranslateHelper, WAAppIdToUsernameTransfer, WCScheduleLogicController, ilinkMultiSelectLogic;

@interface BaseMsgContentLogicController
{
    BaseMsgContentViewController *m_viewController;
    CBaseContact *m_contact;
    ImageController *m_imageController;
    UrlController *m_urlController;
    RecordController *m_recordController;
    VoiceAutoTranslateHelper *m_autoTranslateController;
    TypingController *m_typingController;
    ShareFriendOnChatLogicController *m_shareCardController;
    MMPickLocationViewController *m_pickLocationController;
    MMEasterEggController *m_easterEggController;
    CContactVerifyLogic *m_contactVerifyLogic;
    MultiSelectController *m_multiSelectController;
    MyFavoritesListViewController *m_myFavListController;
    MMUIViewController *m_cardPkgViewController;
    ShareDataToOpenSDKController *m_shareOpenSDKController;
    unsigned int m_uiSearchedResultNodeLocalID;
    _Bool m_bInContacts;
    _Bool m_bAddUsr;
    UINavigationController *m_navigationController;
    long long m_pushTime;
    unsigned int m_uiSubviewShowStatus;
    unsigned long long m_eViewDisshowStatus;
    _Bool m_bIsEditing;
    NSString *m_redirectToEmoticonPid;
    CDUnknownBlockType multiMsgCompleteHandler;
    NSMutableDictionary *m_dicExtraInfo;
    CContact *m_selectContact;
    NSArray *m_searchKeywordList;
    ForwardMessageLogicController *m_forwardLogic;
    MMLocatingPoiDataLogic *m_poiDetailLogic;
    ShareMessageConfirmLogicHelper *m_shareMessageHelper;
    _Bool m_bIsInContentView;
    unsigned long long m_uiFromScene;
    _Bool m_bHasUnreadMsg;
    WAAppIdToUsernameTransfer *_appIdTransfer;
    WCScheduleLogicController *m_scheduleLogic;
    AutoTranslateMsgController *m_textAutoTranslateController;
    AutoTranslateMsgControllerV2 *m_textAutoTranslateControllerV2;
    _Bool m_hasRecevieMsgAndScrollToBottom;
    NSMutableSet *m_sendAppmsgMsgLocalIDSet;
    SendVerifyMsgLogicController *m_sendVerifylogicVC;
    ilinkMultiSelectLogic *m_ilinkMultiSelectLogic;
    _Bool m_bFirstWillAppear;
    _Bool _isStayInPage;
    _Bool _hasOpenedWebViewUseFastLoad;
    _Bool _hasInvokeFastLoadPVBiz;
    NSMutableSet *_setFastLoadTemplateType;
    unsigned int m_uiLastCreateTime;
    unsigned int m_uiLastSequence;
    unsigned int m_uiLeftCount;
    unsigned int m_uiDownLastCreateTime;
    unsigned int m_uiDownLastSequence;
    unsigned int m_uiDownLeftCount;
    BaseMsgLoaderLogic *m_msgLoaderLogic;
    _Bool m_bHighlightTargetCell;
    _Bool isSharePreview;
    _Bool _isPageSheetMode;
    _Bool _redEnvelopesClickBlocking;
    _Bool _isMovingToMainFrame;
    unsigned long long m_searchScene;
    NSString *_pageSheetModeTitle;
    UIViewController *_currentMusicSearchViewController;
    CMessageWrap *_firstMsgAfterEnterSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *firstMsgAfterEnterSession; // @synthesize firstMsgAfterEnterSession=_firstMsgAfterEnterSession;
@property(nonatomic) _Bool isMovingToMainFrame; // @synthesize isMovingToMainFrame=_isMovingToMainFrame;
@property(nonatomic) __weak UIViewController *currentMusicSearchViewController; // @synthesize currentMusicSearchViewController=_currentMusicSearchViewController;
@property _Bool redEnvelopesClickBlocking; // @synthesize redEnvelopesClickBlocking=_redEnvelopesClickBlocking;
@property(retain, nonatomic) NSString *pageSheetModeTitle; // @synthesize pageSheetModeTitle=_pageSheetModeTitle;
@property(nonatomic) _Bool isPageSheetMode; // @synthesize isPageSheetMode=_isPageSheetMode;
@property(nonatomic) _Bool isSharePreview; // @synthesize isSharePreview;
@property(nonatomic) _Bool m_bHighlightTargetCell; // @synthesize m_bHighlightTargetCell;
@property(nonatomic) unsigned long long m_searchScene; // @synthesize m_searchScene;
@property(retain, nonatomic) NSMutableDictionary *m_dicExtraInfo; // @synthesize m_dicExtraInfo;
@property(retain, nonatomic) NSString *m_redirectToEmoticonPid; // @synthesize m_redirectToEmoticonPid;
@property(nonatomic) unsigned long long m_uiFromScene; // @synthesize m_uiFromScene;
@property(nonatomic) long long m_pushTime; // @synthesize m_pushTime;
@property(retain, nonatomic) MMPickLocationViewController *m_pickLocationController; // @synthesize m_pickLocationController;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=m_navigationController;
@property(retain, nonatomic) CBaseContact *m_contact; // @synthesize m_contact;
- (id)getChatName;
- (id)getViewModelWithMsgWrap:(id)arg1;
- (_Bool)pageSheetGestureRecognizerShouldBegin:(id)arg1;
- (void)onOpenIMStorageArchivePopUp:(id)arg1 privacyAgreementUrl:(id)arg2;
- (void)onWCPayMsgNeedContinueRevokeWithMsgWrap:(id)arg1 revokeTicket:(id)arg2;
- (void)onClickTitleView;
- (void)onUpdateAnimateEmojiCheckPoint:(id)arg1 contact:(id)arg2 fromHistory:(_Bool)arg3;
- (void)onEndAnimateEmojiCheckPoint:(id)arg1;
- (void)onStartAnimateEmojiCheckPoint:(id)arg1;
@property(nonatomic) _Bool isPeekPreview;
- (void)onExtendAnimationDidEndWithLiveTask:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onLiveCountChanged:(id)arg1;
- (void)OnMyselfCloseMode:(id)arg1;
- (void)OnRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)onBrandLiveBannerEventWithAction:(unsigned int)arg1;
- (void)DidAddMsg:(id)arg1;
- (void)onWillDisplayMsg:(id)arg1;
- (_Bool)isNeedCached;
- (void)RestoreStatusAndRegisterFromCacheStatus;
- (void)ClearStatusAndUnRegisterForCacheStatus;
- (void)sendMusicWithMessageWrap:(id)arg1;
- (_Bool)isMusicSearchViewControllerShowing;
- (void)onShowMusicEntrance;
- (void)onShowGiftEntrance;
- (void)onAutoTranslateFinishMsg:(id)arg1;
- (id)onAutoTranslateGetNodeArray;
- (id)previewActionItems;
- (_Bool)isReadyToShowEasterEgg;
- (void)onTapInteractiveUI;
- (struct CGRect)getViewBoundsForImplicitAnimationType:(long long)arg1;
- (double)getEasterEggEffectParentViewTopInset;
- (id)getEasterEggEffectParentView;
- (id)getEasterEggContainerViewController;
- (void)tryResumeCheckEasterEgg;
- (void)OnFavForwardCancel;
- (void)OnFavForwardDone;
- (id)getFavForawrdViewController;
- (void)modMsgStatusWithoutNotify:(id)arg1;
- (void)UnRegister;
- (void)Register;
- (void)onTableViewDidEndDisplayingCell:(id)arg1;
- (void)onScrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onAddMsgAndScrollToBottomAnimated:(id)arg1;
- (void)onChatNewMsgSent:(id)arg1;
- (void)onAddMsgAndNoScroll:(id)arg1;
- (void)onScrollViewDidScrollToTop:(id)arg1;
- (void)onScrollViewDidEndDecelerating:(id)arg1;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onWillPushFromNavigationController;
- (void)onWillPopFromNavigationController;
- (void)onWillEnterRoom;
- (void)onPopFromNavigationController;
- (void)onExitRoom;
- (id)getBackgroundView;
- (void)dealloc;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)setExtraInfo:(id)arg1;
- (id)getExtraInfo;
- (void)onMultiTalkBannerChange:(id)arg1 status:(unsigned int)arg2;
- (void)OnOpenTrackRoom:(id)arg1;
- (void)OnTrackRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)ViewDidDisappear;
- (void)ViewWillDisappear;
- (void)ViewWillAppear;
- (void)ViewDidAppear;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)CameraControllerDidTakeSightImage:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)CameraControllerDidTakeSight:(id)arg1 editVideoAttr:(id)arg2;
- (id)chatUserNameForSightStatistics;
- (void)CameraControllerDidTakeVideo:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)onFinishedShareMyFriend:(_Bool)arg1;
- (id)getShareMyFriendParentViewController;
- (void)onAddToContacts:(id)arg1;
- (void)sendAddContactRequestTo:(id)arg1 chatRoom:(id)arg2;
- (void)sendAddContactRequestTo:(id)arg1;
- (void)onEditMessage:(id)arg1;
- (void)updateTypingTitle:(id)arg1;
- (_Bool)isChatroom;
- (void)processInsertedGifData:(id)arg1;
- (_Bool)CanSendMultiImage;
- (_Bool)CanSendOriginalImage;
- (_Bool)CanSendOriginalVideo;
- (_Bool)CanDragSelect;
- (void)processImageControllerDidCancel:(unsigned long long)arg1;
- (id)generateMessageWrapWithVideoInfo:(id)arg1;
- (void)processInsertedAsset:(id)arg1;
- (id)getCurrentChatName;
- (void)processInsertedImage:(id)arg1 withData:(id)arg2 ImageInfo:(id)arg3;
- (void)DidEnterBackground:(id)arg1;
- (_Bool)onRecordWillStopWhenAppWillTerminate;
- (_Bool)isShowHeadImage:(id)arg1;
- (_Bool)CanRemoteRecord;
- (id)GetContactName;
- (struct CGPoint)CheckVoiceBtnPressLocation;
- (void)SetButtonHighlighted:(_Bool)arg1;
- (void)SetPeakPower:(float)arg1;
- (_Bool)onRecordCountRemain:(long long)arg1;
- (void)ShowTooLongTips;
- (void)ShowStartFailTips:(id)arg1;
- (void)ShowTooShortTips;
- (void)SetVoiceEnabled:(_Bool)arg1;
- (void)HideRecordTips;
- (void)ShowPreparing;
- (void)ShowRecording;
- (void)onRecordModMsg:(id)arg1;
- (void)onRecordAddMsg:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)onForwardMessageOK;
- (id)getCurrentViewController;
- (void)onMultiOprationComplete;
- (void)setMultiSelectModeOnComplete:(CDUnknownBlockType)arg1;
- (void)onMultiMsgSelected:(id)arg1 Username:(id)arg2;
- (void)onMultiMsgDelete:(id)arg1;
- (void)onMultiSelectCancel;
- (void)downloadMultiMsg:(id)arg1 saveToAlbum:(_Bool)arg2;
- (void)sendMultiMsgToBrandContact:(id)arg1 To:(id)arg2;
- (void)sendMultiMsgByMail:(id)arg1;
- (void)sendMultiMsgToFriend:(id)arg1 packedToSend:(_Bool)arg2;
- (void)sendMultiMsgToFriend:(id)arg1;
- (void)addMultiMsgToMyFav:(id)arg1;
- (void)toBeEditing:(_Bool)arg1;
- (id)GetRightBarBtn;
- (_Bool)hasDownMoreMsg;
- (_Bool)hasMoreMsg;
- (void)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)StartDownloadVideo:(id)arg1;
- (void)StartUploadVideo:(id)arg1;
- (void)StopDownloadVideo:(id)arg1;
- (void)StopUploadVideo:(id)arg1;
- (_Bool)canShowChatRoomInfo;
- (void)resetWithMessageWrap:(id)arg1;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 highlightKeywords:(id)arg2;
- (unsigned int)getSearchedMsgLocalID;
- (_Bool)isInPageSheetMode;
- (_Bool)isInMultiSelectMsg;
- (_Bool)isInWillDismissStatus;
- (_Bool)isInForwardMsgPreView;
- (void)clearSearchKeywordList;
- (id)getSearchKeywordList;
- (_Bool)shouldHightlightSearchedKeyWord;
- (_Bool)shouldSearchedMsgHightlight;
- (unsigned int)getFromScene;
- (_Bool)isForbiddenSearchBar;
- (_Bool)ShouldShowSearchCompleteRightBarButton;
- (id)GetRightBarButtonTitle;
- (id)GetRightBarButtonImageName;
- (void)StopPlaying:(id)arg1;
- (void)StartPlaying:(id)arg1 Resume:(_Bool)arg2;
- (void)SetMsgPlayed:(id)arg1;
- (_Bool)IsRecording;
- (_Bool)StopRecordingInTransState:(_Bool)arg1;
- (id)CancelRecordingAndTransVoiceWithLanguage:(unsigned int)arg1;
- (void)CancelRecording;
- (void)StopRecording;
- (_Bool)StartAudioRecording:(id)arg1;
- (id)genMsgSource;
- (id)GetHeadImageUrl:(id)arg1;
- (id)GetContact;
- (_Bool)isMessageAutoTranslating:(id)arg1;
- (void)onChangeReferMsgId:(long long)arg1;
- (void)onTextChange:(id)arg1 selectedRange:(struct _NSRange)arg2 markedRange:(struct _NSRange)arg3;
- (void)onTextBeginEditing;
- (double)GetTitleLabelOffset;
- (id)GetTitleTailImageView;
- (id)getDefaultTitleTailSubViews;
- (void)QuicklySaveDraft:(id)arg1 referMsgSvrId:(long long)arg2;
- (void)SaveContentAndState;
- (void)saveDraft:(id)arg1 referMsgSvrId:(long long)arg2;
- (void)ResendMessage:(id)arg1 ShowAlert:(_Bool)arg2;
- (void)ResendMessage:(id)arg1;
- (void)VoiceModeClicked;
- (void)ViewDidInit;
- (void)ViewWillInit;
- (id)getTextStateItemView;
- (id)getTextStateViewAsSubView;
- (id)getSubTitle;
- (id)GetUsrTitleCPKey;
- (_Bool)isUsrTitleUnsafe;
- (id)GetUsrTitle;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(_Bool *)arg1;
- (void)OpenEmoticonToolView:(id)arg1;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (_Bool)shouldPreventViewcontrollerAutorotate;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (_Bool)canReloadViewIfMemoryWarning;
- (_Bool)canShowFoldHistoryCell;
- (_Bool)onLoadDownMoreMessage;
- (id)onLoadMoreMessage;
- (void)onVideoOperation;
- (void)onOpenFinderPicker;
- (void)onSendCaptrueImage:(id)arg1;
- (void)onOpenCameraController;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)onOpeniCloudFileBrowser;
- (void)onFileBrowseMultiSelect:(id)arg1;
- (void)onOpenFileBrowser;
- (void)onOpenMediaBrowser;
- (void)DelMsgWithMsgList:(id)arg1 DelAll:(_Bool)arg2;
- (id)GetDownMessageArray;
- (void)clearDownLeftCount;
- (void)clearLastCreateTime;
- (void)resetLeftCount;
- (void)setLastCreateTime:(unsigned long long)arg1;
- (id)GetMessageArray;
- (id)getMsgFromLocalId:(unsigned int)arg1;
- (unsigned int)getMsgCountToLoad;
- (void)ViewLocation:(id)arg1;
- (void)onShareLocationMsgToOpenSDKWithViewController:(id)arg1;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (id)onGetRightBarButton;
- (void)onCancelSeletctedLocation;
- (void)onFinishSelectedPOIInfo:(id)arg1;
- (void)onFinishSelectedLocation;
- (void)OnSendMessageFail:(id)arg1 WithError:(unsigned long long)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)onCardPackageViewSelectCardItem:(id)arg1;
- (id)getContactToForward;
- (void)exitTracking;
- (void)openTrackRoom:(id)arg1;
- (void)onOpenServiceApp:(id)arg1;
- (void)onRedEnvelopesControlLogic;
- (void)onTransferMoneyControlLogic;
- (void)onOpenMyFavoritesListController;
- (void)onOpenMyCardPkgViewController;
- (void)SelectLocation:(_Bool)arg1;
- (void)AddLocationMessageWithLocation:(id)arg1;
- (void)AddAtUser:(id)arg1;
- (void)RecommenWego;
- (void)OpenNativeUrl:(id)arg1;
- (void)OpenUrl:(id)arg1 extraInfo:(id)arg2;
- (id)extraInfoForWebView;
- (id)getPreviewForLink:(id)arg1;
- (void)OpenLiteApp:(id)arg1;
- (void)OpenHtml5:(id)arg1;
- (void)OnTailLink:(id)arg1;
- (void)OnTagWeAppMPShortLink:(id)arg1 messageWrap:(id)arg2;
- (void)OnTagWeAppLink:(id)arg1 messageWrap:(id)arg2;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)onCloseLiveBannerWithRoomId:(id)arg1 liveInfo:(id)arg2;
- (void)onEnterLiveFromBanner:(id)arg1;
- (void)enterLiveRoomWithMessageWrap:(id)arg1;
- (void)onStartLive;
- (void)onShowLiveEntrance;
- (void)onVideoVoipInvite;
- (void)onVoipInvite;
- (void)ShareCard;
- (void)onMultiTalkButtonClick;
- (void)SendNotGameEmoticonMessage:(id)arg1 errorMsg:(id)arg2;
- (void)SendEmoticonMessage:(id)arg1;
- (void)SendEmojiArtMessage:(id)arg1;
- (void)SendTextMessage:(id)arg1 externInfo:(id)arg2;
- (void)SendTextMessageWithSolitaire:(id)arg1;
- (void)SendTextMessage:(id)arg1 replyingMessage:(id)arg2 isPasted:(_Bool)arg3;
- (void)SendTextMessage:(id)arg1;
- (void)SendImageMessage:(id)arg1 withData:(id)arg2 ImageInfo:(id)arg3;
- (void)SendImageMessageByMMAsset:(id)arg1;
- (void)setWillDismissStatus;
- (id)tagForCurrentPage;
- (_Bool)isChatStatusNotifyOpen;
- (void)SendMessageWrap:(id)arg1;
- (id)GetMessageFromImage:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)setNeedUpdateTitle:(_Bool *)arg1;
- (_Bool)ShouldShowMultiSelectMode;
- (_Bool)canReplyMsg;
- (_Bool)CanReportShowInfo;
- (_Bool)CanShowBanner;
- (_Bool)CanSendEmoticonMessage;
- (_Bool)CanLongPressHeadImage;
- (_Bool)CanSendVoipMsg;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (id)getMessageChatContactByMessageWrap:(id)arg1;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenDetailInfo;
- (_Bool)HasCustomToolBar;
- (_Bool)hasCardPkgEntry;
- (_Bool)hasRedEnvelopesEntry;
- (_Bool)hasTransferMoneyEntry;
- (id)getMsgSendOpEntry;
- (id)wxKeyBoardSupportMessageTypes;
- (void)sendWXKeyBoardMessage:(id)arg1;
- (_Bool)supportWXKeyBoard;
- (void)contactAddContactOk:(id)arg1;
- (void)startForAddVerifyMsg:(id)arg1;
- (void)verifyContactByUsrName:(id)arg1;
- (_Bool)shouldStopAutoPlayUnRead;
- (id)getMsgWithId:(unsigned int)arg1;
- (id)GetMessagesNodeArray;
- (id)formImageMsgByMMAsset:(id)arg1 toUserName:(id)arg2;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3 withImageInfo:(id)arg4;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
- (id)FormTextMsg:(id)arg1 withText:(id)arg2;
- (id)CreateAppSolitaireTextMsgWithSolitaire:(id)arg1;
- (void)OnRoomHistoryRevoked:(id)arg1 n64MsgId:(long long)arg2 historyId:(unsigned long long)arg3;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)viewDidRotateToOrientation:(long long)arg1;
- (void)viewWillRotateToOrientation:(long long)arg1;
- (void)openOpenSDKAppBrand:(id)arg1;
- (void)backToWeApp:(id)arg1 pagePath:(id)arg2;
- (_Bool)isBackToWeApp:(id)arg1;
- (unsigned long long)getChatType;
- (void)openWaApp:(id)arg1 fromScene:(unsigned long long)arg2 preScene:(unsigned long long)arg3;
- (_Bool)shouldHoldOpenWaAppScene:(unsigned long long)arg1;
- (void)openWaApp:(id)arg1;
- (void)shareDataToOpenSDK:(id)arg1;
- (void)RevokeMsg:(id)arg1;
- (_Bool)shouldProcessPayMsgPreRevoke:(id)arg1;
- (_Bool)isMsgCanRevoke:(id)arg1;
- (void)onWCScheduleItem:(id)arg1 cancelSuccess:(_Bool)arg2 errMsg:(id)arg3;
- (void)onWCScheduleItem:(id)arg1 SetSuccess:(_Bool)arg2 ErrMsg:(id)arg3;
- (void)onWCScheduleSelectDatePickerView;
- (void)onWCScheduleCancelDatePickerView;
- (void)onScheduleMessage:(id)arg1 cellView:(id)arg2;
- (void)onClickPlayMusicBtn:(id)arg1 isPlay:(_Bool)arg2 musicInfo:(id)arg3 clickedOnBtn:(_Bool)arg4;
- (void)onClickMsg:(id)arg1;
- (void)onDeleteMsg:(id)arg1;
- (void)onClickFavMenu:(id)arg1;
- (void)onClickVoiceTranslate:(id)arg1;
- (void)stopTextAutoTranslate;
- (void)startTextAutoTranslate;
- (void)onClickTranslateMsg:(id)arg1 translateInfo:(id)arg2;
- (void)onClickMessageWrapOpenedWebViewUseFastLoad:(id)arg1;
- (void)onClickTextFloatPreView:(id)arg1;
- (void)SetReadWithMessageWrap:(id)arg1 isNotifyModMsg:(_Bool)arg2;
- (void)markChatRead;
- (void)clearAllUnread;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)performDeleteMsg:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3;
- (void)AddEmoticonMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AdjustMsgFromToUserWithChatName:(id)arg1 MsgWrap:(id)arg2;
- (void)AdjustMsgBeforeSendWithChatName:(id)arg1 MsgWrap:(id)arg2;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)preAddMsg:(id)arg1 msgWrap:(id)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (void)onMultiSelectContactsEndWithReportSelectedCount:(unsigned int)arg1 hasReachLimit:(_Bool)arg2 clickCount:(unsigned int)arg3;
- (void)onMultiSelectContactsDidFinishSelect:(id)arg1 tmpDisplayView:(id)arg2;
- (void)onMultiSelectContactsDidFinishSelect:(id)arg1;
- (void)Reset;
- (id)init;
- (id)initWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2 ContentViewDisshowStatus:(unsigned long long)arg3 fromScene:(unsigned long long)arg4;
- (id)initWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2 ContentViewDisshowStatus:(unsigned long long)arg3;
- (id)initWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2 ContentViewDisshowStatus:(unsigned long long)arg3 searchKeywordList:(id)arg4 fromScene:(unsigned long long)arg5;
- (id)getNavigationController;
- (id)getViewController;
- (id)getMsgContentViewController;
- (id)GetMessageArrayFrom:(unsigned int)arg1 createTime:(unsigned long long)arg2;
- (void)didShowFirstUnReadMessage;
- (id)GetFirstMsgAfterEnterSession;
- (id)GetFirstUnReadMessage;
- (unsigned int)getMsgMinCreateTimeToLoad;
- (unsigned int)GetFirstLocalID;
- (unsigned int)GetLastLocalID;
- (unsigned int)getSessionId;
- (void)didPushTransitionFinish;
- (void)setViewControllerFullScreen;
- (void)initViewController;
- (void)initProperties;
- (void)initPropertiesWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2;
- (void)resetController;
- (void)initControllers;
- (void)preDownloadPageDataForVisibleCells;
- (void)messageWrapOpenedWebViewUseFastLoad:(id)arg1;
- (void)reportAllAppmsgExposureInfoForVisibleCells;
- (void)reportAppmsgExposureInfoForMessageWrap:(id)arg1;
- (void)recordAllAppmsgExposureInfoForVisibleCells;
- (void)recordAppmsgExposureInfoForMessageWrap:(id)arg1;
- (id)preDownloadUrlInfoListForMessageWrap:(id)arg1;
- (id)setTemplateTypeForAppMsgIfValid:(id)arg1;
- (_Bool)isAppmsgValidAfterCheckUrlDomain:(id)arg1 needCheckItemShowType:(_Bool)arg2;
- (_Bool)isAppmsgSupportExposure:(id)arg1;
- (_Bool)isForwardAppmsg:(id)arg1;
- (void)doResetAppMsgExposureParameter;
- (void)doPreCreateWebViewAndUpdateTemplateAndBatchReport:(id)arg1;
- (unsigned int)currPageAppmsgReportScene;
- (unsigned int)currPageAppmsgEnterType;
- (_Bool)shouldPreDownloadPageData;
- (_Bool)inPageSwitch_shouldPreCreateAndUpdateAndTryReport;
- (_Bool)mainSwitch_shouldHandleAppmsg;
- (void)handleAppmsgWhenInPage;
- (void)handleAppmsgWhenDidExitPage;
- (void)handleAppmsgWhenWillExitPage;
- (void)handleAppmsgWhenEnterPage;
- (id)getDownMsgFromLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3 limit:(unsigned int)arg4;
- (unsigned int)getDownLastSequence;
- (unsigned int)getDownLastLocalID;
- (unsigned int)getDownLastCreateTime;
- (id)getMsgFromLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3 limit:(unsigned int)arg4;
- (unsigned int)getLastSequence;
- (unsigned int)getLastLocalID;
- (unsigned int)getLastCreateTime;
- (id)createViewModelWithMsgWrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

