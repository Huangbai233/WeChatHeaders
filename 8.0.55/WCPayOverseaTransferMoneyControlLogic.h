//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayOverseaFacingReceiveTransferCancelCgi, WCPayOverseaFacingTransferOrderCgi, WCPayOverseaFacingTransferOrderResponse, WCPayOverseaGetTransferNameCgi, WCPayOverseaGetTransferNameResponse, WCPayOverseaTransferGetCurrencyCgi, WCPayOverseaTransferGetCurrencyCgiRespObject, WCPayOverseaTransferOrderCgi, WCPayOverseaTransferOrderResp, WCPayTransferMoneyControlLogic;

@interface WCPayOverseaTransferMoneyControlLogic
{
    int m_enWCPayTransferMoneyControlLogicScene;
    NSString *_m_nsQRCodeResponseUrl;
    WCPayOverseaTransferGetCurrencyCgi *_m_getCurrencyCgi;
    WCPayOverseaTransferOrderCgi *_m_orderCgi;
    WCPayOverseaTransferGetCurrencyCgiRespObject *_m_currencyResp;
    WCPayOverseaTransferOrderResp *_m_orderResp;
    WCPayOverseaGetTransferNameCgi *_m_getTransferNameCgi;
    WCPayOverseaGetTransferNameResponse *_m_getTransferNameReponse;
    WCPayOverseaFacingTransferOrderCgi *_m_facingTransferOrderCgi;
    WCPayOverseaFacingTransferOrderResponse *_m_facingTransferOrderResp;
    WCPayOverseaFacingReceiveTransferCancelCgi *_m_facingTransferCancelCgi;
    WCPayTransferMoneyControlLogic *_m_transferMoneyControlLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayTransferMoneyControlLogic *m_transferMoneyControlLogic; // @synthesize m_transferMoneyControlLogic=_m_transferMoneyControlLogic;
@property(retain, nonatomic) WCPayOverseaFacingReceiveTransferCancelCgi *m_facingTransferCancelCgi; // @synthesize m_facingTransferCancelCgi=_m_facingTransferCancelCgi;
@property(retain, nonatomic) WCPayOverseaFacingTransferOrderResponse *m_facingTransferOrderResp; // @synthesize m_facingTransferOrderResp=_m_facingTransferOrderResp;
@property(retain, nonatomic) WCPayOverseaFacingTransferOrderCgi *m_facingTransferOrderCgi; // @synthesize m_facingTransferOrderCgi=_m_facingTransferOrderCgi;
@property(retain, nonatomic) WCPayOverseaGetTransferNameResponse *m_getTransferNameReponse; // @synthesize m_getTransferNameReponse=_m_getTransferNameReponse;
@property(retain, nonatomic) WCPayOverseaGetTransferNameCgi *m_getTransferNameCgi; // @synthesize m_getTransferNameCgi=_m_getTransferNameCgi;
@property(retain, nonatomic) WCPayOverseaTransferOrderResp *m_orderResp; // @synthesize m_orderResp=_m_orderResp;
@property(retain, nonatomic) WCPayOverseaTransferGetCurrencyCgiRespObject *m_currencyResp; // @synthesize m_currencyResp=_m_currencyResp;
@property(retain, nonatomic) WCPayOverseaTransferOrderCgi *m_orderCgi; // @synthesize m_orderCgi=_m_orderCgi;
@property(retain, nonatomic) WCPayOverseaTransferGetCurrencyCgi *m_getCurrencyCgi; // @synthesize m_getCurrencyCgi=_m_getCurrencyCgi;
@property(retain, nonatomic) NSString *m_nsQRCodeResponseUrl; // @synthesize m_nsQRCodeResponseUrl=_m_nsQRCodeResponseUrl;
- (void)call:(id)arg1;
- (_Bool)shouldStartNativeHKCashier:(id)arg1;
- (void)reportIdkeyOverseaTransferOrderOk;
- (void)reportIdkeyOverseaTransferOrderFailed;
- (void)reportIdkeyOverseaTransferGetCurrencyOkChangeToRMB;
- (void)reportIdkeyOverseaTransferGetCurrencyOkContinue;
- (void)reportIdkeyOverseaTransferGetCurrencyOk;
- (void)reportIdkeyOverseaTransferGetCurrencyFailed;
- (void)webViewReturn:(id)arg1;
- (void)onWebViewWillClose:(id)arg1;
- (void)onWCPayOverseaTransferOrderBizErrorWithRetCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaTransferOrderCgiErrorWithRetCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onClickContinueTransfer;
- (void)onClickOpenTradeUrl;
- (void)onWCPayOverseaTransferOrderCgiRetrunHasUnreceiveTransferWithResp:(id)arg1;
- (void)onWCPayOverseaTransferOrderCgiReturnHasTheSameAmountUnreceiveTransferWithResp:(id)arg1;
- (void)onWCPayOverseaTransferOrderCgiOkWithResp:(id)arg1;
- (id)WCPayOverseaTransferViewControllerHeadImageUrl;
- (id)WCPayOverseaTransferViewControllerNickName;
- (void)WCPayOverseaTransferViewControllerOnNext:(id)arg1;
- (void)WCPayOverseaTransferViewControllerCancel;
- (void)onWCPayOverseaTransferGetCurrencyCgiErrorWithRetCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaTransferGetCurrencyBizErrorWithRetCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onWCPayOverseaTransferGetCurrencyCgiOkArgument:(id)arg1;
- (void)onWCPayOverseaFacingTransferOrderResponseCgiError:(int)arg1 errorMsg:(id)arg2;
- (void)onWCPayOverseaFacingTransferOrderResponseBizError:(int)arg1 errorMsg:(id)arg2;
- (void)onWCPayOverseaFacingTransferOrderResponseOK:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onWCPayOverseaGetTransferNameResponseCgiError:(int)arg1 errorMsg:(id)arg2;
- (void)onWCPayOverseaGetTransferNameResponseBizError:(int)arg1 errorMsg:(id)arg2;
- (void)onWCPayOverseaGetTransferNameResponseOK:(id)arg1;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithUserName:(id)arg1 walletType:(unsigned int)arg2;
- (id)initWithQRCodeUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

