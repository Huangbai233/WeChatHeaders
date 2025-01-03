//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CUploadImgWrap : NSObject
{
    NSString *m_nsFromUsr;
    NSString *m_nsToUsr;
    unsigned int m_uiLocalID;
    long long m_n64SvrID;
    unsigned int m_uiTotalLen;
    unsigned int m_uiStartPos;
    unsigned int m_uiDataLen;
    NSData *m_dtBuffer;
    unsigned int m_uiCreateTime;
    unsigned int m_uiMessageType;
    unsigned int m_uiSendTime;
    _Bool m_bHDImg;
    _Bool m_bWifi;
    unsigned int m_uiSource;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiSource; // @synthesize m_uiSource;
@property(nonatomic) _Bool m_bWifi; // @synthesize m_bWifi;
@property(nonatomic) _Bool m_bHDImg; // @synthesize m_bHDImg;
@property(nonatomic) unsigned int m_uiSendTime; // @synthesize m_uiSendTime;
@property(nonatomic) unsigned int m_uiMessageType; // @synthesize m_uiMessageType;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(retain, nonatomic) NSData *m_dtBuffer; // @synthesize m_dtBuffer;
@property(nonatomic) unsigned int m_uiDataLen; // @synthesize m_uiDataLen;
@property(nonatomic) unsigned int m_uiStartPos; // @synthesize m_uiStartPos;
@property(nonatomic) unsigned int m_uiTotalLen; // @synthesize m_uiTotalLen;
@property(nonatomic) long long m_n64SvrID; // @synthesize m_n64SvrID;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
@property(retain, nonatomic) NSString *m_nsToUsr; // @synthesize m_nsToUsr;
@property(retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr;
- (id)init;

@end

