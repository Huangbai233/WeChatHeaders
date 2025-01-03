//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, MMTipsViewController, MMUILabel, NSDictionary, NSString, UIButton, UILabel, UIScrollView, UIView, WCBizLoadingView, WCPayBannerNotice, WCPayCommentTextView, WCPayCurrencyInputView, WCPayNoticeBannerView, WCPayWebImageView;
@protocol WCPayOverseaTransferViewControllerDelegate;

@interface WCPayOverseaTransferViewController
{
    id <WCPayOverseaTransferViewControllerDelegate> m_delegate;
    _Bool m_bIsViewHidden;
    _Bool _m_isKeyBoardHide;
    _Bool _m_bKeyboardHasShown;
    UIScrollView *_m_scrollView;
    UIView *_m_headerView;
    MMHeadImageView *_m_headImageView;
    WCPayWebImageView *_webHeadImageView;
    UILabel *_m_displayNameLabel;
    UIView *_m_panelView;
    UILabel *_m_inputTitleLabel;
    WCPayCurrencyInputView *_m_currencyInputView;
    UIView *_m_lineView;
    WCPayCommentTextView *_m_commentTextView;
    UIView *_m_currencyShowView;
    MMUILabel *_m_fixCurrencyLabel;
    MMUILabel *_m_fixFeeLabel;
    UIView *_m_footerView;
    UIButton *_m_confirmButton;
    WCPayNoticeBannerView *_m_noticeBannerView;
    WCBizLoadingView *_m_bizLoadingView;
    MMTipsViewController *_m_tipsView;
    NSDictionary *_m_payResp;
    WCPayBannerNotice *_m_bannerNotice;
    double _confirmBtnY;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bKeyboardHasShown; // @synthesize m_bKeyboardHasShown=_m_bKeyboardHasShown;
@property(nonatomic) double confirmBtnY; // @synthesize confirmBtnY=_confirmBtnY;
@property(retain, nonatomic) WCPayBannerNotice *m_bannerNotice; // @synthesize m_bannerNotice=_m_bannerNotice;
@property(nonatomic) _Bool m_isKeyBoardHide; // @synthesize m_isKeyBoardHide=_m_isKeyBoardHide;
@property(retain, nonatomic) NSDictionary *m_payResp; // @synthesize m_payResp=_m_payResp;
@property(retain, nonatomic) MMTipsViewController *m_tipsView; // @synthesize m_tipsView=_m_tipsView;
@property(retain, nonatomic) WCBizLoadingView *m_bizLoadingView; // @synthesize m_bizLoadingView=_m_bizLoadingView;
@property(retain, nonatomic) WCPayNoticeBannerView *m_noticeBannerView; // @synthesize m_noticeBannerView=_m_noticeBannerView;
@property(retain, nonatomic) UIButton *m_confirmButton; // @synthesize m_confirmButton=_m_confirmButton;
@property(retain, nonatomic) UIView *m_footerView; // @synthesize m_footerView=_m_footerView;
@property(retain, nonatomic) MMUILabel *m_fixFeeLabel; // @synthesize m_fixFeeLabel=_m_fixFeeLabel;
@property(retain, nonatomic) MMUILabel *m_fixCurrencyLabel; // @synthesize m_fixCurrencyLabel=_m_fixCurrencyLabel;
@property(retain, nonatomic) UIView *m_currencyShowView; // @synthesize m_currencyShowView=_m_currencyShowView;
@property(retain, nonatomic) WCPayCommentTextView *m_commentTextView; // @synthesize m_commentTextView=_m_commentTextView;
@property(retain, nonatomic) UIView *m_lineView; // @synthesize m_lineView=_m_lineView;
@property(retain, nonatomic) WCPayCurrencyInputView *m_currencyInputView; // @synthesize m_currencyInputView=_m_currencyInputView;
@property(retain, nonatomic) UILabel *m_inputTitleLabel; // @synthesize m_inputTitleLabel=_m_inputTitleLabel;
@property(retain, nonatomic) UIView *m_panelView; // @synthesize m_panelView=_m_panelView;
@property(retain, nonatomic) UILabel *m_displayNameLabel; // @synthesize m_displayNameLabel=_m_displayNameLabel;
@property(retain) WCPayWebImageView *webHeadImageView; // @synthesize webHeadImageView=_webHeadImageView;
@property(retain, nonatomic) MMHeadImageView *m_headImageView; // @synthesize m_headImageView=_m_headImageView;
@property(retain, nonatomic) UIView *m_headerView; // @synthesize m_headerView=_m_headerView;
@property(retain, nonatomic) UIScrollView *m_scrollView; // @synthesize m_scrollView=_m_scrollView;
- (void)reportConfirm;
- (void)reportCancel;
- (void)onWCPayNoticeBannerView:(id)arg1 clickWithUrl:(id)arg2;
- (id)trimString:(id)arg1 ToLenght:(unsigned long long)arg2;
- (void)onWCPayCommentTextViewAlertViewDisappear;
- (void)onWCPayCommentTextViewAlertViewAppear;
- (void)onInputTextChangeToString:(id)arg1;
- (void)updateConfirmButtonStatus;
- (void)onButtonConfirm;
- (void)updateConfirmButton;
- (void)updateCommentTextView;
- (void)updateLineView;
- (void)updateCurrencyInputView;
- (void)updateCurrencyShowView;
- (void)updateInputTitleLabel;
- (void)updatePanelView;
- (void)updateDisplayNameLabel;
- (void)updateHeadImageView;
- (void)updateFooterView;
- (void)updateHeaderView;
- (void)updateScrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onBack;
- (void)didReceiveMemoryWarning;
- (void)updateViewData;
- (void)refreshViewWithData:(id)arg1;
- (void)setupWithData:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)updateNoticeBannerView;
- (void)setViewHidden:(_Bool)arg1;
- (void)reportOverseaTransferEnter;
- (void)reportIdKeyOverseaTransferViewOpen;
- (void)resignInputKeyboard;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)viewDidLoad;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

