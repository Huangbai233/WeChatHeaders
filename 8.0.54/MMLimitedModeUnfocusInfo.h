//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLimitedModeUnfocusInfo : NSObject
{
    unsigned int _businessType;
    NSString *_userName;
    NSString *_nickName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;

@end

