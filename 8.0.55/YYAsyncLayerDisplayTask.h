//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface YYAsyncLayerDisplayTask : NSObject
{
    CDUnknownBlockType _willDisplay;
    CDUnknownBlockType _display;
    CDUnknownBlockType _displayContentsForLayer;
    CDUnknownBlockType _didDisplay;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didDisplay; // @synthesize didDisplay=_didDisplay;
@property(copy, nonatomic) CDUnknownBlockType displayContentsForLayer; // @synthesize displayContentsForLayer=_displayContentsForLayer;
@property(copy, nonatomic) CDUnknownBlockType display; // @synthesize display=_display;
@property(copy, nonatomic) CDUnknownBlockType willDisplay; // @synthesize willDisplay=_willDisplay;

@end
