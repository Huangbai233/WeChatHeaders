//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSString;

@interface TingMembershipManager : NSObject
{
}

- (void)onMembershipInfoUpdated:(id)arg1;
- (void)onMembershipStatusChanged:(int)arg1 toStatus:(int)arg2;
- (void)didWillEnterForegroundNotification:(id)arg1;
- (void)refreshMembershipInfoIfNeeded;
- (void)setNeedsUpdateMembershipInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
