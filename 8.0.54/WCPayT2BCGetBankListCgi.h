//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@protocol WCPayT2BCGetBankListCgiDelegate;

@interface WCPayT2BCGetBankListCgi
{
    id <WCPayT2BCGetBankListCgiDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1;

@end
