//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, NSMutableArray, NSMutableDictionary, NSString, RichTextView, TextStateBrandLogic, UIButton, UIView, WCPayNewPaidOrderDetailView, WCPayPaidDetailQueryAwardCgi, WCPaySelectVerifyTypeLogic;
@protocol WCPayPaidOrderDetailViewControllerDelegate;

@interface WCPayPaidOrderDetailViewController
{
    id <WCPayPaidOrderDetailViewControllerDelegate> m_delegate;
    NSString *m_nsCompleteBtnTitle;
    NSString *m_nsCommondTip;
    NSMutableArray *m_arrActivityUrl;
    NSMutableDictionary *m_dicSubscribeSelectedStatus;
    _Bool m_bHandlePoped;
    UIView *m_bottomLogoView;
    RichTextView *richTextView;
    NSString *m_statLinkActivityName;
    _Bool m_bHadStatExpourse;
    _Bool m_bIsNativeRequestReward;
    int nativeRewardResult;
    NSString *nativeResultBtnText;
    _Bool _bNeedQueryActivityAward;
    _Bool _bNeedQueryActivityInNewDetailView;
    _Bool _bHasOpenTinyAppActivity;
    _Bool _bIsQueryingTinyAppActivityAward;
    _Bool _isAppTaskLaunchingDuringLive;
    WCPaySelectVerifyTypeLogic *_m_realNameLogic;
    long long _curActivityBtnTag;
    NSMutableArray *_activityCellInfoArray;
    NSMutableArray *_activityH5AwardIdArray;
    WCPayPaidDetailQueryAwardCgi *_queryAwardCgi;
    WCPayNewPaidOrderDetailView *_paidOrderDetailViewNew;
    NSString *_subscribeBrandUsrname;
    MMWebImageView *_tinyAppActivityImgView;
    UIButton *_tinyAppActivityBtn;
    MMUILabel *_tinyAppActivityTitleLabel;
    MMUILabel *_tinyAppActivityDescLabel;
    TextStateBrandLogic *_brandLogic;
    NSString *_textStatusTransId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAppTaskLaunchingDuringLive; // @synthesize isAppTaskLaunchingDuringLive=_isAppTaskLaunchingDuringLive;
@property(retain, nonatomic) NSString *textStatusTransId; // @synthesize textStatusTransId=_textStatusTransId;
@property(retain, nonatomic) TextStateBrandLogic *brandLogic; // @synthesize brandLogic=_brandLogic;
@property(retain, nonatomic) MMUILabel *tinyAppActivityDescLabel; // @synthesize tinyAppActivityDescLabel=_tinyAppActivityDescLabel;
@property(retain, nonatomic) MMUILabel *tinyAppActivityTitleLabel; // @synthesize tinyAppActivityTitleLabel=_tinyAppActivityTitleLabel;
@property(retain, nonatomic) UIButton *tinyAppActivityBtn; // @synthesize tinyAppActivityBtn=_tinyAppActivityBtn;
@property(retain, nonatomic) MMWebImageView *tinyAppActivityImgView; // @synthesize tinyAppActivityImgView=_tinyAppActivityImgView;
@property(nonatomic) _Bool bIsQueryingTinyAppActivityAward; // @synthesize bIsQueryingTinyAppActivityAward=_bIsQueryingTinyAppActivityAward;
@property(nonatomic) _Bool bHasOpenTinyAppActivity; // @synthesize bHasOpenTinyAppActivity=_bHasOpenTinyAppActivity;
@property(retain, nonatomic) NSString *subscribeBrandUsrname; // @synthesize subscribeBrandUsrname=_subscribeBrandUsrname;
@property(nonatomic) _Bool bNeedQueryActivityInNewDetailView; // @synthesize bNeedQueryActivityInNewDetailView=_bNeedQueryActivityInNewDetailView;
@property(retain, nonatomic) WCPayNewPaidOrderDetailView *paidOrderDetailViewNew; // @synthesize paidOrderDetailViewNew=_paidOrderDetailViewNew;
@property(retain, nonatomic) WCPayPaidDetailQueryAwardCgi *queryAwardCgi; // @synthesize queryAwardCgi=_queryAwardCgi;
@property(retain, nonatomic) NSMutableArray *activityH5AwardIdArray; // @synthesize activityH5AwardIdArray=_activityH5AwardIdArray;
@property(retain, nonatomic) NSMutableArray *activityCellInfoArray; // @synthesize activityCellInfoArray=_activityCellInfoArray;
@property(nonatomic) long long curActivityBtnTag; // @synthesize curActivityBtnTag=_curActivityBtnTag;
@property(nonatomic) _Bool bNeedQueryActivityAward; // @synthesize bNeedQueryActivityAward=_bNeedQueryActivityAward;
@property(retain, nonatomic) WCPaySelectVerifyTypeLogic *m_realNameLogic; // @synthesize m_realNameLogic=_m_realNameLogic;
- (void)textStatusDataReportWithScene:(int)arg1;
- (void)onTextStatePublishedWithIconId:(id)arg1 iconDescription:(id)arg2;
- (void)onTextStatePublishCancelled;
- (void)onNewDetailViewClickLeadTailViewWithCmdData:(id)arg1;
- (void)onNewDetailViewClickLeadTailViewWithRouteInfo:(id)arg1;
- (void)handleRouteInfoInternal:(id)arg1;
- (void)onNewDetailViewClickFinderInfoViewWithRouteInfo:(id)arg1;
- (void)onNewDetailViewClickMchFav:(_Bool)arg1;
- (void)reportClickTinyAppActivity;
- (void)onTinyAppActivityBtnClick;
- (void)onNewDetailViewClickTinyAppActivityWithTinyAppUsername:(id)arg1 tinyAppPath:(id)arg2 tinyAppVersion:(unsigned int)arg3;
- (void)reportNewDetailViewClickH5Activity;
- (void)onNewDetailViewClickH5ActivityOpenWithTinyAppUsername:(id)arg1 tinyAppPath:(id)arg2 tinyAppVersion:(unsigned int)arg3;
- (void)reportOrderDetailViewData;
- (void)tinyAppInfoClick;
- (void)onH5ActivityRespBack:(id)arg1;
- (void)onNewDetailViewClickH5Activity:(id)arg1;
- (void)onNativeActivityRespBack:(id)arg1;
- (void)onNewDetailViewClickNativeActicity;
- (void)onNewDetailViewDoneBtnClickWithBrandUsername:(id)arg1;
- (void)onNewDetailViewOpenTinyAppWithTinyAppUsername:(id)arg1 tinyAppPath:(id)arg2 tinyAppVersion:(unsigned int)arg3;
- (void)onNewDetailViewClickLotteryBtn:(id)arg1;
- (void)onNewDetailViewReturnWithoutDrawLottery;
- (void)onNewDetailViewStartDrawLottery:(unsigned int)arg1;
- (void)onWCPayPaidOrderShowInfoViewClickUrl:(id)arg1;
- (void)onWCPayPaidOrderShowInfoViewClickWAApp:(id)arg1 path:(id)arg2;
- (void)openTinyAppWithUsername:(id)arg1 path:(id)arg2 fromScene:(unsigned long long)arg3 version:(unsigned int)arg4;
- (void)onGetTinyAppActivityQueryAwardResp:(id)arg1;
- (void)onGetWCPaidDetailQueryAwardCgiResp:(id)arg1;
- (void)sendQueryTinyAppActivityAwardRequest;
- (void)queryH5ActivityAwardStatusIfNeed;
- (void)OnRealnameVerifyCancelNotification:(id)arg1;
- (void)OnRealnameVerifySuccessNotification:(id)arg1;
- (id)getFirstOrderDetail;
- (id)getActivityCellInfoByBtnTag:(long long)arg1;
- (id)getOrderDetailByAwardId:(unsigned long long)arg1;
- (id)getActivityInfoByAwardId:(unsigned long long)arg1;
- (void)OnNativeActivityBtnClick:(id)arg1;
- (void)onPayPaidOrderActivityChanged;
- (void)onAppTaskDidRestoreIntermediatePageWhenLaunchWithAppId:(id)arg1;
- (void)onAppTaskWillRestoreIntermediatePageWhenLaunchWithAppId:(id)arg1;
- (id)getFavView;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)addBottomLogo;
- (void)showBizSafeTitle:(_Bool)arg1;
- (void)setCompleteBtnTitle:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)OnActivityBtnDone:(id)arg1;
- (void)makeActivityCellInfo:(id)arg1 CellInfo:(id)arg2;
- (void)makeTinyAppActivityInfoCellInfo:(id)arg1 CellInfo:(id)arg2;
- (void)makeTinyAppInfoCellInfo:(id)arg1 CellInfo:(id)arg2;
- (id)getFlowImageViewWithOrigin:(struct CGPoint)arg1;
- (void)makeSubscribeCellInfo:(id)arg1 CellInfo:(id)arg2;
- (id)getLinkActivityCell:(id)arg1;
- (void)makeLinkActivityCellInfo:(id)arg1 CellInfo:(id)arg2;
- (id)getOrderDetailView:(id)arg1;
- (id)getHeaderView;
- (id)getPaidSuccessView;
- (void)OnSelectedAppInfo:(id)arg1;
- (void)initNavigationBar;
- (void)OnNextStepBack;
- (void)OnHistoryOrderDetailBack;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)internalBackHistoryOrderDetail;
- (void)ContinueBackHistoryOrderDetail;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)showSetPwdTipsView;
- (void)BackHistoryOrderDetail;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

