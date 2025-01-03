//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, VcardAddress, VcardName;

@interface MMVcardItem : NSObject
{
    VcardName *_name;
    NSString *_nickName;
    NSString *_photoUrl;
    NSString *_photoType;
    NSData *_photoBuffer;
    VcardAddress *_address;
    VcardAddress *_homeAddress;
    VcardAddress *_workAddress;
    VcardAddress *_deliveryAddress;
    NSString *_phoneNumber;
    NSString *_mobilePhoneNumber;
    NSString *_homePhoneNumber;
    NSString *_workPhoneNumber;
    NSString *_telAVPhoneNumber;
    NSString *_birthday;
    NSString *_email;
    NSString *_title;
    NSString *_role;
    NSString *_logoType;
    NSData *_logoBuffer;
    NSString *_agent;
    NSString *_organization;
    NSString *_note;
    NSString *_soundType;
    NSData *_soundBuffer;
    NSString *_url;
}

+ (_Bool)setVCardItem:(id)arg1 byXml:(id)arg2;
+ (_Bool)setVcardAddress:(id)arg1 byXmlNode:(struct XmlReaderNode_t *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSData *soundBuffer; // @synthesize soundBuffer=_soundBuffer;
@property(retain, nonatomic) NSString *soundType; // @synthesize soundType=_soundType;
@property(retain, nonatomic) NSString *note; // @synthesize note=_note;
@property(retain, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(retain, nonatomic) NSString *agent; // @synthesize agent=_agent;
@property(retain, nonatomic) NSData *logoBuffer; // @synthesize logoBuffer=_logoBuffer;
@property(retain, nonatomic) NSString *logoType; // @synthesize logoType=_logoType;
@property(retain, nonatomic) NSString *role; // @synthesize role=_role;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSString *telAVPhoneNumber; // @synthesize telAVPhoneNumber=_telAVPhoneNumber;
@property(retain, nonatomic) NSString *workPhoneNumber; // @synthesize workPhoneNumber=_workPhoneNumber;
@property(retain, nonatomic) NSString *homePhoneNumber; // @synthesize homePhoneNumber=_homePhoneNumber;
@property(retain, nonatomic) NSString *mobilePhoneNumber; // @synthesize mobilePhoneNumber=_mobilePhoneNumber;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) VcardAddress *deliveryAddress; // @synthesize deliveryAddress=_deliveryAddress;
@property(retain, nonatomic) VcardAddress *workAddress; // @synthesize workAddress=_workAddress;
@property(retain, nonatomic) VcardAddress *homeAddress; // @synthesize homeAddress=_homeAddress;
@property(retain, nonatomic) VcardAddress *address; // @synthesize address=_address;
@property(retain, nonatomic) NSData *photoBuffer; // @synthesize photoBuffer=_photoBuffer;
@property(retain, nonatomic) NSString *photoType; // @synthesize photoType=_photoType;
@property(retain, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) VcardName *name; // @synthesize name=_name;
- (void)print;
- (id)init;

@end

