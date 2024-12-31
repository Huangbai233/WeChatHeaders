//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCRSA : NSObject
{
}

+ (id)decryptData:(id)arg1 privateKey:(id)arg2;
+ (id)decryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;
+ (struct __SecKey *)addPublicKey:(id)arg1;
+ (struct __SecKey *)addPrivateKey:(id)arg1;
+ (id)stripPublicKeyHeader:(id)arg1;
+ (id)stripPrivateKeyHeader:(id)arg1;

@end

