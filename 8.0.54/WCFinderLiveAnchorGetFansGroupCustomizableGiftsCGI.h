//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@interface WCFinderLiveAnchorGetFansGroupCustomizableGiftsCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithSuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;

@end

