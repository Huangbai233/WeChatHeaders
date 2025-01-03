//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, MMTableView, MMUIView, NSMutableDictionary, NSString, WCOutChargeLogic, WCOutProductInfo;

@interface WCOutRechargeViewController
{
    _Bool _canChangeCurrency;
    _Bool _needCheckCurrency;
    _Bool _needBuySelProd;
    _Bool _getSKProductFailed;
    _Bool _hasShowWebPayAlert;
    _Bool _needShowLoadingWhenActive;
    unsigned int _productBtnCount;
    unsigned int _productListRet;
    unsigned int _purchaseRet;
    unsigned int _verifyRet;
    MMTableView *_tableView;
    NSMutableDictionary *_productinfoDict;
    MMLoadingView *_loadingView;
    WCOutChargeLogic *_chargeLogic;
    NSString *_hotCoutryName;
    WCOutProductInfo *_selProd;
    NSString *_serverCurrency;
    NSString *_appleCurrency;
    MMUIView *_chargeView;
    NSString *_webPayAlertTitle;
    NSString *_webPayAlertDesc;
    NSString *_enterTs;
    NSString *_outTs;
    NSString *_productListTs;
    NSString *_productDetailTs;
    NSString *_buyClickTs;
    NSString *_buyFinishedTs;
    NSString *_buyProductId;
    NSString *_orderCurrencyType;
    NSString *_payCurrencyType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int verifyRet; // @synthesize verifyRet=_verifyRet;
@property(nonatomic) unsigned int purchaseRet; // @synthesize purchaseRet=_purchaseRet;
@property(retain, nonatomic) NSString *payCurrencyType; // @synthesize payCurrencyType=_payCurrencyType;
@property(retain, nonatomic) NSString *orderCurrencyType; // @synthesize orderCurrencyType=_orderCurrencyType;
@property(retain, nonatomic) NSString *buyProductId; // @synthesize buyProductId=_buyProductId;
@property(retain, nonatomic) NSString *buyFinishedTs; // @synthesize buyFinishedTs=_buyFinishedTs;
@property(retain, nonatomic) NSString *buyClickTs; // @synthesize buyClickTs=_buyClickTs;
@property(nonatomic) _Bool needShowLoadingWhenActive; // @synthesize needShowLoadingWhenActive=_needShowLoadingWhenActive;
@property(retain, nonatomic) NSString *productDetailTs; // @synthesize productDetailTs=_productDetailTs;
@property(nonatomic) unsigned int productListRet; // @synthesize productListRet=_productListRet;
@property(retain, nonatomic) NSString *productListTs; // @synthesize productListTs=_productListTs;
@property(nonatomic) unsigned int productBtnCount; // @synthesize productBtnCount=_productBtnCount;
@property(retain, nonatomic) NSString *outTs; // @synthesize outTs=_outTs;
@property(retain, nonatomic) NSString *enterTs; // @synthesize enterTs=_enterTs;
@property(retain, nonatomic) NSString *webPayAlertDesc; // @synthesize webPayAlertDesc=_webPayAlertDesc;
@property(retain, nonatomic) NSString *webPayAlertTitle; // @synthesize webPayAlertTitle=_webPayAlertTitle;
@property(nonatomic) _Bool hasShowWebPayAlert; // @synthesize hasShowWebPayAlert=_hasShowWebPayAlert;
@property(retain, nonatomic) MMUIView *chargeView; // @synthesize chargeView=_chargeView;
@property(nonatomic) _Bool getSKProductFailed; // @synthesize getSKProductFailed=_getSKProductFailed;
@property(nonatomic) _Bool needBuySelProd; // @synthesize needBuySelProd=_needBuySelProd;
@property(retain, nonatomic) NSString *appleCurrency; // @synthesize appleCurrency=_appleCurrency;
@property(nonatomic) _Bool needCheckCurrency; // @synthesize needCheckCurrency=_needCheckCurrency;
@property(retain, nonatomic) NSString *serverCurrency; // @synthesize serverCurrency=_serverCurrency;
@property(nonatomic) _Bool canChangeCurrency; // @synthesize canChangeCurrency=_canChangeCurrency;
@property(retain, nonatomic) WCOutProductInfo *selProd; // @synthesize selProd=_selProd;
@property(retain, nonatomic) NSString *hotCoutryName; // @synthesize hotCoutryName=_hotCoutryName;
@property(retain, nonatomic) WCOutChargeLogic *chargeLogic; // @synthesize chargeLogic=_chargeLogic;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSMutableDictionary *productinfoDict; // @synthesize productinfoDict=_productinfoDict;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getWCOutProductInfoByCellSectionIndex:(long long)arg1;
- (void)onPurchaseCancelForProduct:(id)arg1;
- (void)onPurchaseFailForProduct:(id)arg1 Err:(id)arg2;
- (void)onPurchaseSuccessForProduct:(id)arg1 ErrCode:(unsigned int)arg2;
- (_Bool)checkCurrencyType;
- (void)updateListFromAppleResponse:(_Bool)arg1 successSKProductList:(id)arg2;
- (void)didReceiveGetProductListResponse:(_Bool)arg1 Respone:(id)arg2;
- (void)loadDataFailed;
- (void)onCheckFeeClicked;
- (void)onClickBuy:(id)arg1;
- (id)getWCOutProductInfoByButtonTag:(long long)arg1;
- (void)configTableView;
- (void)configTableWithoutData;
- (void)configModel:(id)arg1;
- (void)stopLoading:(_Bool)arg1 err:(id)arg2;
- (void)startLoading;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)applicationWillResignActiveNotification:(id)arg1;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
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

