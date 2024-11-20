//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@interface MMCppUtil : NSObject
{
    struct Handle<std::shared_ptr<kinda::CppUtil>> _cppRefHandle;
}

+ (id)getFilterLog:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCpp:(const void *)arg1;

@end

