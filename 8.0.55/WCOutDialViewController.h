//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetWCOCallInfoResponse, MMUILabel, NSMutableString, NSString, UIButton, UILabel, WCOutDialPad, WCOutGetCallInfoCgi;

@interface WCOutDialViewController
{
    UIButton *m_deleteBtn;
    UIButton *m_countryCodeBtn;
    UILabel *m_countryNameLabel;
    UILabel *m_phoneNumLabel;
    UILabel *m_contactNameLabel;
    WCOutDialPad *m_dialPad;
    _Bool m_isEditingCountryCode;
    NSString *m_countryCodeChosen;
    NSMutableString *m_editingCountryCodeText;
    NSMutableString *m_editingPhoneText;
    NSString *m_defaultInput;
    _Bool needDisMissSelf;
    unsigned long long DialScece;
    _Bool hasUserEditFullNumber;
    _Bool hasCheckNumber;
    MMUILabel *_freeTipsLabel;
    WCOutGetCallInfoCgi *_getCallinfo;
    GetWCOCallInfoResponse *_callinfoResp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GetWCOCallInfoResponse *callinfoResp; // @synthesize callinfoResp=_callinfoResp;
@property(retain, nonatomic) WCOutGetCallInfoCgi *getCallinfo; // @synthesize getCallinfo=_getCallinfo;
@property(retain, nonatomic) MMUILabel *freeTipsLabel; // @synthesize freeTipsLabel=_freeTipsLabel;
- (_Bool)isFreeCallCountry:(id)arg1;
- (void)GetCallInfoResponse:(int)arg1 Request:(id)arg2 Response:(id)arg3;
- (void)getPackageList;
- (void)OnCheckNumberResp:(unsigned int)arg1 RespCountryCode:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (void)chooseCountryCode;
- (void)OnPressedDialPadFunctionBtnWithType:(unsigned long long)arg1;
- (void)OnPressedDialPadKeyWithText:(id)arg1 andKeyCode:(int)arg2;
- (void)checkFreeTipsLabel;
- (void)updatePhoneNumLabel;
- (void)updateCountryCodeAndNeedSave:(_Bool)arg1;
- (void)removeLastTextFromPhoneNumText;
- (void)removeLastTextFromCountryCodeText;
- (void)removeLastTextFromInput;
- (void)appendToPhoneNumTextWithNextChar:(id)arg1;
- (void)beginToEditCountryCode;
- (_Bool)checkIsEditingCountryCode:(_Bool)arg1;
- (void)appendToCountryCodeTextWithNextChar:(id)arg1;
- (void)appendToInputWithNextChar:(id)arg1;
- (void)appendToInputWithText:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onPasteToInputLabel;
- (void)onCopyInputLabel;
- (void)onShowOperationMenu:(id)arg1;
- (void)didLongPressDeleteBtn:(id)arg1;
- (void)didPressedButton:(id)arg1;
- (void)initView;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithInput:(id)arg1 PhoneNum:(id)arg2 DialScece:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

