//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIImageView, UILabel, UIView, WCPayBindCardSuccessResponse, WCPayQueryBindCardAwardCgi, WCPaySendBindCardAwardCgi, WCPayWebImageView;
@protocol WCPayBindCardSuccessViewControllerDelegate;

@interface WCPayBindCardSuccessViewController
{
    _Bool _m_disableAwardButton;
    _Bool _m_needQuery;
    UIView *_m_headerView;
    UIImageView *_m_iconView;
    UILabel *_m_titleLabel;
    UILabel *_m_descLabel;
    UIView *_m_topLineView;
    WCPayWebImageView *_m_bankIconView;
    UIImageView *_m_tinyAppIconView;
    UILabel *_m_bankTitleLabel;
    UILabel *_m_bankDescLabel;
    UIButton *_m_bankButton;
    UIView *_m_bottomLineView;
    UIButton *_m_doneButton;
    id <WCPayBindCardSuccessViewControllerDelegate> _m_delegate;
    WCPayBindCardSuccessResponse *_m_response;
    WCPaySendBindCardAwardCgi *_m_sendAwardCgi;
    WCPayQueryBindCardAwardCgi *_m_queryAwardCgi;
}

+ (void)report14877WithActivityId:(id)arg1 bindSerial:(id)arg2 reportType:(int)arg3 bankType:(id)arg4;
+ (void)reportClickDiscountWithActivityId:(id)arg1 bindSerial:(id)arg2 bankType:(id)arg3;
+ (void)reportShowViewWithActivityId:(id)arg1 bindSerial:(id)arg2 bankType:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_needQuery; // @synthesize m_needQuery=_m_needQuery;
@property(nonatomic) _Bool m_disableAwardButton; // @synthesize m_disableAwardButton=_m_disableAwardButton;
@property(retain, nonatomic) WCPayQueryBindCardAwardCgi *m_queryAwardCgi; // @synthesize m_queryAwardCgi=_m_queryAwardCgi;
@property(retain, nonatomic) WCPaySendBindCardAwardCgi *m_sendAwardCgi; // @synthesize m_sendAwardCgi=_m_sendAwardCgi;
@property(retain, nonatomic) WCPayBindCardSuccessResponse *m_response; // @synthesize m_response=_m_response;
@property(nonatomic) __weak id <WCPayBindCardSuccessViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) UIButton *m_doneButton; // @synthesize m_doneButton=_m_doneButton;
@property(retain, nonatomic) UIView *m_bottomLineView; // @synthesize m_bottomLineView=_m_bottomLineView;
@property(retain, nonatomic) UIButton *m_bankButton; // @synthesize m_bankButton=_m_bankButton;
@property(retain, nonatomic) UILabel *m_bankDescLabel; // @synthesize m_bankDescLabel=_m_bankDescLabel;
@property(retain, nonatomic) UILabel *m_bankTitleLabel; // @synthesize m_bankTitleLabel=_m_bankTitleLabel;
@property(retain, nonatomic) UIImageView *m_tinyAppIconView; // @synthesize m_tinyAppIconView=_m_tinyAppIconView;
@property(retain, nonatomic) WCPayWebImageView *m_bankIconView; // @synthesize m_bankIconView=_m_bankIconView;
@property(retain, nonatomic) UIView *m_topLineView; // @synthesize m_topLineView=_m_topLineView;
@property(retain, nonatomic) UILabel *m_descLabel; // @synthesize m_descLabel=_m_descLabel;
@property(retain, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel=_m_titleLabel;
@property(retain, nonatomic) UIImageView *m_iconView; // @synthesize m_iconView=_m_iconView;
@property(retain, nonatomic) UIView *m_headerView; // @synthesize m_headerView=_m_headerView;
- (_Bool)isiPadLandscape;
- (void)onWCPayQueryBindCardAwardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)onWCPayQueryBindCardAwardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onWCPaySendBindCardAwardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)onWCPaySendBindCardAwardCgi:(id)arg1 didGetResponse:(id)arg2;
- (_Bool)showActivity;
- (_Bool)awardButtonEnable;
- (id)awardDesc;
- (id)awardTitle;
- (id)awardIconUrl;
- (id)awardButtonTitle;
- (void)setDelegate:(id)arg1;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)didReceiveMemoryWarning;
- (void)onClickBankButton;
- (void)onClickDone;
- (void)updateDoneButton;
- (void)updateBottomLineLabel;
- (void)updateBankButton;
- (void)updateBankDescLabel;
- (void)updateBankTitleLabel;
- (void)updateTinyAppIconView;
- (void)updateBankIconView;
- (void)updateTopLineView;
- (void)updateDescLabel;
- (id)titleLabelText;
- (void)updateTitleLabel;
- (void)updateIconView;
- (void)reloadView;
- (void)viewDidLoad;
- (void)startSendBindCardAwardCgi;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

