//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@protocol WCRedEnvelopesGetRedPacketPreviewCgiDelegate;

@interface WCRedEnvelopesGetRedPacketPreviewCgi
{
    id <WCRedEnvelopesGetRedPacketPreviewCgiDelegate> m_delegate;
}

- (void).cxx_destruct;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

