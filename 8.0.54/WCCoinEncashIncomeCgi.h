//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class EncashIncomeRequest, EncashIncomeResponse;
@protocol WCCoinEncashIncomeCgiDelegate;

@interface WCCoinEncashIncomeCgi
{
    EncashIncomeResponse *_response;
    id <WCCoinEncashIncomeCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCoinEncashIncomeCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EncashIncomeResponse *response; // @synthesize response=_response;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

// Remaining properties
@property(retain, nonatomic) EncashIncomeRequest *request; // @dynamic request;

@end

