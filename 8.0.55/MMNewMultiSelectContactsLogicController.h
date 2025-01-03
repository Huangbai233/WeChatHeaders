//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol MMNewMultiSelectContactsLogicDelegate;

@interface MMNewMultiSelectContactsLogicController
{
    id <MMNewMultiSelectContactsLogicDelegate> _delegate;
    NSMutableArray *_contactsKeyArray;
    NSMutableDictionary *_contactsDict;
    NSArray *_chatroomMemberList;
    unsigned long long _dataMode;
    NSMutableArray *_existContactList;
    NSString *_taskKey;
    CContact *_chatroomContact;
    NSMutableArray *_searchContactList;
    NSString *_searchKeyword;
    NSMutableArray *_strangerContactList;
    NSMutableArray *_selectedContacts;
    unsigned long long _multiSelectLimitCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long multiSelectLimitCount; // @synthesize multiSelectLimitCount=_multiSelectLimitCount;
@property(retain, nonatomic) NSMutableArray *selectedContacts; // @synthesize selectedContacts=_selectedContacts;
@property(retain, nonatomic) NSMutableArray *strangerContactList; // @synthesize strangerContactList=_strangerContactList;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(retain, nonatomic) NSMutableArray *searchContactList; // @synthesize searchContactList=_searchContactList;
@property(retain, nonatomic) CContact *chatroomContact; // @synthesize chatroomContact=_chatroomContact;
@property(retain, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
@property(retain, nonatomic) NSMutableArray *existContactList; // @synthesize existContactList=_existContactList;
@property(nonatomic) unsigned long long dataMode; // @synthesize dataMode=_dataMode;
@property(retain, nonatomic) NSArray *chatroomMemberList; // @synthesize chatroomMemberList=_chatroomMemberList;
@property(retain, nonatomic) NSMutableDictionary *contactsDict; // @synthesize contactsDict=_contactsDict;
@property(retain, nonatomic) NSMutableArray *contactsKeyArray; // @synthesize contactsKeyArray=_contactsKeyArray;
@property(nonatomic) __weak id <MMNewMultiSelectContactsLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)doChatRoomSearch:(id)arg1;
- (void)handleContactSearchChatRoomMemberListExit;
- (void)searchContactInChatRoomMemberListWithKeyword:(id)arg1;
- (void)handleContactSearchInChatRoomMemberListBegin;
- (void)onFTSContactSearchFinish:(id)arg1;
- (void)delaySearch:(id)arg1;
- (void)handleContactSearchInAllFriendsExit;
- (void)searchContactInAllFriendsWithKeyword:(id)arg1;
- (void)handleContactSearchInAllFriendsBegin;
- (id)addSectionKey:(id)arg1;
- (void)addContact:(id)arg1;
- (void)removeSelectContact:(id)arg1;
- (void)onContactsDataChange;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)handleUnSelectWithContact:(id)arg1;
- (_Bool)hasSelectedContact;
- (unsigned long long)getCurrentSelectedContactCount;
- (id)getAllSelectedContacts;
- (void)handleContactsTableViewSelectWithIndexPath:(id)arg1 isSearching:(_Bool)arg2;
- (void)handleContactSearchDidExit;
- (void)handleContactSearchWithKeyword:(id)arg1;
- (void)handleContactSearchDidBegin;
- (id)getContactWithIndexPath:(id)arg1 isSearching:(_Bool)arg2;
- (id)getAllSearchResult;
- (id)getAllChatRoomContact;
- (id)getAllContactsWithKey:(id)arg1;
- (id)getContactKeyArray;
- (_Bool)isContactSelected:(id)arg1;
- (_Bool)isContactExist:(id)arg1;
- (id)getAllExistContact;
- (void)setExistCotnactArray:(id)arg1;
- (void)setLimitCount:(unsigned long long)arg1;
- (void)initDatasWithAllFriendContactsAndChatroomContact;
- (void)initDatasWithChatRoomContact:(id)arg1;
- (void)initDatasWithAllFriendContacts;
- (void)commonInit;
- (id)initWithChatRoomContact:(id)arg1;
- (id)initWithAllFriendContacts;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

