//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BaseResponseErrMsg, NSMutableArray;

@interface LbsContactInfoList : NSObject
{
    NSMutableArray *m_LbsContactList;
    int m_iRet;
    BaseResponseErrMsg *m_ErrorMsg;
    long long m_iState;
    long long m_iFlushTime;
    _Bool m_iIsShowRoom;
    long long m_iRoomMemberCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_iRoomMemberCount; // @synthesize m_iRoomMemberCount;
@property(nonatomic) _Bool m_iIsShowRoom; // @synthesize m_iIsShowRoom;
@property(nonatomic) long long m_iFlushTime; // @synthesize m_iFlushTime;
@property(nonatomic) long long m_iState; // @synthesize m_iState;
@property(retain, nonatomic) BaseResponseErrMsg *m_ErrorMsg; // @synthesize m_ErrorMsg;
@property(nonatomic) int iRet; // @synthesize iRet=m_iRet;
@property(retain, nonatomic) NSMutableArray *lbsContactList; // @synthesize lbsContactList=m_LbsContactList;
- (void)replaceLbsContactListAtIndexes:(id)arg1 withLbsContactList:(id)arg2;
- (void)replaceObjectInLbsContactListAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLbsContactListAtIndexes:(id)arg1;
- (void)removeObjectFromLbsContactListAtIndex:(unsigned long long)arg1;
- (void)insertLbsContactList:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inLbsContactListAtIndex:(unsigned long long)arg2;
- (id)objectInLbsContactListAtIndex:(unsigned long long)arg1;
- (void)getLbsContactList:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)countOfLbsContactList;
- (void)removeFromLbsContactList:(id)arg1;
- (void)addToLbsContactList:(id)arg1;
- (id)description;
- (id)keyPaths;
- (id)init;

@end

