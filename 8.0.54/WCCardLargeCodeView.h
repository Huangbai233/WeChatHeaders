//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NSString, UIView, WCCardDataCardInfo, WCCardDataCardTPInfo;
@protocol WCCardDataSource, WCCardLargeCodeViewDelegate;

@interface WCCardLargeCodeView
{
    WCCardDataCardTPInfo *_cardTpInfo;
    WCCardDataCardInfo *_cardInfo;
    id <WCCardDataSource> _cardDataSource;
    struct CGRect _originRect;
    _Bool _animating;
    _Bool _isOnShow;
    UIView *_codeContainView;
    unsigned int _offlineCodeStatus;
    id <WCCardLargeCodeViewDelegate> m_delegte;
    NSString *_dynamicCode;
    NSString *_dynamicOfflineCode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int offlineCodeStatus; // @synthesize offlineCodeStatus=_offlineCodeStatus;
@property(retain, nonatomic) NSString *dynamicOfflineCode; // @synthesize dynamicOfflineCode=_dynamicOfflineCode;
@property(retain, nonatomic) NSString *dynamicCode; // @synthesize dynamicCode=_dynamicCode;
@property(nonatomic) __weak id <WCCardLargeCodeViewDelegate> m_delegte; // @synthesize m_delegte;
- (void)onCloseView;
- (id)genDataMatrixWithQrLevel:(id)arg1 cardCode:(id)arg2;
- (void)closeCodeView;
- (id)createCodeNumView:(id)arg1;
- (void)viewTapped:(id)arg1;
- (void)dealloc;
- (void)updateViewStatus;
- (void)refresh:(id)arg1;
- (id)getCodeViewWithCode:(id)arg1;
- (id)getBlurCodeView;
- (void)setupViewWithAnimation:(_Bool)arg1;
- (void)initView;
- (void)updateLargeCodeView:(id)arg1 dynamicCode:(id)arg2 offlineCode:(id)arg3 offlineCodeStatus:(unsigned int)arg4;
- (void)willChangeToSplitMode;
- (id)initWithCodeRect:(struct CGRect)arg1 cardSource:(id)arg2 dynamicCode:(id)arg3 offlineCode:(id)arg4 offlineCodeStatus:(unsigned int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

