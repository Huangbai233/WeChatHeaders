//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMAddressBook, NSString;

@interface AddressBookFriend : NSObject
{
    MMAddressBook *m_addressBook;
    NSString *m_username;
    NSString *m_aliasname;
    NSString *m_nickname;
    _Bool m_isInMyContactList;
    unsigned int m_uiSex;
    NSString *m_nsCountry;
    NSString *m_nsProvince;
    NSString *m_nsCity;
    NSString *m_nsSignature;
    NSString *m_nsWCBGImgObjectID;
    int m_iWCFlag;
    NSString *m_pcWCBGImgID;
    NSString *m_nsExternalInfo;
    NSString *m_nsBrandSubscriptConfigUrl;
    unsigned int m_uiBrandSubscriptionSettings;
    NSString *m_nsBrandIconUrl;
    NSString *m_nsHeadImgUrl;
    NSString *m_nsHeadHDImgUrl;
    NSString *m_nsAntispamTicket;
    _Bool _bWaitForVerify;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bWaitForVerify; // @synthesize bWaitForVerify=_bWaitForVerify;
@property(retain, nonatomic) NSString *m_nsAntispamTicket; // @synthesize m_nsAntispamTicket;
@property(retain, nonatomic) NSString *m_nsHeadHDImgUrl; // @synthesize m_nsHeadHDImgUrl;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
@property(retain, nonatomic) NSString *m_nsBrandIconUrl; // @synthesize m_nsBrandIconUrl;
@property(nonatomic) unsigned int m_uiBrandSubscriptionSettings; // @synthesize m_uiBrandSubscriptionSettings;
@property(retain, nonatomic) NSString *m_nsBrandSubscriptConfigUrl; // @synthesize m_nsBrandSubscriptConfigUrl;
@property(retain, nonatomic) NSString *m_nsExternalInfo; // @synthesize m_nsExternalInfo;
@property(retain, nonatomic) NSString *m_pcWCBGImgID; // @synthesize m_pcWCBGImgID;
@property(nonatomic) int m_iWCFlag; // @synthesize m_iWCFlag;
@property(retain, nonatomic) NSString *m_nsWCBGImgObjectID; // @synthesize m_nsWCBGImgObjectID;
@property(retain, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(retain, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity;
@property(retain, nonatomic) NSString *m_nsProvince; // @synthesize m_nsProvince;
@property(retain, nonatomic) NSString *m_nsCountry; // @synthesize m_nsCountry;
@property(nonatomic) unsigned int m_uiSex; // @synthesize m_uiSex;
@property(nonatomic) _Bool m_isInMyContactList; // @synthesize m_isInMyContactList;
@property(retain, nonatomic) NSString *m_nickname; // @synthesize m_nickname;
@property(retain, nonatomic) NSString *m_aliasname; // @synthesize m_aliasname;
@property(retain, nonatomic) NSString *m_username; // @synthesize m_username;
@property(retain, nonatomic) MMAddressBook *m_addressBook; // @synthesize m_addressBook;
- (void)updateContact:(id)arg1;
- (_Bool)copyPatialFieldFromAddressBookFriend:(id)arg1;
- (long long)compareMobileFriendAscending:(id)arg1;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)init;

@end

