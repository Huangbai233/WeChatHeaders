//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, FavDataItemWrap, FavoritesItem, FavoritesItemDataField, MMScrollActionSheet, MiniRecTransitionController, NSMutableArray, NSString, RTEAttachmentViewProvider, UIImage, WCDataItem, WNContentStorage, WNSaveImageLogic, WeNoteAffDelegateLogic, WeNoteFlutterInstance, WeNoteReportLogic;

@interface WeNoteFlutterViewController
{
    unsigned int m_oriVersion;
    WeNoteFlutterInstance *m_flutterInstance;
    WeNoteAffDelegateLogic *m_affDelegateLogic;
    MMScrollActionSheet *m_scrollActionSheet;
    _Bool m_bDeletePopView;
    MiniRecTransitionController *m_minimizationTransitionController;
    WeNoteReportLogic *m_reportLogic;
    NSMutableArray *m_lazyDownloadDatas;
    WNSaveImageLogic *m_saveImageLogic;
    WNContentStorage *m_contentStorage;
    UIImage *m_snapshotImage;
    _Bool m_forceLoadImage;
    long long m_convertToImgRemainCheckCount;
    RTEAttachmentViewProvider *m_attachmentViewProvider;
    RTEAttachmentViewProvider *m_attachmentViewProviderForLongImageUtilForLightMode;
    RTEAttachmentViewProvider *m_attachmentViewProviderForLongImageUtilForDarkMode;
    RTEAttachmentViewProvider *m_attachmentViewProviderForLongImageUtilForTransparentMode;
    RTEAttachmentViewProvider *m_attachmentViewProviderForSquareImageUtilForLightMode;
    RTEAttachmentViewProvider *m_attachmentViewProviderForSquareImageUtilForDarkMode;
    RTEAttachmentViewProvider *m_attachmentViewProviderForSquareImageUtilForTransparentMode;
    NSString *m_identifier;
    unsigned int m_maxObjectId;
    _Bool m_waitForUpload;
    FavoritesItemDataField *m_openingData;
    _Bool m_enableLazyDownload;
    NSString *m_sessionId;
    _Bool m_holdOnAudio;
    unsigned long long m_htmlBeginDownloadTime;
    unsigned long long m_htmlDownloadEndTime;
    _Bool _bEditable;
    _Bool _bPresentedByMiniTask;
    _Bool _bShowLocateToMsg;
    unsigned long long _maxFileSize;
    unsigned long long _scene;
    FavoritesItem *_favItem;
    CMessageWrap *_messageWrap;
    WCDataItem *_wcDataItem;
    FavDataItemWrap *_dataWrap;
    FavoritesItemDataField *_scrollToData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bShowLocateToMsg; // @synthesize bShowLocateToMsg=_bShowLocateToMsg;
@property(retain, nonatomic) FavoritesItemDataField *scrollToData; // @synthesize scrollToData=_scrollToData;
@property(nonatomic) _Bool bPresentedByMiniTask; // @synthesize bPresentedByMiniTask=_bPresentedByMiniTask;
@property(readonly, nonatomic) FavDataItemWrap *dataWrap; // @synthesize dataWrap=_dataWrap;
@property(readonly, nonatomic) WCDataItem *wcDataItem; // @synthesize wcDataItem=_wcDataItem;
@property(readonly, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long maxFileSize; // @synthesize maxFileSize=_maxFileSize;
@property(nonatomic) _Bool bEditable; // @synthesize bEditable=_bEditable;
- (void)OnUpdateItems:(id)arg1;
- (void)locateToMsg;
- (_Bool)canShowLocateToMsg;
- (void)OnDelFavoritesItems:(id)arg1;
- (_Bool)isForceLoadImage;
- (_Bool)hasRotated;
- (void)onCreatAttachmentView:(id)arg1;
- (id)realGetAttachmentViewProviderWithColorType:(unsigned long long)arg1;
- (id)getAttachmentViewProvider;
- (id)getAttachmentViewProviderForSquareImageUtilWithTransparentMode;
- (id)getAttachmentViewProviderForSquareImageUtilWithDarkMode;
- (id)getAttachmentViewProviderForSquareImageUtilWithLightMode;
- (id)getAttachmentViewProviderForLongImageUtilWithTransparentMode;
- (id)getAttachmentViewProviderForLongImageUtilWithDarkMode;
- (id)getAttachmentViewProviderForLongImageUtilWithLightMode;
- (id)creatRTETextViewWithCustomFrame:(struct CGRect)arg1 andTextContainerInset:(struct UIEdgeInsets)arg2;
- (id)creatRTETextViewWithCustomFrame:(struct CGRect)arg1;
- (unsigned long long)getMaxFileSize;
- (void)holdOnAudio;
- (void)insertText:(id)arg1;
- (void)insertDatas:(id)arg1;
- (void)setPopGestureEnable:(_Bool)arg1;
- (_Bool)isVideoNeedLazyDownload:(id)arg1;
- (void)tryToDownloadVideoWith:(id)arg1;
- (id)wnFlutterInstance;
- (id)reportLogic;
- (id)viewController;
- (void)showKeyboard;
- (void)hideKeyboard;
- (_Bool)needHideKeyboardToShowAlert;
- (id)getAlertTitleForType:(unsigned long long)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)onChatNewMsgSent:(id)arg1;
- (_Bool)checkHTMLWithDataId:(id)arg1 isSuccess:(_Bool)arg2;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2 failRetCode:(int)arg3;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(_Bool)arg3;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (id)genAttachmentId;
- (void)compressImageWithGCD:(id)arg1 completeHandle:(CDUnknownBlockType)arg2;
- (_Bool)getCompressImageWithPath:(id)arg1;
- (_Bool)checkCompressImageForFavData:(id)arg1;
- (void)checkCompressImageForFavItem;
- (_Bool)isInTranslation;
- (void)didControllerAppear;
- (void)onOpenAttachmentWith:(id)arg1;
- (void)tryToParseHTML:(id)arg1;
- (void)checkHTMLFile;
- (void)configWithDataWrap:(id)arg1;
- (void)configWithWCDataItem:(id)arg1;
- (_Bool)checkMsgFile;
- (void)configWithMsg:(id)arg1;
- (void)configWithMsg:(id)arg1 andData:(id)arg2;
- (void)configWithFavItem:(id)arg1;
- (void)loadNote;
- (void)saveNoteWithCompleteHandler:(CDUnknownBlockType)arg1;
- (_Bool)shouldInteractiveDismiss;
- (_Bool)shouldInteractivePop;
- (_Bool)disMissSelf;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (int)enterNoteScene;
- (void)setEditable:(_Bool)arg1;
- (void)clearInstance;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)dealloc;
- (void)initReportLogic;
- (void)realInitWeNoteModel;
- (void)tryToInitWeNoteModel;
- (void)setSessionId:(id)arg1;
- (void)setIdentifierId:(id)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithFlutterInstance:(id)arg1;
- (void)OnNoteSecurityCheck:(unsigned int)arg1 isSuccess:(_Bool)arg2;
- (void)handleFailState;
- (void)handleSuccessState;
- (void)downloadResourceNone:(unsigned int)arg1;
- (void)downloadResourceFail:(unsigned int)arg1;
- (void)downloadResourceSuccess:(unsigned int)arg1;
- (void)getTableViewimage:(CDUnknownBlockType)arg1;
- (void)getNoteImage:(CDUnknownBlockType)arg1;
- (id)getFooterViewImage;
- (void)refuseSaveNoteAsImage;
- (void)realSaveNoteAsImage;
- (void)continueSaveNoteAsImage;
- (void)saveNoteAsImage;
- (id)minimizationInteractivePopGetPendingTaskContextWithGenerateType:(unsigned long long)arg1;
- (_Bool)minimizationInteractivePopGestureRecognizerShouldBegin;
- (void)minimizationInteractivePopToMinimizeTask:(_Bool)arg1;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (void)updateToMinimize;
- (void)installMinimizationTransitionController;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)minimizationTransitionController;
- (void)addToMinimizeWithGenerateType:(unsigned long long)arg1;
- (_Bool)tryAddToMinimize:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onFavTagEditBegin:(int)arg1;
- (id)getFavForawrdViewController;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)reportSetOnTop:(_Bool)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onClickMoreBtn;
- (void)checkPullNoticeScreenBefore;
- (id)minimizationTaskData;
- (void)realForwardNote2WC;
- (void)forwardNote2WC;
- (void)setConversionOntop:(_Bool)arg1;
- (void)onSwitchScene:(id)arg1;
- (void)realForwardNoteToUser:(id)arg1;
- (void)forwardNoteToUser:(id)arg1;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3 WithAccessibilityLabel:(id)arg4;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3;
- (_Bool)isEmpty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

