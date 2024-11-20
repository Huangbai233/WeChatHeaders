//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NSData, NSMutableArray, NSMutableSet, WCFinderFeedFollowVM;

@interface WCFinderFollowTabDetailVMForAuthorSingleflow
{
    _Bool _noMoreData;
    WCFinderFeedFollowVM *_followVM;
    NSMutableSet *_tidSet;
    NSMutableArray *_allDataItems;
    unsigned long long _preFetchNextPageIndex;
    NSData *_lastBuf;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuf; // @synthesize lastBuf=_lastBuf;
@property(nonatomic) unsigned long long preFetchNextPageIndex; // @synthesize preFetchNextPageIndex=_preFetchNextPageIndex;
@property(nonatomic) _Bool noMoreData; // @synthesize noMoreData=_noMoreData;
@property(retain, nonatomic) NSMutableArray *allDataItems; // @synthesize allDataItems=_allDataItems;
@property(retain, nonatomic) NSMutableSet *tidSet; // @synthesize tidSet=_tidSet;
@property(retain, nonatomic) WCFinderFeedFollowVM *followVM; // @synthesize followVM=_followVM;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)contentVMWithDataItem:(id)arg1;
- (id)contentVmWithVM:(id)arg1;
- (void)updateUploadingDataItem:(id)arg1;
- (void)deleteContentVM:(id)arg1;
- (void)appendContentVM:(id)arg1;
- (void)appendDataItem:(id)arg1;
- (void)fetchDataWithIsFirstPage:(_Bool)arg1;
- (void)fetchNextPageData;
- (void)fetchFirstPageData;
- (_Bool)needFetchFirstPageData;
- (id)contentVMOfTid:(id)arg1;
- (long long)indexOfTid:(id)arg1;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (unsigned long long)allDataCount;
- (_Bool)hasFetchFirstPageData;
- (_Bool)hasMoreData;
- (id)initWithFeedFollowVM:(id)arg1 preVCData:(id)arg2;

@end

