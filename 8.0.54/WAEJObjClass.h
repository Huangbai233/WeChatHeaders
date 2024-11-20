//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class WAEJBindingGfx;

@interface WAEJObjClass : NSObject
{
    WAEJBindingGfx *gfx_;
}

- (void)makeRenderingContext;
- (void)setRenderingContextDirty;
- (void)setCurrentContext:(void *)arg1;
- (unsigned int)get_gfx_object_id:(void *)arg1;
- (struct _sg_state_t *)get_sg_state:(void *)arg1;
- (void)dealloc;

@end

