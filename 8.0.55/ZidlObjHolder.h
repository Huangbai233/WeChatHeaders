//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ZidlObjHolder : NSObject
{
    shared_ptr_f19a3d3a _cppHolderImpl;
}

+ (id)createWithCpp:(const void *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_f19a3d3a cppHolderImpl; // @synthesize cppHolderImpl=_cppHolderImpl;
- (void)dealloc;
- (shared_ptr_f19a3d3a)getObjHolderCpp;
- (void)holdZidlObj:(const void *)arg1 identity:(const void *)arg2;
- (id)zidlHolderToObj:(Class)arg1;
- (void)copyTo:(id)arg1;
- (id)init:(const void *)arg1 identity:(const void *)arg2;
- (id)init;
- (id)init:(const void *)arg1;

@end
