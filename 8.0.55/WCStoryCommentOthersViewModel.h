//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCStoryDataItem, WCStoryPreviewReportObj;
@protocol WCStoryCommentOthersViewModelDelegate;

@interface WCStoryCommentOthersViewModel : NSObject
{
    id <WCStoryCommentOthersViewModelDelegate> _delegate;
    NSString *_tid;
    WCStoryDataItem *_dataItem;
    NSMutableArray *_cellHeights;
    WCStoryPreviewReportObj *_reportObj;
}

+ (id)viewModelWithTid:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCStoryPreviewReportObj *reportObj; // @synthesize reportObj=_reportObj;
@property(retain, nonatomic) NSMutableArray *cellHeights; // @synthesize cellHeights=_cellHeights;
@property(retain, nonatomic) WCStoryDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(readonly, copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) __weak id <WCStoryCommentOthersViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setPreviewReportObj:(id)arg1;
- (void)onDataItemHasUpdate:(id)arg1;
- (id)genCellHeightsWithDataItem:(id)arg1;
- (void)deleteComment:(id)arg1 successFul:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)commitWithText:(id)arg1 forReplyComment:(id)arg2;
- (void)makeStoryUserRelatedCommentsAllReaded;
- (_Bool)hasComments;
- (id)comments;
- (void)startReceiveDataUpdate;
- (id)initWithTid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
