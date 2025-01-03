//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCPayDigitalCertPayManageResp : NSObject
{
    int _m_showCrtInfo;
    int _m_isCrtInstall;
    int _cert_encrypt_type;
    NSMutableArray *_m_crtList;
    NSString *_crt_entry_title;
    NSString *_crt_entry_desc;
    NSString *_crt_status_name;
    NSString *_crt_item_logo_url;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int cert_encrypt_type; // @synthesize cert_encrypt_type=_cert_encrypt_type;
@property(copy, nonatomic) NSString *crt_item_logo_url; // @synthesize crt_item_logo_url=_crt_item_logo_url;
@property(copy, nonatomic) NSString *crt_status_name; // @synthesize crt_status_name=_crt_status_name;
@property(copy, nonatomic) NSString *crt_entry_desc; // @synthesize crt_entry_desc=_crt_entry_desc;
@property(copy, nonatomic) NSString *crt_entry_title; // @synthesize crt_entry_title=_crt_entry_title;
@property(retain, nonatomic) NSMutableArray *m_crtList; // @synthesize m_crtList=_m_crtList;
@property(nonatomic) int m_isCrtInstall; // @synthesize m_isCrtInstall=_m_isCrtInstall;
@property(nonatomic) int m_showCrtInfo; // @synthesize m_showCrtInfo=_m_showCrtInfo;
- (void)genFromDic:(id)arg1;

@end

