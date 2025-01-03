//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMTableView, NSDictionary, NSNumber, NSString;

@interface WCPayNewOrderDetailViewController
{
    _Bool _expandDiscount;
    _Bool _expandProducts;
    long long _payScene;
    _Bool _bNotShowedFeedbackBrandContact;
    NSString *_transId;
    NSNumber *_payType;
    NSString *_billId;
    MMTableView *_tableView;
    NSDictionary *_response;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool bNotShowedFeedbackBrandContact; // @synthesize bNotShowedFeedbackBrandContact=_bNotShowedFeedbackBrandContact;
@property(retain, nonatomic) NSString *billId; // @synthesize billId=_billId;
@property(retain, nonatomic) NSNumber *payType; // @synthesize payType=_payType;
@property(copy, nonatomic) NSString *transId; // @synthesize transId=_transId;
- (void)hackForIAP;
- (void)simpleHandleError:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)contactTitle;
- (id)helpCenterDic;
- (id)complainUrl;
- (id)complainTitle;
- (_Bool)isBusinessPay;
- (_Bool)isOpenComplain:(id)arg1;
- (id)generateBarView:(id)arg1;
- (void)goToProfileWithUsername:(id)arg1;
- (id)displayNameWithUsername:(id)arg1 trueName:(id)arg2;
- (id)dateStringFromTimestamp:(long long)arg1;
- (id)getGoodsNameNameFromResponse:(id)arg1;
- (id)getFeeNameFromResponse:(id)arg1;
- (_Bool)isIncomeResponse:(id)arg1;
- (_Bool)isFaceToFaceTransferResponse:(id)arg1;
- (_Bool)isTransferResponse:(id)arg1;
- (_Bool)isOfflinePayResponse:(id)arg1;
- (_Bool)isTradeResponse:(id)arg1;
- (void)expandProduct:(id)arg1;
- (void)expandDiscount:(id)arg1;
- (void)resendRemindReceivedMoneyMessage:(id)arg1;
- (void)goToPayer:(id)arg1;
- (void)goToReceiver:(id)arg1;
- (void)contact;
- (void)complain;
- (void)reportOrFeedbackAction:(id)arg1;
- (void)goToSellerProfile:(id)arg1;
- (void)sellerAction:(id)arg1;
- (void)reloadViewWithResponse:(id)arg1;
- (id)parseForDetailFromResponse:(id)arg1;
- (void)setupDynamicButtonInView:(id)arg1;
- (id)reportBottomViewFromResponse:(id)arg1;
- (id)detailViewFromResponse:(id)arg1;
- (id)sellerTopViewFromResponse:(id)arg1;
- (id)tableHeaderViewFromResponse:(id)arg1;
- (void)setupViews;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

