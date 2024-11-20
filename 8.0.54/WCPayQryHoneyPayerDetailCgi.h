//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class QryHoneyPayerDetailReq;
@protocol WCPayQryHoneyPayerDetailCgiDelegate;

@interface WCPayQryHoneyPayerDetailCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayQryHoneyPayerDetailCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) QryHoneyPayerDetailReq *request; // @dynamic request;

@end

