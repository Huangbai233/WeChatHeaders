//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderUploadTask;

@interface WCFinderMusicPostDraftCGI
{
    WCFinderUploadTask *_task;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) WCFinderUploadTask *task; // @synthesize task=_task;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithUploadTask:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;

@end
