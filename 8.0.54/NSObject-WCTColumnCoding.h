//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@interface NSObject (WCTColumnCoding)
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;
@end

