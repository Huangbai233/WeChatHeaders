//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUIActivityIndicatorView, MMWebImageView, MMWebViewController, NSMutableArray, NSString, ScanTVHelper, SendAppMsgHandler, ShakeTvItem, UIButton, UILabel, UIView;

@interface ShakeTvViewController
{
    _Bool _canShareToFriend;
    _Bool _canShareToWC;
    _Bool _canAddToFav;
    _Bool _canEditTag;
    _Bool _canDelete;
    id _userdata;
    _Bool _isVideoPlaying;
    ScanTVHelper *m_tvHelper;
    MMTableView *_tableView;
    int m_uiShakeTvViewControllerShowStyle;
    _Bool _isModal;
    ShakeTvItem *_tvItem;
    UIView *_infoView;
    UIButton *_playBtn;
    UIButton *_actionBtn;
    MMWebImageView *_videoThumbImgView;
    MMWebViewController *_videoWebView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    MMUIActivityIndicatorView *_activityIndicatorView;
    SendAppMsgHandler *_sendAppMsgHandler;
    NSMutableArray *seperatorLines;
    UIView *footerLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id userdata; // @synthesize userdata=_userdata;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(nonatomic) _Bool canEditTag; // @synthesize canEditTag=_canEditTag;
@property(nonatomic) _Bool canAddToFav; // @synthesize canAddToFav=_canAddToFav;
@property(nonatomic) _Bool canShareToWC; // @synthesize canShareToWC=_canShareToWC;
@property(nonatomic) _Bool canShareToFriend; // @synthesize canShareToFriend=_canShareToFriend;
- (void)onEditTVTag;
- (void)onDeleteTV;
- (void)onGetTVItemFail:(id)arg1;
- (void)onGetTVItem:(id)arg1 TVItem:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (void)OnSendAppMsgOKToContacts:(id)arg1;
- (void)jsSetPageState:(id)arg1;
- (id)getThumbImageData;
- (id)getMessageWrap:(id)arg1;
- (id)getUpLoadTask:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAction:(id)arg1;
- (void)onReturn;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)setSeperatorHidden:(id)arg1 IndexPath:(id)arg2 Hidden:(_Bool)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)initNotificationObservers;
- (void)stopLoadingWebView;
- (void)startLoadingWebView;
- (void)viewDidLoad;
- (void)initView;
- (void)openPlayUrl;
- (void)initTableView;
- (void)initHeaderView:(int)arg1;
- (void)initFooterView;
- (id)getCommentId;
- (void)viewDidLayoutSubviews;
- (void)onPlayerExitFullscreen;
- (void)onPlayerEnterFullscreen;
- (void)dealloc;
- (id)initWithExtContent:(id)arg1 Scence:(unsigned int)arg2;
- (id)initWithShakeTvItem:(id)arg1 andModal:(_Bool)arg2 Style:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

